/*! v.0.0.4d3 !*/

/*
*  #include <WiFi.h>
*  #include <HTTPClient.h>
*/

void sel_mode(byte _mode){
    Serial.print("WiFi mode: ");
    if (_mode == 0){Serial.println("Not define");}
    else if (_mode == 1){WiFi.mode(WIFI_STA); Serial.println("WIFI_STA");}
    else if (_mode == 2){WiFi.mode(WIFI_AP); Serial.println("WIFI_AP");}
    else if (_mode == 3){WiFi.mode(WIFI_AP_STA); Serial.println("WIFI_AP_STA");}
}

byte ctf(byte _begin, const char *ssid, const char *pass){
    byte ei = 0;

    Serial.print("Begin: ");
    (!_begin) ? Serial.println("Normal") : Serial.println("softAP");
    Serial.print("\nConnecting to ");
    Serial.println(ssid);

    if (!_begin){
        WiFi.begin(ssid, pass);
        while (WiFi.status() != WL_CONNECTED){
            Serial.print(".");
            delay(500);
            ei++;

            //time out = 5 secound
            if (ei == 10){
                WiFi.disconnect();
                Serial.print("\nCan't connect to ");
                Serial.println(ssid);

                return 0;
            }
        }
    }
    else{
        WiFi.softAP(ssid, pass);
    }
}

void debug(byte _begin, const char *ssid, const char *pass){
    Serial.print("SSID: ");
    Serial.println(ssid);
    Serial.print("Password: ");
    Serial.println(pass);
}

/*----------------------------------------------------------------------------------------------------------------------------------------------------------------*/

bool initWiFi(byte _mode, byte _begin, const char *ssid, const char *pass){
    sel_mode(_mode);
    debug(_begin, ssid, pass);
    ctf(_begin, ssid, pass);
    Serial.print("\nConnected to ");
    Serial.println(WiFi.SSID());
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
    Serial.print("AP IP address: ");
    Serial.println(WiFi.softAPIP());

    return 1;
}

bool initWiFiSc(byte _mode, byte _begin, const char *ssid, const char *pass, const char *host, const char *key){
    sel_mode(_mode);
    debug(_begin, ssid, pass);
    ctf(_begin, ssid, pass);
    HTTPClient http;

    Serial.print("[HTTP] begin...\n");
    // configure traged server and url
    //http.begin("https://www.howsmyssl.com/a/check", ca); //HTTPS
    http.begin(host); //HTTP
    Serial.print("[HTTP] Post...\n");
    // start connection and send HTTP header
    int httpCode = http.POST(key);
    // httpCode will be negative on error
    if(httpCode > 0){
        // HTTP header has been send and Server response header has been handled
        Serial.printf("[HTTP] Post... code: %d\n", httpCode);
        // file found at server
        if(httpCode == HTTP_CODE_OK){
            String payload = http.getString();
            Serial.println(payload);
        }
    }
    else{
        Serial.printf("[HTTP] Post... failed, error: %s\n", http.errorToString(httpCode).c_str());
    }
    http.end();
    
    Serial.print("\nConnected to ");
    Serial.println(WiFi.SSID());
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());

    return 1;
}

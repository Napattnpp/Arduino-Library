/*! v.0.0.2 !*/

bool connectToWiFi(const char *ssid, const char *pass){
    byte ei = 0;

    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, pass);
    Serial.print("\nConnecting to ");
    Serial.println(ssid);
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
    Serial.print("\nConnected to ");
    Serial.println(WiFi.SSID());
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());

    return 1;
}

bool connectToWiFiSc(const char *ssid, const char *pass, const char *host, const char *key){
    byte ei = 0;

    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, pass);
    Serial.print("\nConnecting to ");
    Serial.println(ssid);
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
    HTTPClient http;

    USE_SERIAL.print("[HTTP] begin...\n");
    // configure traged server and url
    //http.begin("https://www.howsmyssl.com/a/check", ca); //HTTPS
    http.begin(host); //HTTP
    USE_SERIAL.print("[HTTP] Post...\n");
    // start connection and send HTTP header
    int httpCode = http.Post(key);
    // httpCode will be negative on error
    if(httpCode > 0){
        // HTTP header has been send and Server response header has been handled
        USE_SERIAL.printf("[HTTP] Post... code: %d\n", httpCode);
        // file found at server
        if(httpCode == HTTP_CODE_OK){
            String payload = http.getString();
            USE_SERIAL.println(payload);
        }
    }
    else{
        USE_SERIAL.printf("[HTTP] Post... failed, error: %s\n", http.errorToString(httpCode).c_str());
    }
    http.end();
    Serial.print("\nConnected to ");
    Serial.println(WiFi.SSID());
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());

    return 1;
}

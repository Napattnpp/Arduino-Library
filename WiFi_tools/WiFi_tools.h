/*! v.0.0.1 !*/

bool connectToWiFi(const char *ssid, const char *password){
    byte ei = 0;

    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, password);
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

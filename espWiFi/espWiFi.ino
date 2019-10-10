#include <ESP8266WiFi.h>

void setup()
 {
 Serial.begin(9600);
 const char* ssid     = "esp";
 const char* password = "password";
 Serial.print("Connecting to ");
 Serial.println(ssid);
 WiFi.mode(WIFI_STA); // Задаем режим работы WIFI_STA (клиент)
 WiFi.begin(ssid, password); // Подключаемся
 while (WiFi.status() != WL_CONNECTED) // Ждем пока статус не станет WL_CONNECTED
 {
 delay(500);
 }
 Serial.println("WiFi connected");
 Serial.print("IP address: ");
 Serial.println(WiFi.localIP()); // показывает наше IP
 }
 void loop()
 {}

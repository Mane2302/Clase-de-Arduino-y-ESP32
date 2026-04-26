#include <WiFiManager.h>
#include <WiFi.h>
#include <WebServer.h>

int LEDR = 14;
WebServer server(80);

void handleRoot() {
  String html = "<html><body style='text-align:center;'>"
                "<h1>Control LED</h1>"
                "<button onclick=\"fetch('/on')\">Encender</button>"
                "<button onclick=\"fetch('/off')\">Apagar</button>"
                "</body></html>";
  server.send(200, "text/html", html);
}

void handleOn() {
  digitalWrite(LEDR, HIGH); // prende
  server.send(200, "text/plain", "ON");
}

void handleOff() {
  digitalWrite(LEDR, LOW); // apaga
  server.send(200, "text/plain", "OFF");
}

void setup() {
  WiFi.mode(WIFI_STA);
  Serial.begin(115200);

  pinMode(LEDR, OUTPUT);
  digitalWrite(LEDR, HIGH);

  WiFiManager wm;
 WiFi.softAP("ESP32_LED", "12345678");
 Serial.println(WiFi.softAPIP());

  Serial.println(WiFi.localIP());

  server.on("/", handleRoot);
  server.on("/on", handleOn);
  server.on("/off", handleOff);
  server.begin();
}

void loop() {
  server.handleClient();
}

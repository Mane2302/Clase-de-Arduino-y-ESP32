#include <WiFi.h> // Control de WiFi en ESP32
#include <WebServer.h> // Servidor web interno
 
 //VARIABLES
int LEDR = 14; //LED rojo en pin DGPIO 14
WebServer server(80); // Servidor web en puerto 80 (HTTP)
//ip: 192.168.4.1


//PÁGINA WEB
void handleRoot() {
  String html = "<html><body style='text-align:center;'>" //centramos todo en la pagina y escalamos
                "<meta name='viewport' content='width=device-width,initial-scale=1'>"
                "<h1>Control LED</h1>"
                "<button onclick=\"fetch('/on')\">Encender</button>" //fetch hace una petición a la ESP32 llamando a /on
                "<button onclick=\"fetch('/off')\">Apagar</button>"
                "</body></html>";
  server.send(200, "text/html", html); //(codigo HTTP OK, contenido, lo que se muestra)
}


//PETICIONES
void handleOn() {
  digitalWrite(LEDR, HIGH); // prende
  server.send(200, "text/plain", "ON");
}

void handleOff() {
  digitalWrite(LEDR, LOW); // apaga
  server.send(200, "text/plain", "OFF");
}


void setup() {
  //WiFi.mode(WIFI_STA);
  Serial.begin(115200);

  pinMode(LEDR, OUTPUT); //pin como salida
  digitalWrite(LEDR, LOW); //iniciamos con el pin apagado

  //creamos nuestra propia RED con softAP
  WiFi.softAP("ESP32_LED", "12345678");
  Serial.println(WiFi.softAPIP());

  //Define qué función se ejecuta según la URL
  server.on("/", handleRoot);
  server.on("/on", handleOn);
  server.on("/off", handleOff);

  server.begin(); //activamos el servidor
}

void loop() {

  server.handleClient(); //se ejecuta constantemente para recibir las peticiones de la web
}

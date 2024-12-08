//Inicializamos las variables
//int LEDPin = 8; //arduino
int LEDPin = 2;//esp32

void setup() {
  pinMode(LEDPin, OUTPUT); //Inicilizamos el pin digital 8 como salida

}

void loop() {
  // aqui agregamos código que se repetirá constantemente
  digitalWrite(LEDPin, HIGH); //Encendemos el LED
  delay(1000); //pausa de 1 segundo
  digitalWrite(LEDPin, LOW); //Apagamos el LED
  delay(1000); //pausa de 1 segundo

}

#include <Servo.h>

Servo myservo;  // Crea un objeto servo para controlar un servo, puede llegar a ocho
int pos = 0;    // variable para almacenar la posición del servo

void setup() {
  myservo.attach(9);  // conecta el servo en el pin 9 del arduino al objeto servo
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // va de 0 grados a 180 grados
    // aumenta en 1 grado
    myservo.write(pos);              
    delay(15);                       // espera 15 ms para que el servo alcance la posición
  }
  for (pos = 180; pos >= 0; pos -= 1) { // Va de 180 grados a 0 grados
    myservo.write(pos);              
    delay(15);                       // espera 15 ms para que el servo alcance la posición
  }
}


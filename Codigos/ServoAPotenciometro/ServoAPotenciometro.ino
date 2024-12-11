#include <Servo.h>  		// incluye libreria de Servo

Servo miservo;			// crea objeto

int PINSERVO = 2;		// pin 2 conectado a señal del servo
int PULSOMIN = 500;		// pulso minimo en microsegundos
int PULSOMAX = 2500;		// pulso maximo en microsegundos
int VALORPOT;			// variable para almacenar valor leido en entrada A0
int ANGULO;			// valor de angulo a cargar en el servo

int POT = 0;			// potenciometro en entrada analogica A0

void setup()
{
  miservo.attach(PINSERVO, PULSOMIN, PULSOMAX);	// inicializacion de servo
// las entradas analogicas no requieren inicializacion
}

void loop()
{
  VALORPOT = analogRead(POT);			// lee valor de entrada A0
  ANGULO = map(VALORPOT, 0, 1023, 0, 180);	// con la funcion map convierte el rango de 0 a 1023
						// a rango de angulo de 0 a 180
  miservo.write(ANGULO);				// envia al servo el valor del angulo
  delay(20);					// demora para que el servo llegue a posicion
}
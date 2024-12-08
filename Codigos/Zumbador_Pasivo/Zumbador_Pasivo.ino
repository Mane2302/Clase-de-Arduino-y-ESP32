//Do (262Hz), Re (294Hz), Mi (330Hz), Fa (349Hz), So (392Hz), La (440Hz), Si (494Hz) to Treble Do (524Hz).
int Do = 262, Re = 294 , Mi = 330 , Fa = 349 , Sol = 392 , 
    La = 440 , Si = 494, Do2 = 524;


//int buzz = 8; //pin 8 del arduino
//int buzz = 15;//pin d15 de esp32

int wait = 0; 
void setup()
{
  pinMode(buzz, OUTPUT);//inicializamos el buzzer como salida
}
void loop()
{
  
  wait = 500;
  tone(buzz, Do, wait);
  delay(1000);//pausa de 1 segundo
  tone(buzz, Re, wait);
  delay(1000);
  tone(buzz, Mi, wait);
  delay(1000);
  tone(buzz, Fa, wait);   
  delay(1000);
  tone(buzz, Sol, wait);
  delay(1000);
  tone(buzz, La, wait);
  delay(1000);
  tone(buzz, Si, wait);
  delay(1000);
  tone(buzz, Do2, wait);
  delay(1000);
  
        noTone(buzz);
}


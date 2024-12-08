//int buzzer = 8;//el pin 8 del zumbador activo arduino
//int buzzer = 15;//el pin d15 del zumbador activo esp32
void setup()
{
  pinMode(buzzer,OUTPUT);//Inicializa el pin del zumbador como una salida
}
void loop()
{

digitalWrite(buzzer,HIGH);
delay(100);//espera 1ms
digitalWrite(buzzer,LOW);
delay(100);//espera 1ms

}
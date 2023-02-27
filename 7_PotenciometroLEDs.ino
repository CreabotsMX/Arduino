void setup()
{
  Serial.begin(9600);
  
  for(byte i = 2; i<8; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
}

void loop()
{
  int lectura = analogRead(A3);
  delay(1);
  Serial.print("Pot: "); //Imprime en pantalla el texto
  Serial.println(lectura);
  
  int cantidadLeds = map(lectura,0,1023,0,6);
  
  Serial.print("LEDs: ");
  Serial.println(cantidadLeds);
  Serial.println();
  
  
  for(byte i = 0; i < cantidadLeds; i++)
  {
    digitalWrite(i+2, HIGH);
  }
  
  for(byte i = cantidadLeds; i <= 7; i++)
  {
    digitalWrite(i+2, LOW);
  }
  
  //delay(1000); //Quitar cuando sepamos que funciona
  
  
  
}

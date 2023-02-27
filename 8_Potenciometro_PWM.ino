const byte led = 5;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop()
{
  int lectura = analogRead(A3);
  delay(1);
  Serial.print("Pot: "); //Imprime en pantalla el texto
  Serial.println(lectura);
  
  //int salida = lectura/4;
  int salida = map(lectura,0,1023,0,255);
  
  Serial.print("PWM: ");
  Serial.println(salida);
  Serial.println();
  
  analogWrite(led, salida);
  
}

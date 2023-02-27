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
  Serial.print("Pot: ");
  Serial.println(lectura);
  
  if(lectura > 512)
  {
    digitalWrite(led, HIGH);
  }
  
  else
  {
    digitalWrite(led, LOW);
  }
  
}

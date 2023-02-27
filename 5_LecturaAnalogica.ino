void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int lectura = analogRead(A5);
  delay(1);
  Serial.println(lectura);  
}

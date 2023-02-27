const byte v1 = 2, v2 = 5;
const byte a1 = 3, a2 = 6;
const byte r1 = 4, r2 = 7;

void setup()
{
  //CONFIGURAR PINES Y CONDICIONES INICIALES
  for(byte i = 2; i<8; i++)
  {
    pinMode(i, OUTPUT);
    digitalWrite(i , LOW);
  }
}

void loop()
{
  digitalWrite(v1, HIGH);
  digitalWrite(r2, HIGH);
  delay(10000);
  
  for(byte i = 0; i<3; i++)
  {
    digitalWrite(v1,LOW);
    delay(500);
    digitalWrite(v1,HIGH);
    delay(500);
  }
  
  digitalWrite(v1, LOW);
  digitalWrite(a1, HIGH);
  delay(2000);
  
  digitalWrite(a1,LOW);
  digitalWrite(r1,HIGH);
  digitalWrite(r2,LOW);
  digitalWrite(v2,HIGH);
  delay(10000);
  
  for(byte i = 0; i<3; i++)
  {
    digitalWrite(v2,LOW);
    delay(500);
    digitalWrite(v2,HIGH);
    delay(500);
  }
  
  digitalWrite(v2, LOW);
  digitalWrite(a2, HIGH);
  delay(2000);
  
  digitalWrite(a2, LOW);
  digitalWrite(r1, LOW);  
}

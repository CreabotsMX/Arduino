byte m1a = 2, m1b = 4, em1 = 3;

void setup()
{
  pinMode(m1a, OUTPUT);
  pinMode(m1b, OUTPUT);
  pinMode(em1, OUTPUT);  
}

void loop()
{
  //Mover el motor a la izquierda
  digitalWrite(m1a, HIGH);
  digitalWrite(m1b, LOW);
  analogWrite(em1, 128);
  delay(5000);
  
  //Detener motor
  digitalWrite(m1a, LOW);
  digitalWrite(m1b, LOW);
  delay(1000);
    
  //Mover motor a la derecha
  digitalWrite(m1a, LOW);
  digitalWrite(m1b, HIGH);
  analogWrite(em1, 255);
  delay(5000);
  
  //Detener motor
  digitalWrite(m1a, LOW);
  digitalWrite(m1b, LOW);
  delay(1000);
}

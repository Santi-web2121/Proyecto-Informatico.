void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(6, true);
  delay(500);
  digitalWrite(6, false);
  digitalWrite(5, true);
  delay(500); 
  digitalWrite(5, false);
  digitalWrite(4, true);
  delay(500); 
  digitalWrite(4, false);
  digitalWrite(3, true);
  delay(500); 
  digitalWrite(3, false);
  digitalWrite(2, true);
  delay(500); 
  digitalWrite(2, false);
  digitalWrite(7, true);
  delay(500);
  digitalWrite(7, false);
  digitalWrite(8, true);
  delay(500); 
  digitalWrite(8, false);
  digitalWrite(9, true);
  delay(500); 
  digitalWrite(9, false);
  digitalWrite(10, true);
  delay(500); 
  digitalWrite(10, false);
  digitalWrite(11, true);
  delay(500); 
  digitalWrite(11, false);  
}
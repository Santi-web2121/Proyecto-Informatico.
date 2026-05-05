void setup()
{
  pinMode(11 , OUTPUT);
  pinMode(10 , OUTPUT);
  pinMode(9 , OUTPUT);
}

void loop()
{
  digitalWrite(11, true);
  delay(3000); 
  digitalWrite(10, true); 
  delay(1000);
  digitalWrite(11, false);
  digitalWrite(10 , false);
  digitalWrite(9 , true);
  delay(3000);
  digitalWrite(9 , false);
  digitalWrite(10 , true);
  delay(1000);
  digitalWrite(10 , false);
}  
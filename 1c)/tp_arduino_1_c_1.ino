// C++ code
//
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
  digitalWrite(11, true);
  digitalWrite(9, true);
  digitalWrite(7, true);
  digitalWrite(5, true);
  digitalWrite(3, true);
  delay(1000);
  digitalWrite(11, false);
  digitalWrite(9, false);
  digitalWrite(7, false);
  digitalWrite(5, false);
  digitalWrite(3, false);
  digitalWrite(10, true);
  digitalWrite(8, true);
  digitalWrite(6, true);
  digitalWrite(4, true);
  digitalWrite(2, true);
  delay(1000); 
  digitalWrite(10, false);
  digitalWrite(8, false);
  digitalWrite(6, false);
  digitalWrite(4, false);
  digitalWrite(2, false); 
}
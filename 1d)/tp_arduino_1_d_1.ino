// C++ code
//
void setup()
{
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{ 
  digitalWrite(4, true);
  digitalWrite(6, true);
  delay(500);
  digitalWrite(4, false);
  digitalWrite(6, false);
  delay(250);
  digitalWrite(5, true);
  digitalWrite(6, true);
  delay(500);
  digitalWrite(5, false);
  digitalWrite(6, false);
  delay(250);
}
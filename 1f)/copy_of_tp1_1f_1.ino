void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, OUTPUT);
}

void loop()
{ 
  if (digitalRead(A0)==HIGH)
  { 
    digitalWrite(A1, HIGH);
   	delay(500);
   	digitalWrite(A1, LOW);
    delay(500);
  }
  else
  {
   	digitalWrite(A1, LOW);  
  }
}
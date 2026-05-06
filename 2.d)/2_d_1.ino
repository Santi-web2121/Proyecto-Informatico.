int rojo = 11;
int azul = 10;
int verde = 9;
int poten = A0;

void setup() 
{
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop() 
{
  int pot = analogRead(poten);
  
  int velocidad = map(pot, 0, 1023, 50, 1000);

  analogWrite(rojo, 255);
  analogWrite(azul, 255);
  analogWrite(verde, 0);
  delay(velocidad);

  analogWrite(rojo,  0);
  analogWrite(azul,  0);
  analogWrite(verde, 0);
  delay(velocidad);

  analogWrite(rojo, 255);
  analogWrite(azul, 0);
  analogWrite(verde, 255);
  delay(velocidad);

  analogWrite(rojo,  0);
  analogWrite(azul,  0);
  analogWrite(verde, 0);
  delay(velocidad);
}
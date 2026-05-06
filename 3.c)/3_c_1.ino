int boton = 2;
int pot = A0;

int leds[] = {3, 4, 5, 6, 7, 8, 9, 10, 11, 12}; 
bool secuenciaActiva = false;

void setup() 
{
  pinMode(boton, INPUT_PULLUP);
  
  for(int i = 0; i < 10; i++)
  {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() 
{
  if(digitalRead(boton) == HIGH)
  {
    secuenciaActiva = true;
  }

  if(secuenciaActiva)
  {
    for(int i = 0; i < 10; i++)
    {
      digitalWrite(leds[i], HIGH);
      int tiempo = map(analogRead(pot), 0, 1023, 50, 1000);
      delay(tiempo);
    }
    
    for(int i = 9; i >= 0; i--)
    {
      digitalWrite(leds[i], LOW);
      int tiempo = map(analogRead(pot), 0, 1023, 50, 1000);
      delay(tiempo);
    }
    secuenciaActiva = false; 
  }
}
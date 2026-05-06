int buttonState = 0;
int lastbuttonState = HIGH;
int estado = 0;
void setup()
{
  pinMode(4, INPUT_PULLUP);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  buttonState = digitalRead(4);
  if (buttonState == LOW && lastbuttonState == HIGH)
   {
        estado++;
        if (estado > 2)
      {
          estado = 0;
      }
   }
  lastbuttonState = buttonState;
      digitalWrite( 13 , LOW );
      digitalWrite( 12 , LOW );
      digitalWrite( 8 , LOW );
      
      digitalWrite( 7 , LOW );
      digitalWrite( 2 , LOW );
      digitalWrite( 9 , LOW );
      
      digitalWrite( 3 , LOW );
      digitalWrite( 5 , LOW );
      digitalWrite( 6 , LOW );
      
  if (estado == 0)
  {
    digitalWrite( 13 , HIGH );
    digitalWrite( 12 , HIGH );
    digitalWrite( 8 , HIGH );
    
    digitalWrite( 7 , LOW );
    digitalWrite( 2 , LOW );
    digitalWrite( 9 , LOW );
    
    digitalWrite( 3 , LOW );
    digitalWrite( 5 , LOW );
    digitalWrite( 6 , LOW );
  } 
  else if (estado == 1)
  {
    digitalWrite( 13 , LOW );
    digitalWrite( 12 , LOW );
    digitalWrite( 8 , LOW );
    
    digitalWrite( 7 , HIGH );
    digitalWrite( 2 , HIGH );
    digitalWrite( 9 , HIGH );
    
    digitalWrite( 3 , LOW );
    digitalWrite( 5 , LOW );
    digitalWrite( 6 , LOW );
   }
 else if (estado == 2)
  {
    digitalWrite( 13 , LOW );
    digitalWrite( 12 , LOW );
    digitalWrite( 8 , LOW );
    
    digitalWrite( 7 , LOW );
    digitalWrite( 2 , LOW );
    digitalWrite( 9 , LOW );
    
    digitalWrite( 3 , HIGH );
    digitalWrite( 5 , HIGH );
    digitalWrite( 6 , HIGH );
  }
}

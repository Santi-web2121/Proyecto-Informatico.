int buttonState = LOW;
int ultimoEstadoBoton = HIGH;
bool encendido = false;      

void setup() {
  pinMode(4, INPUT); 
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop() 
{
  buttonState = digitalRead(4);

  
  if (buttonState == LOW && ultimoEstadoBoton == HIGH) 
  {
    encendido = !encendido; 
    delay(200);            
  }
  
  ultimoEstadoBoton = buttonState;

  if (encendido == true) 
  {
    digitalWrite(2, HIGH); delay(100); digitalWrite(2, LOW);
    digitalWrite(3, HIGH); delay(100); digitalWrite(3, LOW);
    digitalWrite(5, HIGH); delay(100); digitalWrite(5, LOW);
    digitalWrite(6, HIGH); delay(100); digitalWrite(6, LOW);
    digitalWrite(7, HIGH); delay(100); digitalWrite(7, LOW);
    digitalWrite(8, HIGH); delay(100); digitalWrite(8, LOW);
    digitalWrite(9, HIGH); delay(100); digitalWrite(9, LOW);
    digitalWrite(10, HIGH); delay(100); digitalWrite(10, LOW);
    digitalWrite(11, HIGH); delay(100); digitalWrite(11, LOW);
    digitalWrite(12, HIGH); delay(100); digitalWrite(12, LOW);
  } 
  else 
  {
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
  }
}
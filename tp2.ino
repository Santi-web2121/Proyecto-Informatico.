  #define cangrejo A0
  #define cangrejo2 A1
  #define cangrejo3 A2
  #define LED_R 2
  #define LED_G 3	
  #define LED_B 4

int POVIS;
float temp;
int luz;
bool ultimo = HIGH;
bool precionado;
bool segundoPlano;
int cont;
void setup()
{

  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT); 
  pinMode(cangrejo, INPUT);
  pinMode(cangrejo2, INPUT);
  pinMode(cangrejo3, INPUT);
}

void loop()
{
  int valorR = analogRead(cangrejo);
  int valorG = analogRead(cangrejo2);
  int valorB = analogRead(cangrejo3);
  
  int brilloR = map(valorR, 0, 1023, 0, 255);
  int brilloG = map(valorG, 0, 1023, 0, 255);
  int brilloB = map(valorB, 0, 1023, 0, 255);
  
  analogWrite(LED_R, brilloR);
  analogWrite(LED_G, brilloG);
  analogWrite(LED_B, brilloB);
  
  delay(100);
}
#define L1_R 11
#define L1_G 10
#define L1_B 9
#define L2_R 5
#define L2_G 4
#define L2_B 3
#define L3_R 7
#define L3_G 6
#define L3_B 2
#define BUZZER 8

void setup() {
  pinMode(L1_R, OUTPUT); pinMode(L1_G, OUTPUT); pinMode(L1_B, OUTPUT);
  pinMode(L2_R, OUTPUT); pinMode(L2_G, OUTPUT); pinMode(L2_B, OUTPUT);
  pinMode(L3_R, OUTPUT); pinMode(L3_G, OUTPUT); pinMode(L3_B, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  analogWrite(L1_R, 255); 
  analogWrite(L1_G, 0);
  analogWrite(L1_B, 0);
  delay(1000);
  analogWrite(BUZZER, 100); delay(100); digitalWrite(BUZZER, 0);
  apagarTodo();
  parpadeoNaranja();
  digitalWrite(L2_R, HIGH);
  digitalWrite(L2_G, LOW);
  digitalWrite(L2_B, HIGH);
  delay(1000);
  analogWrite(BUZZER, 100); delay(100); digitalWrite(BUZZER, 0);
  apagarTodo();
  parpadeoNaranja();
  analogWrite(L3_R, 0);
  analogWrite(L3_G, 15);
  analogWrite(L3_B, 15);
  delay(1000);
  analogWrite(BUZZER, 100); delay(100); digitalWrite(BUZZER, 0);
  apagarTodo();
  parpadeoNaranja();
}
void apagarTodo() {
  digitalWrite(L1_R, 0); digitalWrite(L1_G, 0); digitalWrite(L1_B, 0);
  digitalWrite(L2_R, 0); digitalWrite(L2_G, 0); digitalWrite(L2_B, 0);
  digitalWrite(L3_R, 0); digitalWrite(L3_G, 0); digitalWrite(L3_B, 0);
}
void parpadeoNaranja() {
  for(int i=0; i<4; i++) {
    analogWrite(L1_R, 255); analogWrite(L1_G, 50);
    analogWrite(L2_R, 255); analogWrite(L2_G, 50);
    analogWrite(L3_R, 255); analogWrite(L3_G, 50);
    delay(100);
    apagarTodo();
    delay(100);
  }
}
#define L1_V
 
void setup() {
  pinMode(L1_V, OUTPUT); pinMode(L1_R, OUTPUT); pinMode(L1_A, OUTPUT);
  
}

void loop() {
  analogWrite(L1_V, 255); 
 
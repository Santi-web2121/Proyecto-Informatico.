#define MSG_L "El nivel de luz actual es: "
#define MSG_T " y la temperatura actual: "
#define MSG_C "c"
#define PIN_TMP  A3
#define PIN_LDR  A2
#define LED_ROJO 11
#define LED_VERDE 10
#define LED_AZUL 9

void setup() {
  Serial.begin(9600);
  pinMode(PIN_TMP, INPUT);
  pinMode(PIN_LDR, INPUT);
  pinMode(LED_ROJO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AZUL, OUTPUT);
}

void loop() {
  int lecturaTemp = analogRead(PIN_TMP);
  int lecturaLuz = analogRead(PIN_LDR);
  float voltaje = lecturaTemp * (5.0 / 1024.0);
  float gradosC = (voltaje - 0.5) * 100.0;
  int porc_oscuridad = map(lecturaLuz, 0, 1023, 100, 0); 
  Serial.print(MSG_L);
  Serial.print(porc_oscuridad);
  Serial.print(MSG_T);
  Serial.print(gradosC);
  Serial.println(MSG_C);
  if (porc_oscuridad >= 30 && porc_oscuridad <= 70) {
    if (gradosC > 90.0) {
      analogWrite(LED_ROJO, 255);
      analogWrite(LED_VERDE, 0);
      analogWrite(LED_AZUL, 0);
    } 
    else if (gradosC < 18.0) {
      analogWrite(LED_ROJO, 0);
      analogWrite(LED_VERDE, 0);
      analogWrite(LED_AZUL, 255);
    } 
    else if (gradosC >= 18.0 && gradosC <= 90.0) {
      analogWrite(LED_ROJO, 0);
      analogWrite(LED_VERDE, 255);
      analogWrite(LED_AZUL, 0);
    }
    
  } else {
    analogWrite(LED_ROJO, 0);
    analogWrite(LED_VERDE, 0);
    analogWrite(LED_AZUL, 0);
  }

  delay(250);
}

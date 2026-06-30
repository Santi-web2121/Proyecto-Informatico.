#include <LiquidCrystal.h>

//#define TEST_MOV
#define MODO_NOCTURNO

#define PIR     2
#define TRIG    4
#define ECHO    3
#define PIN_TEMP A0
#define PIN_LUZ  A1
#define BUZZER   A5
#define LED_R    9
#define LED_G    8
#define LED_B    7

LiquidCrystal LCD(5, 6, 10, 11, 12, 13);

void setup() {
  pinMode(PIR, INPUT);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
  LCD.begin(16, 2);
}

void loop() {
  int lecturaLuz = analogRead(PIN_LUZ);
  int porcLuz = map(lecturaLuz, 0, 1023, 0, 100);
  float temperatura = ((analogRead(PIN_TEMP) * 5.0 / 1023.0) - 0.5) * 100;

  digitalWrite(TRIG, LOW); 
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH); 
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  float distancia = pulseIn(ECHO, HIGH) / 58.2;

  LCD.clear();

  #ifdef MODO_NOCTURNO
    if (porcLuz < 20) {
      LCD.setCursor(0,0);
      LCD.print("MODO: NOCTURNO");
      
      bool mov = digitalRead(PIR);
      if (mov || temperatura > 39.0) {
        setColor(255, 0, 0);
        digitalWrite(BUZZER, HIGH);
        LCD.setCursor(0,1);
        LCD.print("!! INTRUSO !!");
      } else {
        setColor(0, 255, 0);
        LCD.setCursor(0,1);
        LCD.print("ESTADO: SEGURO");
      }
    } else {
      LCD.print("ESPERANDO NOCHE");
      setColor(0, 0, 0);
    }
  #endif

  #ifndef MODO_NOCTURNO
    LCD.setCursor(0,0);
    LCD.print("MODO: DIURNO");
    
    if ((distancia < 100 && distancia > 0) || temperatura > 39.0) {
      setColor(255, 0, 0);
      LCD.setCursor(0,1);
      LCD.print("ALERTA RIESGO");
      tone(BUZZER, 1000, 200);
    } else {
      setColor(0, 255, 0);
      LCD.setCursor(0,1);
      LCD.print("D:"); LCD.print(distancia); LCD.print("cm T:"); LCD.print((int)temperatura);
    }
  #endif

  #ifdef TEST_MOV
    if(digitalRead(PIR)) {
      digitalWrite(BUZZER, HIGH);
      delay(50);
      digitalWrite(BUZZER, LOW);
    }
  #endif

  delay(500);
}

void setColor(int r, int g, int b) {
  analogWrite(LED_R, r);
  analogWrite(LED_G, g);
  analogWrite(LED_B, b);
}
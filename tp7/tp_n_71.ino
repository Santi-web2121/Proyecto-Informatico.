#include <Adafruit_NeoPixel.h>

#define PIN_LEDS    6
#define PIN_BOTON   2
#define PIN_BUZZER  8
#define NUM_LEDS    6
#define TOTAL_LEDS  (NUM_LEDS * 8)

Adafruit_NeoPixel strip(TOTAL_LEDS , PIN_LEDS , NEO_GRB + NEO_KHZ800);

const byte matriz[6][4] = {
  {0, 1, 0, 0},
  {1, 0, 1, 0},
  {1, 1, 0, 0},
  {1, 0, 0, 1},  
  {1, 1, 1, 0},
  {1, 1, 1, 1}  
};

bool estadobotonprevio = HIGH;
  
void setup()
{
  pinMode(PIN_BOTON , INPUT_PULLUP);
  pinMode(PIN_BUZZER, OUTPUT);
  strip.begin();
  strip.show();
  randomSeed(analogRead (A0));
}

void loop()
{
  bool estadoboton = digitalRead(PIN_BOTON);
  
  if(estadoboton == HIGH && estadoboton == LOW)
  {
    delay(50); 
	int dado1 = random(1,7);
    int dado2 = random(1,7); 
    
    animacionRuleta();
    
    mostrarDados(dado1, dado2);
    
    if ((dado1 + dado2) == 7) {
      animacionGanador();
    } 
  }
  
  estadobotonprevio = estadoboton;
}

void mostrarnumerodado (int numdado, int valor, uint32_t color) {
  int offsetdado = numdado * 4 * NUM_LEDS; 
  int indice = valor - 1;
  
  for (int i = 0; i < 4; i++) {
  	int inicioled = offsetdado + (i * NUM_LEDS);
    bool encendido = matriz[indice][i];
    
    for (int j = 0; j < NUM_LEDS; j++) {
      strip.setPixelColor(inicioled + j, encendido ? color : strip.Color(0,0,0));
    }
  }
}

void mostrarDados(int dado1, int dado2) {
  mostrarnumerodado(0, dado1, strip.Color(0,0,255));
  mostrarnumerodado(0, dado1, strip.Color(0,255,0));
  strip.show();
}

void animacionRuleta() {
  for (int i = 0; i < 15; i++) {
    int temp1 = random(1, 7);
    int temp2 = random(1, 7); 
    
    mostrarDados(temp1, temp2);
    delay(40 + (i * 12));
  }
}

void animacionGanador() {
  for(int i = 0; i < 6; i++) {
    strip.fill(strip.Color(255,255,255));
    strip.show();
    tone(PIN_BUZZER, 1200);
    delay(150);
    strip.fill(strip.Color(0,0,0));
    strip.show();
    noTone(PIN_BUZZER);
    delay(150);
  }

}
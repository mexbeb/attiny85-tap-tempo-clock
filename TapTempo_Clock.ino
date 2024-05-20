// This code is made for an ATTiny85
// Change CLK_PIN, LED_PIN and BUTTON_PIN definitions if you're using a different board

#include <avr/io.h>
#include <ArduinoTapTempo.h>

#define BUTTON_PIN PB0
#define CLK_PIN PB1
#define LED_PIN PB2
#define AUX_PIN PB3


ArduinoTapTempo tapTempo;

unsigned long previousMillis = 0;
unsigned long interval = 500;

bool ledState = false;

void setup() {
  DDRB |= (1 << CLK_PIN); 
  DDRB |= (1 << LED_PIN);
  DDRB |= (1 << AUX_PIN);
  PORTB |= (1 << BUTTON_PIN);
  
  previousMillis = millis();
  
  // BPM Range
  tapTempo.setMinBPM(5); // min BPM
  tapTempo.setMaxBPM(400); // max BPM
}

void loop() {
  boolean buttonDown = bit_is_clear(PINB, BUTTON_PIN);
  tapTempo.update(buttonDown);

  int tempoInMillisecondi = (60000 / tapTempo.getBPM()) / 2;

  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= tempoInMillisecondi) {
    previousMillis = currentMillis;

    ledState = !ledState;
    PORTB ^= (1 << CLK_PIN); 
    PORTB ^= (1 << LED_PIN);
    PORTB ^= (1 << AUX_PIN); 
  }
}


#include <FastLED.h>

#define DATA_PIN 18
#define NUM_LEDS 256

CRGB leds[NUM_LEDS];

void setup() {
  Serial.begin(115200);
  FastLED.addLeds<WS2812B, DATA_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(10);
  FastLED.setMaxPowerInVoltsAndMilliamps(5, 1500);
  FastLED.clear(true);
}

void loop() {
  for (int i = 0; i < NUM_LEDS; i++) {
    FastLED.clear();
    leds[i] = CRGB::White;
    FastLED.show();
    delay(30);
  }
}
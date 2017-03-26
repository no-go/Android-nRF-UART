#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// OLED (11 -> MOSI/DIN, 13 ->SCK)
#define PIN_CS     8
#define PIN_RESET  10
#define PIN_DC     9
Adafruit_SSD1306 oled(PIN_DC, PIN_RESET, PIN_CS);

#define BUFLEN  168
int count = 0;

void setup() {
  Serial.begin(9600);
  oled.begin();
  oled.setTextColor(WHITE);
  oled.setTextSize(1);
  oled.clearDisplay();
  oled.display();
}

void loop() {
  while (Serial.available()) {
    if(count >= BUFLEN) {
      oled.clearDisplay();
      oled.setCursor(0,0);
      count = 0;
      oled.display();
    }
    char inChar = (char)Serial.read();
    oled.print(inChar);
    oled.display();
    count++;
  }
}

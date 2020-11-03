#include <Arduino.h>
#include <Wire.h>
#include "SSD1306.h"

#include "display_IIC-OLED.h"


SSD1306 display(0x3c, SDA, SCL);

void setup() {
  // put your setup code here, to run once:
      display.init();
      
      display.flipScreenVertically();
      display.setFont(ArialMT_Plain_10);
      display.setColor(WHITE);
      display.setTextAlignment(TEXT_ALIGN_LEFT);
}

void loop() {
  // put your main code here, to run repeatedly:
  show_string("HI");
}    

void show_string(String output_str)
    {
      display.clear();

      display.drawString(40, 20, output_str);
      
      display.display();
    };

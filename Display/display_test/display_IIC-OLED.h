/*#include <Arduino.h>
#include <Wire.h>
#include "SSD1306.h"

class Display_OLED
{
public:
    //display = SSD1306 display(0x3c, SDA, SCL);
    Display_OLED()
    {
      display.init();
      
      display.flipScreenVertically();
      display.setFont(ArialMT_Plain_10);
      display.setColor(WHITE);
      display.setTextAlignment(TEXT_ALIGN_LEFT);

    };
    
    void show_string(String output_str)
    {
      display.clear();

      display.drawString(20, 20, output_str);
      
      display.display();
    };
};*/

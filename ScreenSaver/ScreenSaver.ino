/*
  ScreenSaver.ino
  Brent Scott
 
 Example file using the The Meggy Jr Simplified Library (MJSL)
  from the Meggy Jr RGB library for Arduino
   
 A screensaver.

*/

#include <MeggyJrSimple.h>    // Required code, line 1 of 2.

int color;

void setup()                    // run once, when the sketch starts
{
  MeggyJrSimpleSetup();      // Required code, line 2 of 2.
}

void loop()
{
  {
    DrawPx(0,0,Red);
    DrawPx(0,7,Red);
    DrawPx(7,0,Red);
    DrawPx(7,7,Red);
    DisplaySlate();
    Tone_Start(18182,5);
    delay(1000);
    DrawPx(0,1,Orange);
    DrawPx(1,0,Orange);
    DrawPx(6,0,Orange);
    DrawPx(7,1,Orange);
    DrawPx(0,6,Orange);
    DrawPx(1,7,Orange);
    DrawPx(6,7,Orange);
    DrawPx(7,6,Orange);
    DisplaySlate();
    Tone_Start(18182,5);
    delay(1000);
  }
  ClearSlate;
  DisplaySlate();
}

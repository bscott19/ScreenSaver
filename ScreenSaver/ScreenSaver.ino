/*
  ScreenSaver.ino
  Brent Scott
 
 Example file using the The Meggy Jr Simplified Library (MJSL)
  from the Meggy Jr RGB library for Arduino
   
 A screensaver.

*/

#include <MeggyJrSimple.h>    // Required code, line 1 of 2.

void setup()                    // run once, when the sketch starts
{
  MeggyJrSimpleSetup();      // Required code, line 2 of 2.
}

void loop()
{
  //Color names are not representative of actual colors.
  //Colors fade in order from mint green to sky blue.
  EditColor(Red,0,250,1);
  EditColor(Orange,36,250,2);
  EditColor(Yellow,72,250,3);
  EditColor(Green,108,250,4);
  EditColor(Blue,144,250,5);
  EditColor(CustomColor0,180,250,6);
  EditColor(CustomColor1,216,250,7);
  {
    delay(1000);
    {
      Tone_Start(40000,1000);
      DrawPx(0,0,Red);
      DrawPx(0,7,Red);
      DrawPx(7,0,Red);
      DrawPx(7,7,Red);
      DisplaySlate();
    }
    delay(1000);
    {
      Tone_Start(35000,1000);
      DrawPx(0,1,Orange);
      DrawPx(1,0,Orange);
    
      DrawPx(6,0,Orange);
      DrawPx(7,1,Orange);
    
      DrawPx(0,6,Orange);
      DrawPx(1,7,Orange);
    
      DrawPx(6,7,Orange);
      DrawPx(7,6,Orange);
      DisplaySlate();
   }
   delay(1000);
   {
      Tone_Start(30000,1000);
      DrawPx(0,5,Yellow);
      DrawPx(1,6,Yellow);
      DrawPx(2,7,Yellow);
    
      DrawPx(0,2,Yellow);
      DrawPx(1,1,Yellow);
      DrawPx(2,0,Yellow);
    
      DrawPx(5,7,Yellow);
      DrawPx(6,6,Yellow);
      DrawPx(7,5,Yellow);
    
      DrawPx(5,0,Yellow);
      DrawPx(6,1,Yellow);
      DrawPx(7,2,Yellow);
      DisplaySlate();
   }
   delay(1000);
   {
      Tone_Start(25000,1000);
/*
      SetAuxLEDs(8);
        {
          int x = 0;
          int y = 3;
          for (int i = 0; i < 4; i++)
            {
              DrawPx(x,y,Green);
              x++;
              y++;
              DisplaySlate();
            }
        }
*/  
      DrawPx(0,3,Green);
      DrawPx(1,2,Green);
      DrawPx(2,1,Green);
      DrawPx(3,0,Green);
    
      DrawPx(0,4,Green);
      DrawPx(1,5,Green);
      DrawPx(2,6,Green);
      DrawPx(3,7,Green);

      DrawPx(4,7,Green);
      DrawPx(5,6,Green);
      DrawPx(6,5,Green);
      DrawPx(7,4,Green);
    
      DrawPx(4,0,Green);
      DrawPx(5,1,Green);
      DrawPx(6,2,Green);
      DrawPx(7,3,Green);
      DisplaySlate();   
   } 
   delay(1000);
   {
      Tone_Start(20000,1000);
      DrawPx(1,3,Blue);
      DrawPx(2,2,Blue);
      DrawPx(3,1,Blue);

      DrawPx(1,4,Blue);
      DrawPx(2,5,Blue);
      DrawPx(3,6,Blue);

      DrawPx(4,6,Blue);
      DrawPx(5,5,Blue);
      DrawPx(6,4,Blue);
    
      DrawPx(4,1,Blue);
      DrawPx(5,2,Blue);
      DrawPx(6,3,Blue);
      DisplaySlate();
   }
   delay(1000);
   { 
      Tone_Start(15000,1000);
      DrawPx(2,3,16);
      DrawPx(3,2,16);

      DrawPx(2,4,16);
      DrawPx(3,5,16);

      DrawPx(4,5,16);
      DrawPx(5,4,16);

      DrawPx(4,2,16);
      DrawPx(5,3,16);
      DisplaySlate();
   }
   delay(1000);
   {
     Tone_Start(10000,1500);
     DrawPx(3,4,17);
     DrawPx(4,4,17);
     DrawPx(3,3,17);
     DrawPx(4,3,17);
     DisplaySlate();
   }
   
    delay(1000);
    {
      Tone_Start(15000,1000);
      DrawPx(0,0,0);
      DrawPx(0,7,0);
      DrawPx(7,0,0);
      DrawPx(7,7,0);
      DisplaySlate();
    }
    delay(1000);
    {
      Tone_Start(20000,1000);
      DrawPx(0,1,0);
      DrawPx(1,0,0);
    
      DrawPx(6,0,0);
      DrawPx(7,1,0);
    
      DrawPx(0,6,0);
      DrawPx(1,7,0);
    
      DrawPx(6,7,0);
      DrawPx(7,6,0);
      DisplaySlate();
   }
   delay(1000);
   {
      Tone_Start(25000,1000);
      DrawPx(0,5,0);
      DrawPx(1,6,0);
      DrawPx(2,7,0);
    
      DrawPx(0,2,0);
      DrawPx(1,1,0);
      DrawPx(2,0,0);
    
      DrawPx(5,7,0);
      DrawPx(6,6,0);
      DrawPx(7,5,0);
    
      DrawPx(5,0,0);
      DrawPx(6,1,0);
      DrawPx(7,2,0);
      DisplaySlate();
   }
   delay(1000);
   {
     Tone_Start(30000,1000);
/*
      SetAuxLEDs(8);
        {
          int x = 0;
          int y = 3;
          for (int i = 0; i < 4; i++)
            {
              DrawPx(x,y,Green);
              x++;
              y++;
              DisplaySlate();
            }
        }
*/  
      DrawPx(0,3,0);
      DrawPx(1,2,0);
      DrawPx(2,1,0);
      DrawPx(3,0,0);
    
      DrawPx(0,4,0);
      DrawPx(1,5,0);
      DrawPx(2,6,0);
      DrawPx(3,7,0);

      DrawPx(4,7,0);
      DrawPx(5,6,0);
      DrawPx(6,5,0);
      DrawPx(7,4,0);
    
      DrawPx(4,0,0);
      DrawPx(5,1,0);
      DrawPx(6,2,0);
      DrawPx(7,3,0);
      DisplaySlate();   
   } 
   delay(1000);
   {
      Tone_Start(35000,1000);
      DrawPx(1,3,0);
      DrawPx(2,2,0);
      DrawPx(3,1,0);

      DrawPx(1,4,0);
      DrawPx(2,5,0);
      DrawPx(3,6,0);

      DrawPx(4,6,0);
      DrawPx(5,5,0);
      DrawPx(6,4,0);
    
      DrawPx(4,1,0);
      DrawPx(5,2,0);
      DrawPx(6,3,0);
      DisplaySlate();
   }
   delay(1000);
   { 
      Tone_Start(40000,1000);
      DrawPx(2,3,0);
      DrawPx(3,2,0);

      DrawPx(2,4,0);
      DrawPx(3,5,0);

      DrawPx(4,5,0);
      DrawPx(5,4,0);

      DrawPx(4,2,0);
      DrawPx(5,3,0);
      DisplaySlate();
   }
   delay(1000);
   {
     Tone_Start(45000,1500);
     DrawPx(3,4,0);
     DrawPx(4,4,0);
     DrawPx(3,3,0);
     DrawPx(4,3,0);
     DisplaySlate();
   }
  }
}

#include <MeggyJrSimple.h>

void setup()
{
  MeggyJrSimpleSetup();
  //xDraw=0;
  //yDraw=0;
}

//int xDisp=0;
//int yDisp=0;
int rColor=0;

void loop ()
{
  for(int xDisp=0; xDisp<8;)
  {
    
    for(int yDisp=0; yDisp<8;)
    {
      DrawPx(xDisp,yDisp,rColor);

      yDisp++;
    }
    xDisp++;
    rColor=random(1,15);
    delay(100);
    DisplaySlate();
  }
   /*if (xDisp<8)
   {
    DrawPx(xDisp,yDisp,rColor);
    xDisp++;
    DisplaySlate();
    if(xDisp<8)
      {
        rColor=rColor+1;
        xDisp=0;
        yDisp=yDisp+1;
        if(yDisp<8)
        {
          exit;
        }
      }
    } */
}

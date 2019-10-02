#include "graphics.h"
void fence()
{
   for(int i=0;i<10;i++)
   {
      setcolor(LIGHTGREEN);
      setfillstyle(SOLID_FILL,BROWN);
      bar(20+50*i,400,70+50*i,560);
      rectangle(20+50*i,400,70+50*i,560);
   }
}
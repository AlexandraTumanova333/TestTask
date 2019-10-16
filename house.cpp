#include "graphics.h"

void house()
{
  
   //Houses
   setfillstyle(SOLID_FILL, COLOR(243,198,139));
   bar(200, 300, 300, 450);
   setfillstyle(SOLID_FILL, COLOR(195,139,243));
   bar(300, 250, 400, 450);
   setfillstyle(SOLID_FILL, COLOR(188,243,139));
   bar(400, 200, 500, 450);
   setfillstyle(SOLID_FILL, COLOR(243,139,205));
   bar(500, 250, 600, 450);
   //Doorses
   setfillstyle(SOLID_FILL, COLOR(243,139,205));
   bar(235, 400, 265, 450);
   setfillstyle(SOLID_FILL, COLOR(188,243,139));
   bar(335, 400, 365, 450);
   setfillstyle(SOLID_FILL, COLOR(195,139,243));
   bar(435, 400, 465, 450);
   setfillstyle(SOLID_FILL, COLOR(243,198,139));
   bar(535, 400, 565, 450);
   
   //Krishi
   setfillstyle(SOLID_FILL, 15);
   bar(200, 275, 299, 300);
   bar(400, 175, 500, 200);
   setfillstyle(SOLID_FILL, COLOR(243,139,205));
   int poly[10];
   poly[0] = 200;        
   poly[1] = 275;
   poly[2] = 225;  
   poly[3] = 225;
   poly[4] = 275;
   poly[5] = 225;
   poly[6] = 300; 
   poly[7] = 275;
   poly[8] = poly[0];  
   poly[9] = poly[1];
   fillpoly(5, poly);
   setfillstyle(SOLID_FILL, COLOR(243,198,139));
   int ppoly[10];
   ppoly[0] = 500;        
   ppoly[1] = 250;
   ppoly[2] = 525;  
   ppoly[3] = 175;
   ppoly[4] = 575;
   ppoly[5] = 175;
   ppoly[6] = 600; 
   ppoly[7] = 250;
   ppoly[8] = ppoly[0];  
   ppoly[9] = ppoly[1];
   fillpoly(5, ppoly);
   setfillstyle(SOLID_FILL, COLOR(195,139,243));
   int pppoly[8];
   pppoly[0] = 400;        
   pppoly[1] = 175;
   pppoly[2] = 450;  
   pppoly[3] = 150;
   pppoly[4] = 500;
   pppoly[5] = 175;
   pppoly[6] = pppoly[0];  
   pppoly[7] = pppoly[1];
   fillpoly(4, pppoly);
   setfillstyle(SOLID_FILL, COLOR(188,243,139));
   sector(350, 250, 0, 180, 50, 50);
   

//Windows
   setfillstyle(SOLID_FILL, COLOR(146,222,255));
   bar(230, 245, 270, 265);
   bar(215, 315, 235, 345);
   bar(265, 315, 285, 345);
   bar(215, 360, 235, 390);
   bar(265, 360, 285, 390);
   
   bar(315, 260, 335, 290);
   bar(365, 260, 385, 290);
   bar(315, 305, 335, 335);
   bar(365, 305, 385, 335);
   bar(315, 350, 335, 385);
   bar(365, 350, 385, 385);
   
   bar(415, 210, 435, 240);
   bar(465, 210, 485, 240);
   bar(415, 260, 435, 290);
   bar(465, 260, 485, 290);
   bar(415, 305, 435, 335);
   bar(465, 305, 485, 335);
   bar(415, 350, 435, 385);
   bar(465, 350, 485, 385);
   
   bar(539, 200, 561, 240);
   bar(515, 260, 535, 290);
   bar(565, 260, 585, 290);
   bar(515, 305, 535, 335);
   bar(565, 305, 585, 335);
   bar(515, 350, 535, 385);
   bar(565, 350, 585, 385);

}

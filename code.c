#include<graphics.h>
#include<conio.h>
#include<stdlib.h>

void floodFill(int x,int y,int oldcolor,int newcolor){
if(getpixel(x,y) == oldcolor)
{
putpixel(x,y,newcolor);
floodFill(x+1,y,oldcolor,newcolor);
floodFill(x,y+1,oldcolor,newcolor);
floodFill(x-1,y+1,oldcolor,newcolor);
floodFill(x+1,y-1,oldcolor,newcolor);
floodFill(x+1,y+1,oldcolor,newcolor);
}
}

//dda function//
void dda(int x1,int y1,int x2,int y2){
float x,y,dx,dy,step,i;
dx=abs(x2-x1);
dy=abs(y2-y1);
 if(dx>=dy)
step=dx;
else
step=dy;
 dx=dx/step;
dy=dy/step;
 x=x1;
 y=y1;
 i=1;
while(i<=step)
{
putpixel(x,y,15);
x=x+dx;
y=y+dy;
i=i+1;
}
}
//dda function



main()
{
   int gd = DETECT, gm,t,score,m, area,  left = 180, top = 280,i=0,temp2;
   char c,val[100];
   void *p,*temp1;

   initgraph(&gd, &gm, "C://TURBOC3//BGI");


   //obstacle start//
line(200,300,200,400);
 line(200,300,205,300);
 line(204,295,204,300);
 line(204,295,215,295);
 line(215,295,215,300);
 line(215,300,220,300);
 line(220,300,220,400);

 line(220,350,230,350);
 line(229,320,229,350);
 line(229,320,235,320);
 line(235,320,235,355);
 line(220,354,235,354);

 line(190,340,200,340);
 line(190,310,190,340);
 line(185,310,190,310);
 line(185,310,185,345);
 line(185,345,200,345);

   //obstacle end//



   //character start//

  //tail start//
  //tail upper line start//
  dda(52,300,52,330);
  dda(52,300,55,300);
  dda(55,300,55,305);
  dda(55,305,60,305);
  dda(60,305,60,310);
  dda(60,310,65,310);
  dda(65,310,65,315);
  dda(65,315,70,315);
  dda(70,315,70,320);
  dda(70,320,75,320);
  dda(75,320,75,325);
  dda(75,325,85,325);
  //tail upper line end//

  //tail lower line start//
  dda(52,330,55,330);
  dda(55,330,55,335);
  dda(55,335,60,335);
  dda(60,335,60,340);
  dda(60,340,65,340);
  dda(65,340,65,345);
  dda(65,345,70,345);
  dda(70,345,70,350);
  dda(70,350,75,350);
  dda(75,350,75,355);
  dda(75,355,80,355);
  dda(80,355,80,360);
  dda(80,360,85,360);
  //tail lower line end//
  //tail end//

  //left foot start//
  dda(85,360,85,390);
  dda(85,390,95,390);
  dda(94,385,94,390);
  dda(89,385,94,385);
  dda(89,375,89,385);
  dda(89,375,95,375);
  dda(94,370,94,375);
  dda(94,370,100,370);
  dda(99,365,99,370);
  dda(99,365,110,365);
  //left foot end//

  //right foot start//
  dda(110,365,110,370);
  dda(110,370,115,370);
  dda(115,370,115,390);
  dda(115,390,125,390);
  dda(124,385,124,390);
  dda(119,385,124,385);
  dda(119,360,119,385);
  //right foot end//

  //body start//
  dda(84,320,84,325);
  dda(84,320,90,320);
  dda(89,315,89,320);
  dda(90,315,95,315);
  dda(94,310,94,315);
  dda(95,310,100,310);
  dda(99,305,99,310);
  dda(100,305,105,305);
  dda(104,300,104,305);
  dda(104,300,110,300);
  dda(109,295,109,300);
  dda(109,295,115,295);

  //head start//
  dda(114,270,114,295);
  dda(114,270,120,270);
  dda(119,265,119,270);
  dda(119,265,160,265);
  dda(160,265,160,270);
  dda(160,270,165,270);
  dda(165,270,165,290);
  dda(145,289,165,289);
  dda(145,289,145,295);
  dda(145,295,160,295);
  dda(160,295,160,300);
  dda(140,299,160,299);
  //head end//

  //eye start//
  dda(125,275,130,275);
  dda(125,275,125,280);
  dda(125,280,130,280);
  dda(129,275,129,280);
  //eye end//

  dda(119,360,125,360);
  dda(124,355,124,360);
  dda(125,355,130,355);
  dda(129,350,129,355);
  dda(129,350,135,350);
  dda(134,345,134,350);
  dda(134,345,140,345);
  dda(139,299,139,345);
  //body end//

  //hand start//
  dda(139,315,155,315);
  dda(155,315,155,325);
  dda(150,324,155,324);
  dda(150,319,150,324);
  dda(139,319,150,319);
  //hand end//

   //character end//
  dda(0,400,640,400);//ground


   //character color//
   floodFill(115,271,0,15);
   floodFill(53,301,0,15);
   floodFill(140,316,0,15);
   //character color end//

 //obstacle  color//
   floodFill(201,301,0,15);
   floodFill(221,351,0,15);
    floodFill(191,339,0,15);
//obstacle color end//

   area = imagesize(left, top, left + 65, top + 120);
   p = malloc(area);

   temp2 = imagesize(50,250,180,390);
   temp1 = malloc(temp2);

   getimage(50,250,180,390,temp1);

	 getimage(left, top, left + 65, top + 120, p);
	 t=600;
	 m=600;
	 score=0;
   outtextxy(200,200,"Press any key to start:");
   getch();
   while(1){
      score+=1;
      sprintf(val,"%d",score);
      outtextxy(10,10,val);
      if(m<=0){
         m=600;
      }
      m=m-10;
      if(kbhit()){
         c=getchar();
         if(c=='\n'){
	          for(i=0;i<200;i=i+10){
	             putimage(m , top, p, XOR_PUT);//obstacle
	             putimage(50 , 250-i, temp1, XOR_PUT);//character
	             dda(0,400,640,400);//ground
	             delay(5);
	             score+=1;
	             sprintf(val,"%d",score);
	             outtextxy(10,10,val);
	             if(m<=0){
	                m=600;
	             }
	             m=m-20;
	             cleardevice();
	          }
        }
	if(c=='q'){
	   break;
	   getch();
	}
    }
    else{
	     putimage(m , top, p, XOR_PUT);//obstacle
	     putimage(50 , 250, temp1, XOR_PUT);//character
	     dda(0,400,640,400);//ground
	     delay(10);
       outtextxy(10,10,val);
	     if(m<=0){
	     m=600;
	     }
	     if(m<=150){
		outtextxy(250,200,"Game Over");
	        outtextxy(250,215,"Your score");
	        outtextxy(250,230,val);
	        getch();
	        break;
	     }
	  m=m-10;
	  cleardevice();
    }

   }



   getch();
   closegraph();
   return 0;
}

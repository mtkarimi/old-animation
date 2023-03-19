#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<graphics.h>
#include<dos.h>
int ground (){
char ground[8]={255,255,255,255,255,255,255,255};
	   setbkcolor(3);
	   setcolor(6);
	   line(0,396,640,396);
	   line(0,397,640,397);
	   line(0,398,640,398);
	   setfillpattern(ground,2);
	   floodfill(400,450,6);
	   return 0;
}
int tree (){
char tree[8]={90,90,102,102,102,102,90,90};
char ttree[8]={255,255,255,255,255,255,255,255};
	   setbkcolor(3);
	   setcolor(2);
	   circle(80,295,25);
	   setfillpattern(tree,2);
	   floodfill(80,295,2);
	   circle(90,265,25);
	   setfillpattern(tree,2);
	   floodfill(90,265,2);
	   circle(100,295,25);
	   setfillpattern(tree,2);
	   floodfill(115,295,2);
	   setcolor(6);
	   rectangle(75,315,100,395);
	   setfillpattern(ttree,6);
	   floodfill(80,350,6);
	   return 0;
}
int mount (){
struct arccoordstype arc1;
char mount[8]={255,170,255,85,255,170,255,85};
	   setbkcolor(3);
	   setcolor(BROWN);
	   arc(0, 398, 0, 180, 70);
	   getarccoords(&arc1);
	   line(arc1.xend,arc1.yend,arc1.xstart,arc1.ystart);
	   setfillpattern(mount,BROWN);
	   floodfill(0,395,BROWN);
	   return 0;
}
int cloud (){
char cloud[8]={255,255,255,255,255,255,255,255};
	   setcolor(15);
	   setbkcolor(3);
	   arc(150, 50, 50, 310, 20);
	   arc(175, 50, 50, 130, 20);
	   arc(200, 50, 210, 150, 20);
	   arc(175, 55, -180,-0, 20);
	   setfillpattern(cloud,15);
	   floodfill(155,50,15);
	   return 0;
}
int sun (){
char sun[8]={255,255,255,255,255,255,255,255};
	   setcolor(14);
	   setbkcolor(3);
	   circle(50,50,15);
	   setfillpattern(sun,14);
	   floodfill(50,50,14);
	   return 0;
}
int circle1 (){
int ii;
char face[8]={85,170,85,170,85,170,85,170};
for ( ii = 150; ii < 266; ii++ )
	{
	   setcolor(3);
	   circle(ii-1,360,7);
	   line(ii-1,367,ii-1,385);
	   line(ii+10-1,377,ii-10-1,377);
	   line(-10+ii-1,395,ii-1,385);
	   line(ii-1,385,10+ii-1,395);
	   setcolor(15);
	   circle(ii,360,7);
	   line(ii,367,ii,385);
	   line(ii+10,377,ii-10,377);
	   line(-10+ii,395,ii,385);
	   line(ii,385,10+ii,395);
	   setfillpattern(face,13);
	   floodfill(ii,360,WHITE);
	   delay(15);
	   if (ii>264)
	   break;
	   }
	   return 0;
}
int circle2 (){
int ii;
char face[8]={85,170,85,170,85,170,85,170};
for ( ii = 50; ii < 316; ii++ )
	{
	   setcolor(3);
	   circle(600-ii+1,360,7);
	   line(600-ii+1,367,600-ii+1,385);
	   line(590-ii+1,377,610-ii+1,377);
	   line(590-ii+1,395,600-ii+1,385);
	   line(610-ii+1,395,600-ii+1,385);
	   setcolor(15);
	   circle(600-ii,360,7);
	   line(600-ii,367,600-ii,385);
	   line(590-ii,377,610-ii,377);
	   line(590-ii,395,600-ii,385);
	   line(610-ii,395,600-ii,385);
	   setfillpattern(face,12);
	   floodfill(600-ii,360,WHITE);
	   delay(25);
	   if (ii>314)
	   mount();
	   }
	   return 0;
}
int dog (){
int ii;
char dog[8]={85,170,85,170,85,170,85,170};
for ( ii = 1; ii < 120; ii++ ){
	   setcolor(2);
	   rectangle(20+ii-1,435,50+ii-1,450);
	   setfillpattern(dog,2);
	   floodfill(21+ii-1,436,2);
	   rectangle(20+ii-1,450,25+ii-1,460);
	   setfillpattern(dog,2);
	   floodfill(21+ii-1,451,2);
	   rectangle(45+ii-1,450,50+ii-1,460);
	   setfillpattern(dog,2);
	   floodfill(46+ii-1,451,2);
	   rectangle(50+ii-1,435,60+ii-1,445);
	   setfillpattern(dog,2);
	   floodfill(51+ii-1,443,2);
	   setcolor(6);
	   rectangle(20+ii,435,50+ii,450);
	   setfillpattern(dog,6);
	   floodfill(21+ii,436,6);
	   rectangle(20+ii,450,25+ii,460);
	   setfillpattern(dog,6);
	   floodfill(21+ii,451,6);
	   rectangle(45+ii,450,50+ii,460);
	   setfillpattern(dog,6);
	   floodfill(46+ii,451,6);
	   rectangle(50+ii,435,60+ii,445);
	   setfillpattern(dog,6);
	   floodfill(51+ii,443,6);
	   delay(25);
	   if (ii>118)
	   break;
	   }
	   return 0;
}
int heal(){
int ii;
int midx,midy;

/*
"DEFAULT font",
		  "TRIPLEX font",
		  "SMALL font",
		  "SANS SERIF font",
		  "GOTHIC font"
		      */
for ( ii = 1; ii < 32; ii++ ){


   setcolor(ii);
   sound(400-ii-ii-ii);
   midx = getmaxx() /2;
   midy = getmaxy() /2;


   settextjustify(CENTER_TEXT, CENTER_TEXT);
   settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 1);
   outtextxy(midx, midy, "Heal the World, Make it better place.");

   delay(200);
   nosound();
    if (ii>30)
    break;
   }
   return 0;
}
int bye(){
int ii;
int midx,midy;

for ( ii = 1; ii < 490; ii++ ){


   midx = getmaxx() /2;
   midy = getmaxy() ;
   settextjustify(CENTER_TEXT, CENTER_TEXT);
   settextstyle(SMALL_FONT, HORIZ_DIR, 5);
   outtextxy(midx, midy-ii-15, "Programmer :");
   outtextxy(midx, midy-ii, "Mohammad Taghi Karimi");


   delay(15);
   cleardevice();
   if (ii>485)
   break;
   }
   return 0;
}
void main(void){
int driver=DETECT,mode=1;
initgraph(&driver,&mode,"c:\\TC\\BGI");
setbkcolor(11);
	   sun();
	   mount();
	   cloud();
	   ground();
	   tree();
	   circle1();
	   dog();
	   circle2();
	   heal();
	   nosound();
	   getch();
	   setcolor(15);
	   setbkcolor(0);
	   bye();
closegraph();
restorecrtmode();
}
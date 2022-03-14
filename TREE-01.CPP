//  Tree
// Using turboCdroid

#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
void main()
{
clrscr();
int gdriver = DETECT, gmode;
	initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
	setbkcolor(8);
		line(0, 350, 700, 350);
		setcolor(6);
		arc(450, 320, 150, 195, 130);
		arc(150, 320, 350, 30, 130);
		setcolor(2);
		arc(270, 220, 110, 270, 50);
		arc(330, 230, 270, 100, 40);
		arc(290, 170, 300, 200, 50);
	  //      outtextxy(200, 200, "CodeWithPrem");


getch();
}

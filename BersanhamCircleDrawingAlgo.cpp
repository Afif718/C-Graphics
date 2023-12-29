#include <graphics.h>
#include <math.h>
#include<stdio.h>
#include<iostream>
using namespace std;
using std:: cout;


void circleUsingBersenhamAlgo(float x1,float y1,float r)
{
	float x,y,p;
	x=0;
	y=r;
	p=3-(2*r);
	while(x<=y)
	{
		putpixel(x1+x,y1+y,WHITE);
		putpixel(x1-x,y1+y,WHITE);
		putpixel(x1+x,y1-y,WHITE);
		putpixel(x1-x,y1-y,WHITE);
		putpixel(x1+y,y1+x,WHITE);
		putpixel(x1+y,y1-x,WHITE);
		putpixel(x1-y,y1+x,WHITE);
		putpixel(x1-y,y1-x,WHITE);
		x=x+1;
		if(p<0)
		{
			p=p+4*(x)+6;
		}
		else
		{
			p=p+4*(x-y)+10;
			y=y-1;



		}
		delay(20);

	}
}
int main()
{
	float x1,y1,r;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");
	
	cout<<"Enter Radius (r) of the Circle: ";
	cin>>r;
	cout<<"Enter the center(x and y) co-ordinates: ";
	cin>>x1>>y1;
	circleUsingBersenhamAlgo(x1,y1,r);
	getch();
	closegraph();
}

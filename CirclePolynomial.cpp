#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <math.h>
using namespace std;

void CirclePolynomial(){
	
	int x, y, h, k, r, x2; 
	
	cout<<"\n \n \t Polynomial Circle \n";
	cout<<"\n Enter center coordinates of the circle (x, y) ";
	cin>>h>>k;
	
	cout<<"Enter Radius of the Circle: ";
	cin>>r;
	
	//initialize value
	x = 0, y = r;
	x2 = r/sqrt(2);
	
	//graphics initialize
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	
	while(x<=x2){
		y = sqrt(r*r - x*x);
		
		putpixel(x+h, y+k, WHITE);
		putpixel(x+h, -y+k, WHITE);
		putpixel(-x+h, -y+k, WHITE);
		putpixel(-x+h, y+k, WHITE);
		putpixel(y+h, x+k, WHITE);
		putpixel(y+h, -x+k, WHITE);
		putpixel(-y+h, -x+k, WHITE);
		putpixel(-y+h, x+k, WHITE);
		
		x= x+1;
	}
	
	getch();
	closegraph();
	
	
}


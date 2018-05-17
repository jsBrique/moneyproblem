
#include"Class.h"
#define Pi 3.141592f
Base::Base(double h1)
{
	h=h1;
}

cuboid::cuboid(double l,double w,double h1):Base(h1)
{
	len=l;
	wid=w;
}


void cuboid::disp()
{		cout<<"cuboid:"<<endl;
		cout<<"	extent:	"<<len<<endl<<endl;
		cout<<"	width:	"<<wid<<endl<<endl;
		cout<<"	height:	"<<h<<endl<<endl;
		cout<<"	The bulk of cuboid is :	"<<len*wid*h<<endl<<endl;
}

Cylinder::Cylinder(double h1,double r1):Base(h1)
{   
	r=r1;
}

void Cylinder::disp()
{	
	cout<<"cylinder:	"<<endl<<endl;
	cout<<"	height:	"<<h<<endl<<endl;
	cout<<"	radius:	"<<r<<endl<<endl;
	cout<<"	The bulk of cylinder is :  "<<Pi*r*r*h<<endl<<endl;
}
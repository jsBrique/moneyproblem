#include"Class.h"
//////////container//////////////////
container::container(double radius1)
{
	radius=radius1;
}

////////////////cube////////////////////
cube::cube(double radius1):container(radius1)
{

}

double cube::surface_area()
{ 
	cout<<"surface area of cube:		"<<6*radius*radius<<endl<<endl;
	return 0;
}

double cube::volume()
{ 
	cout<<"volume of cube:			"<<radius*radius*radius<<endl<<endl;
	return 0;
}

/////////////sphere///////////////
sphere::sphere(double radius1):container(radius1)
{

}

double sphere::surface_area()
{	
	cout<<"surface area of sphere:		"<<4*3.14*radius*radius<<endl<<endl;
	return 0;
}

double sphere::volume()
{ 
	cout<<"volume of sphere:		"<<4/3*3.14*radius*radius*radius<<endl<<endl;
	return 0;
}

//////////cylinder////////////////

cylinder::cylinder(double radius1,double h):container(radius1)
{
	h1=h;
}

double cylinder::surface_area()
{ 
	cout<<"surface area of cylinder:	"<<3.14*radius*radius+2*3.14*radius*h1<<endl<<endl;
	return 0;
}

double cylinder::volume()
{ 
	cout<<"volume of cylinder:		"<<3.14*radius*radius*h1<<endl<<endl;
	return 0; 
}
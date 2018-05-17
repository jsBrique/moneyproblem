#ifndef _Class_H
#define _Class_H
#include<iostream>
using namespace std;

class container{
protected:
	double radius;
public:
	container(double radius1);


	virtual double surface_area()=0;

	virtual double volume()=0;
};


class cube:public container{
public:
	cube(double radius1);

	double surface_area();

	double volume();

};


class sphere:public container
{

public:

	sphere(double radius1);

	double surface_area();

	double volume();

};


class cylinder:public container
{
protected:

	double h1;

public:
	cylinder(double radius1,double h);

	double surface_area();

	double volume();
};

#endif
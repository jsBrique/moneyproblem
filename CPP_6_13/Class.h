#ifndef _Class_H_
#define _Class_H_
#include<iostream>
using namespace std;
class Base
{
protected:

	double h;

public:

	Base(double h1);


	virtual void disp()=0;

};

class cuboid:public Base
{
private:

	double wid,len;

public:

	cuboid(double l,double w,double h1);
     
	void disp();

};

class Cylinder:public Base
{
private:

	double r;

public:

	Cylinder(double h1,double r1);

	void disp();

};

#endif
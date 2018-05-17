#include<iostream>
#include"Class.h"
using namespace std;

int main()
{
	cube a(6.0);
	sphere b(5.0);
	cylinder c(5.0,6.0);
	container *p;
	p=&a;//cube
	p->surface_area();
	p->volume();
	p=&b;//sphere
	p->surface_area();
	p->volume();
	p=&c;//cylinder
	p->surface_area();
	p->volume();
	system("pause");
	return 0;
}
#include <iostream>
#include"Class.h"
using namespace std;




 int main()
{
	Base *p;
	cuboid cu(4,7,5);
	Cylinder cy(6,9);
	p=&cy;
	p->disp();
	p=&cu;
	p->disp();
	system("pause");
	return 0;

 }
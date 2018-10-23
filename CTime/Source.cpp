#include "Time_.h"

void main()
{
	Time_ t;
	t.setTime(10, 25, 20);
	t.addHs(100);
	t.printTime();
	t.addMs(2000);
	t.printTime();
	t.addSs(5000);
	t.printTime();
	system("pause");
}
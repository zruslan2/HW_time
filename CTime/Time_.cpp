#include "Time_.h"

void Time_::setH(int a)
{
	if (a > 23 || a < 0)
		h = 0;
	else
		h = a;
}

void Time_::setM(int b)
{
	if (b > 59 || b < 0)
		m = 0;
	else
		m = b;
}

void Time_::setS(int b)
{
	if (b > 59 || b < 0)
		s = 0;
	else
		s = b;
}

void Time_::setTime(int a, int b, int c)
{
	setH(a);
	setM(b);
	setS(c);
}

void Time_::printTime()
{
	if (h < 10) cout << "0";
	cout << h << ":";
	if (m < 10) cout << "0";
	cout << m << ":";
	if (s < 10) cout << "0";
	cout << s <<endl;
}

void Time_::addH()
{
	h++;
	if (h == 24)
		h = 0;
}

void Time_::addM()
{
	m++;
	if (m == 60) {
		addH();
		m = 0;
	}
}

void Time_::addS()
{
	s++;
	if (s == 60) {
		addM();
		s = 0;
	}
}

void Time_::addHs(int H)
{
	h += H;
	if (h > 24) h = h % 24;
	if (h == 24)
		h = 0;
}

void Time_::addMs(int M)
{
	m += M;
	if (m > 60)
	{
		h += m / 60;
		if (h > 24) h = h % 24;
		else if (h == 24) h = 0;
		m = m % 60;
	}
	if (m == 60) {
		addH();
		m = 0;
	}
}

void Time_::addSs(int S)
{
	s += S;
	if (s > 3600)
	{
		h += s / 3600;
		if (h > 24) h = h % 24;
		else if (h == 24) h = 0;
		m += (s % 3600) / 60;
		if (m > 60)
		{
			addH();
			m = m % 60;
		}
		else if (m == 60)
		{
			addH();
			m = 0;
		}
		s = s % 60;
	}
	else if(s>60)
	{
		m += s / 60;
		if (m > 60)
		{
			addH();
			m = m % 60;			
		}
		else if (m == 60) 
		{
			addH();
			m = 0;
		}
		s = s % 60;
	}
	else
	{
		if (s == 60)
		{
			addM();
			s = 0;			
		}
	}
}



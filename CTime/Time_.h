#pragma once
#include "Library.h"
class Time_
{
private:
	int h, m, s;
public:
	//setters
	void setH(int a);
	void setM(int b);
	void setS(int b);
	//getters
	int getH() { return h; }
	int getM() { return m; }
	int getS() { return s; }

	void setTime(int a, int b, int c);
	void printTime();
	void addH();
	void addM();
	void addS();
	
	//home work
	void addHs(int H);
	void addMs(int M);
	void addSs(int S);
};


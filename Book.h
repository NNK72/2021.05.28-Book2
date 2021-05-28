#pragma once
#include <iostream>
#include<string>
using namespace std;

class Book{
	string FIO;
	int Hphone;
	int Wphone;
	int Mphone;
	string Info;
public:
	Book(string FIO, int Hphone, int Wphone, int Mphone, string Info)
		:FIO{ FIO }, Hphone{ Hphone }, Wphone{ Wphone }, Mphone{ Mphone }, Info{ Info }	{	}



	string getFIO() { return FIO; }
	int getHphone() { return Hphone; }
	int getWphone() { return Wphone; }
	int getMphone() { return Mphone; }
	string getInfo() { return Info; }
};

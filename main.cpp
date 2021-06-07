#include <iostream>
#include<string>
using namespace std;

class Book{
	string FIO;
	int Hphone;
	int Wphone;
	int Mphone;
	string Info;
	static int Count;
public:
	Book(string FIO, int Hphone, int Wphone, int Mphone, string Info)
		:FIO{ FIO }, Hphone{ Hphone }, Wphone{ Wphone }, Mphone{ Mphone }, Info{ Info }	{	}


		:FIO{ FIO }, Hphone{ Hphone }, Wphone{ Wphone }, Mphone{ Mphone }, Info{ Info }	{
		cout << "play constructor" << Count << endl;
	}
	Book() :Book{ "",0,0,0,"" } {}
	Book(string FIO) :Book{ FIO,0,0,0,"" } {}
	Book(string FIO, int Hphone) :Book{ FIO,Hphone,0,0,"" } {}
	Book(string FIO, int Hphone, int Wphone) :Book{ FIO,Hphone,Wphone,0,"" } {}
	Book(string FIO, int Hphone, int Wphone, int Mphone) :Book{ FIO,Hphone,Wphone,Mphone,"" } {}

	string getFIO() { return FIO; }
	int getHphone() { return Hphone; }
	int getWphone() { return Wphone; }
	int getMphone() { return Mphone; }
	string getInfo() { return Info; }
	~Book() {

	}
};

int Book::Count = 0;
int main()
{
   
	
	system("Pause"); return 0;
}

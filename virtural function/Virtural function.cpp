
#include <iostream>
using namespace std;

class A {

public:
	virtual void display()
	{
		cout << "Class A" <<endl;
	}

	void print()
	{
		cout << "Hello" <<endl;
	}
};

class B : public A {

public:
	void display()
	{
		cout << "Class B" <<endl;
	}

	void print()
	{
		cout << "Hello b" <<endl;
	}
};


int main()
{
	
	A* base;

	A child;

	base = &child;

	base->A::display();
	base->print();
}


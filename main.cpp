#include <iostream>

using namespace std;

class Base {
	int data;
public:
	Base(const int d) : data(d) {}

	int fun(int i) { return i; }
};

namespace space {
	void f(int i, int j) {}
}


int main(int argc, char **argv)
{
	Base b(1);

	Base* a = &b;
	Base&& aa = Base(1);

	cout << "hello, world" << endl;

	return 0;
}


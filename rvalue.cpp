#include <iostream>
#include <utility>

using namespace std;

class Base
{
public:
	Base() { cout << "ctor" << endl; data = new int[1000000]; }
	Base(const Base& b) { cout << "copy ctor" << endl; }
	Base(Base&& b) {
		cout << "rvalue ctor" << endl;
		data = b.data;
		b.data = NULL;
	}

	Base& operator= (Base&& b) {
		cout << "rvalue =" << endl;
		if (data != NULL)
		{
			delete [] data;
		}
		data = b.data;
		b.data = NULL;

		return *this;
	}

	~Base() { cout << "dtor" << endl; if (data != NULL) delete [] data; }

private:
	int* data;
};

Base fun()
{
	Base b;
	return std::move(b);
}

Base fun2()
{
	Base b;
	return b;
}

int main(int argc, char** argv)
{
	//Base b;
	//b = fun();

	Base b2 = fun2();

	cout << "b3" << endl;
	Base b3;
	b3 = fun2();

	return 0;
}

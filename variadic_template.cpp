#include <iostream>
#include <string>

using namespace std;

template<typename T>
void output(T&& value)
{
    cout << value << endl;
}

template<typename First, typename... Rest>
void output(First&& first, Rest&&... rest)
{
    cout << first << ",";
    output(forward<Rest>(rest)...);
}

struct Base {};

std::ostream& operator<< (std::ostream& os, const Base& b)
{ os << "Base"; return os;  } 

int main(int argc, char** argv)
{
	output(1, 1.0, 'a', "abc", string("str"), Base());

	return 0;
}

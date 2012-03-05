#include <iostream>
#include <string>
#include <map>

using namespace std;

template<typename T>
using StringMap = map<string, T>;

int main(int argc, char** argv)
{
	StringMap<int> m;

	return 0;
}

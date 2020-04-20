#include <iostream>
#include <string>
#include <map>

using namespace std;

template<typename T>
using StringMap = map<string, T>;

template<typename T>
using IntMap = map<int, T>;

int main(int argc, char** argv)
{
	StringMap<int> m;
	IntMap<double> m2;
	
	return 0;
}

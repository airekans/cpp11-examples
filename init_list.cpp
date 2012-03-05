#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main(int argc, char** argv)
{
	vector<int> v = {1, 3, 2, 4};

	for_each(v.begin(), v.end(), [](const int i) {
		cout << i << endl;
	});

	map<string, int> m = {{"first", 1}, {"second", 2}};


	return 0;
}

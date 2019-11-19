/*out_of_range
用vector或string的at成员函数根据下标访问元素，如果下标越界，就会抛出此异常*/

#include <iostream>
#include <stdexcept>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> v(10);
	try {
		v.at(100) = 100;//抛出out_of_range
	}
	catch (out_of_range & e) {
		cerr << e.what() << endl;
	}
	string s = "hello";
	try {
		char c = s.at(100);//抛出out_of_range异常
	}
	catch (out_of_range & e) {
		cerr << e.what() << endl;
	}
	return 0;
}
/*bad_alloc
用new运算符进行动态内存分配时，如果没有足够的内存，则会引发此异常*/

#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
	try {
		char* p = new char[0x7fffffff];//无法分配那么多内存，则会抛出异常
	}
	catch (bad_alloc & e)
	{
		cerr << e.what() << endl;
	}
	return 0;
}
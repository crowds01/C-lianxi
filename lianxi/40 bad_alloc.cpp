/*bad_alloc
��new��������ж�̬�ڴ����ʱ�����û���㹻���ڴ棬����������쳣*/

#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
	try {
		char* p = new char[0x7fffffff];//�޷�������ô���ڴ棬����׳��쳣
	}
	catch (bad_alloc & e)
	{
		cerr << e.what() << endl;
	}
	return 0;
}
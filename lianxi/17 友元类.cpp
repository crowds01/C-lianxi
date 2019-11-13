/*友元类：如果A是B的友元类，那么A的成员函数可以访问B的私有成员。*/

#include <iostream>
using namespace std;

class CCar
{
private:
	int price;
	friend class CDriver;//声明CDriver为友元类
};
class CDriver
{
public:
	CCar myCar;
	void ModifyCar()//改装汽车
	{
		myCar.price += 1000;//因CDriver是CCar的友元类，故此处可以访问其私有成员
	}
};

int main()
{
	return 0;
}
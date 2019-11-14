/*�ɱ䳤������*/

#include <iostream>
#include <cstdlib>
using namespace std;

class CArray
{
	int size;//����Ԫ�صĸ���
	int* ptr;//ָ��̬���������
public:
	CArray(int s = 0);//s��������Ԫ�صĸ���
	CArray(CArray& a);//���ƹ��캯��
	~CArray();
	void push_back(int v);//����������β�����һ��Ԫ��v
	CArray& operator=(const CArray& a);//������������ĸ�ֵ
	int length() { return size; }//��������Ԫ�صĸ���
	int& operator[] (int i)//�����õĺ�������ֵ������Ϊ��ֵʹ��
	{
		return ptr[i];
	}
};
CArray::CArray(int s) :size(s)
{
	if (s == 0)
		ptr = NULL;
	else
		ptr = new int[s];
}
CArray::CArray(CArray& a)
{
	if (!a.ptr)//���a�ǿ�����
	{
		ptr = NULL;
		size = 0;
		return;
	}
	ptr = new int[a.size];
	memcpy(ptr, a.ptr, sizeof(int) * a.size);
	size = a.size;
}
CArray::~CArray()
{
	if (ptr) delete[]ptr;
}
CArray& CArray::operator=(const CArray& a)
{
	//��ֵ�ŵ�������ʹ��=����߶������ŵ����飬��С�����ݶ����ұߵĶ���һ��
	if (ptr == a.ptr)//��ֹa=a�����ĸ�ֵ���³���
		return *this;
	if (a.ptr == NULL)//���a����������ǿյ�
	{
		if (ptr) delete[]ptr;
		ptr = NULL;
		size = 0;
		return *this;
	}
	if (size < a.size)//���ԭ�пռ��㹻�󣬾Ͳ��÷����µĿռ�
	{
		if (ptr)
			delete[]ptr;
		ptr = new int[a.size];
	}
	memcpy(ptr, a.ptr, sizeof(int) * a.size);
	size = a.size;
	return *this;
}
void CArray::push_back(int v)//Ч�ʽϵͣ�����һ��ʼ�����Щ
{
	//������β�����һ��Ԫ��
	if (ptr)
	{
		int* tmpPtr = new int[size + 1];//���·���ռ�
		memcpy(tmpPtr, ptr, sizeof(int) * size);//����ԭ��������
		delete[]ptr;
		ptr = tmpPtr;
	}
	else//���鱾���ǿյ�
		ptr = new int[1];
	ptr[size++] = v;//�����µ�����Ԫ��
}

int main()
{
	CArray a;//��ʼ��������ǿյ�
	for (int i = 0; i < 5; ++i)
		a.push_back(i);//Ҫ�ö�̬������ڴ����������Ԫ�أ���Ҫһ��ָ���Ա����
	CArray a2, a3;
	a2 = a;//Ҫ���ء�=��
	for (int i = 0; i < a.length(); ++i)
		cout << a2[i] << " ";//Ҫ���ء�[]��
	a2 = a3;//a2�ǿյ�
	for (int i = 0; i < a2.length(); ++i)//a2.length()����0
		cout << a2[i] << " ";
	cout << endl;
	a[3] << 100;
	CArray a4(a);//Ҫ�Լ�д���ƹ��캯��
	for (int i = 0; i < a4.length(); ++i)
		cout << a4[i] << " ";
	return 0;
}
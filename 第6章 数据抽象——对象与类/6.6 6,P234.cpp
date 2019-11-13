/*用类实现矩阵和向量类型并实现矩阵与向量相乘操作。
解：矩阵类（Matrix）、向量类(Vector)和实现矩阵与向量相乘操作的全局函数（multiply）*/

#include <iostream>
#include <cstdlib>
using namespace std;

class Vector;
class Matrix //矩阵类
{
	int* p_data;//表示矩阵数据
	int row, col;//表示矩阵的行数和列数
	friend void multiply(const Matrix& m, const Vector& v, Vector& r);
public:
	Matrix(int r, int c)
	{
		if (r <= 0 || c <= 0)
		{
			cerr << "矩阵尺寸不合法！\n";
			exit(-1);
		}
		row = r;
		col = c;
		p_data = new int[row * col];
	}
	~Matrix()
	{
		delete[]p_data;
	}
	int& element(int i, int j)//访问矩阵元素
	{
		if (i < 0 || i >= row || j < 0 || j >= col)
		{
			cerr << "矩阵下标越界\n";
			exit(-1);
		}
		return *(p_data + i * col + j);
	}
	int element(int i, int j) const//访问矩阵元素（为常量对象提供）
	{
		if (i < 0 || i >= row || j < 0 || j >= col)
		{
			cerr << "矩阵下标越界\n";
			exit(-1);
		}
		return *(p_data + i * col + j);
	}
	int dimension_row() const//获得矩阵的行数
	{
		return row;
	}
	int dimesion_column() const//获得矩阵的列数
	{
		return col;
	}
	void display() const//显示矩阵元素
	{
		int* p = p_data;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				cout << *p << ' ';
				p++;
			}
			cout << endl;
		}
	}
};

class Vector //向量类
{
	int* p_data;
	int num;
	friend void multiply(const Matrix& m, const Vector& v, Vector& r);
public:
	Vector(int n)
	{
		if (n <= 0)
		{
			cerr << "向量尺寸不合法！\n";
			exit(-1);
		}
		num = n;
		p_data = new int[num];
	}
	~Vector()
	{
		delete[]p_data;
	}
	int& element(int i)//访问向量元素
	{
		if (i < 0 || i >= num)
		{
			cerr << "向量下标越界\n";
			exit(-1);
		}
		return p_data[i];
	}
	int element(int i) const//访问向量元素（为常量对象提供）
	{
		if (i < 0 || i >= num)
		{
			cerr << "向量下标越界\n";
			exit(-1);
		}
		return p_data[i];
	}
	int dimension()const//返回向量的尺寸
	{
		return num;
	}
	void display()const//显示向量元素
	{
		int* p = p_data;
		for (int i = 0; i < num; i++, p++)
			cout << *p << ' ';
		cout << endl;
	}
};

void multiply(const Matrix& m, const Vector& v, Vector& r)
{
	if (m.col != v.num || m.dimension_row != r.num)
	{
		cerr << "矩阵和向量的尺寸不匹配！\n";
		exit(-1);
	}
	int* p_m = m.p_data, * p_r = r.p_data, * p_v;
	for (int i = 0; i < m.row; i++)
	{
		*p_v = 0;
		p_v = v.p_data;
		for (int j = 0; j < m.col; j++)
		{
			*p_r += (*p_m) * (*p_v);
			p_m++;
			p_v++;
		}
		p_r++;
	}
}

int main()
{
	int row, column;
	cout << "请输入矩阵的行数和列数：";
	cin >> row >> column;
	Matrix m(row, column);
	Vector v(column);
	Vector r(row);
	cout << "请输入矩阵的元素：\n";
	int i, j;
	for (i = 0; i < row; i++)
		for (j = 0; j < column; j++)
			cin >> m.element(i);
	cout << "请输入向量的元素：\n";
	for (i = 0; i < column; i++)
		cin >> v.element(i);

	multiply(m, v, r);

	cout << "矩阵：\n";
	m.display();
	cout << "与向量：\n";
	v.display();
	cout << "的乘积为：\n";
	r.display();
	return 0;
}

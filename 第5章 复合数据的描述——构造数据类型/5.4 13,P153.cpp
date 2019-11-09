/*从键盘输入一组图形数据，然后输出相应的图形。其中的图形可以是线段、矩形和圆。
解：*/

#include <iostream>
using namespace std;
//三种形状所需要的数据
struct Line
{
	double x1, y1, x2, y2;
};

struct Rectangle
{
	double left, top, right, bottom;
};

struct Circle
{
	double x, y, r;
};
//根据情况变换三种类型
union Figure
{
	Line line;
	Rectangle rect;
	Circle circle;
};

enum FigursShape {LINE,RECTANGLE,CIRCLE};//标记三种类型
struct TaggedFigure//同时记录形状，并根据情况转换
{
	FigursShape shape;
	Figure figure;
};
const int MAX_NUM_OF_FIGGURES = 100;
TaggedFigure figures[MAX_NUM_OF_FIGGURES];
extern void draw_line(Line line);//画线函数
extern void draw_rectangle(Rectangle rect);//画矩形函数
extern void draw_circle(Circle circle);//画圆函数
//需要用到计算机的绘图功能，先不给出实现
int main()
{
	//输入图形数据
	int count;
	for (count = 0; count < MAX_NUM_OF_FIGGURES; count++)
	{
		int shape;
		do
		{
			cout << "请输入图形的种类（0：线段，1：矩形，2：圆，-1：结束）：";
			cin >> shape;
		} while (shape < -1 || shape>2);
		if (shape == -1)
			break;
		switch (shape)
		{
		case 0://线
			figures[count].shape = LINE;
			cout << "请输入线段的起点和终点坐标（x1,y1,x2,y2）:";
			cin >> figures[count].figure.line.x1
				>> figures[count].figure.line.y1
				>> figures[count].figure.line.x2
				>> figures[count].figure.line.y2;
			break;
		case 1://矩形
			figures[count].shape = RECTANGLE;
			cout << "请输入矩形的左上角和右下角坐标（left,top,right,bottom）:";
			cin >> figures[count].figure.rect.left
				>> figures[count].figure.rect.top
				>> figures[count].figure.rect.right
				>> figures[count].figure.rect.bottom;
			break;
		case 2://圆形
			figures[count].shape = CIRCLE;
			cout << "请输入圆的圆心坐标和半径（x,y,r）:";
			cin >> figures[count].figure.circle.x
				>> figures[count].figure.circle.y
				>> figures[count].figure.circle.r;
			break;
		}
	}
	//输出所有图形
	for (int i= 0; i < count; i++)
	{
		switch (figures[i].shape)
		{
		case LINE:
			draw_line(figures[i].figure.line);
			break;
		case RECTANGLE:
			draw_rectangle(figures[i].figure.rect);
			break;
		case CIRCLE:
			draw_circle(figures[i].figure.circle);
			break;
		}
	}
	return 0;
}

int n = [](int x, int y)->int {return x * y; }(3, 4);//lanbda表达式
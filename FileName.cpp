#include <iostream>
using namespace std;
class Rectangle
{
private:
	int length, width;
public:
	Rectangle();
	Rectangle(int x, int y);
	int C();
	int S();


};

Rectangle::Rectangle()
{
	length = 0; width = 0;
}

Rectangle::Rectangle(int x, int y)
{
	length = x; width = y;
	cout << "length: " << length << ", " << "width: " << width << endl;
}

int Rectangle::C()
{
	return 2 * length + 2 * width;
}

int Rectangle::S()
{
	return length * width;
}

int main()
{
	int x, y;
	cout << "输入长和宽：";
	cin >> x >> y;
	Rectangle P(x, y);
	cout << "矩形的周长：" << P.C() << endl << "矩形的面积：" << P.S() << endl;

}


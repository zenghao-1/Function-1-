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
	cout << "���볤�Ϳ�";
	cin >> x >> y;
	Rectangle P(x, y);
	cout << "���ε��ܳ���" << P.C() << endl << "���ε������" << P.S() << endl;

}


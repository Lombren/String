#include<iostream>
using namespace std;

class Point
{
	double x;
	double y;
public:
	double get_x() const
	{
		return x;
	}
	double get_y() const
	{
		return y;
	}
	void set_x(double x)
	{
		if (x > 100)this->x = 100;
		else this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}
};

void main()
{
	int a;
	Point A;
	double x, y;
	cout << "������� ���������� �����: "; cin >> x >> y;
	A.set_x(x);
	A.set_y(y);
	cout << A.get_x() << "\t" << A.get_y() << endl;

	Point* pA = &A;
	cout << pA->get_x() << "\t" << pA->get_y() << endl;
	//	. - �������� ������� ������� (Point operator);
	//	-> - ������� ���������� ������� (Arrow operator);

	Point B;
	B.set_x(666);
	B.set_y(777);
	cout << B.get_x() << "\t" << B.get_y() << endl;
}

/*
//1. ������������ (Encapsulation); get/set-�������
private:
public:
protected:

get/set-������

//2. ������������ (Inheritance);
//3. �����������  (Polymorphism);
*/
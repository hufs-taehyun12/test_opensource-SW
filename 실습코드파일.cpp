//장태현 202102966 컴퓨터공학과
#include<iostream>
using namespace std;

class Coord_2D {
private:
	int x;
	int y;

public:
	Coord_2D(int _x, int _y) :x(_x), y(_y) {}
	void showCoord();

	Coord_2D addCoord(Coord_2D& _k);
	Coord_2D operator+(Coord_2D& _k);
	bool operator==(Coord_2D& _k);
	bool operator!=(Coord_2D& _k);
	Coord_2D& operator++();
	Coord_2D operator++(int);
};

Coord_2D Coord_2D::operator+(Coord_2D& _k) {
	Coord_2D temp(x + _k.x, y + _k.y);
	return temp;
}
Coord_2D Coord_2D::addCoord(Coord_2D& _k) {
	Coord_2D temp(x + _k.x, y + _k.y);
	return temp;
}
bool Coord_2D::operator==(Coord_2D& _k) {
	//return ((x == _k.x) && (y == _k.y));
	return !(*this != _k);
}

bool Coord_2D::operator!=(Coord_2D& _k) {
	//return !((x == _k.x) && (y == _k.y));
	return !(*this == _k);
}
Coord_2D& Coord_2D::operator++() {
	x++;
	y++;
	return *this;
}
Coord_2D Coord_2D::operator++(int) {
	Coord_2D temp = *this;
	x++;
	y++;
	return temp;
}

void Coord_2D::showCoord() {
	cout << "(" << x << "," << y << ")" << endl;
}

int main() {
	Coord_2D a(10, 10);
	//Coord_2D b(20, 20);

	a.showCoord();
	b.showCoord();
	a.showCoord();
	b.showCoord();
	a.showCoord();
	b.showCoord();
	

	//++(++a);
	//a.showCoord();
	Coord_2D b = a++;
	a.showCoord();
	b.showCoord();

	return 0;;
}

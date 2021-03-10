#pragma once


class Punto {
private:
	int x;
	int y;
public:
	Punto(int x, int y) : x(x), y(y) {}
	~Punto() = default;

    int getX() const { return x; }
    void setX(int x) { this->x = x; }

    int getY() const { return y; }
    void setY(int y) { this->y = y; }



};
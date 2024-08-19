#include <cmath>

using namespace std;

const double PI = acos(-1);

class Poly
{
public:
    Poly(unsigned int num, double radius);
    Poly(double radius);

public:
    double perimeter() const;
    double area() const;

private:
    void _CalcPerimeter();
    void _CalcArea();

private:
    int _num;
    double _radius;
    double _area;
    double _perimeter;
    double _angle;
};

Poly::Poly(unsigned int num, double radius) : _num(num), _radius(radius)
{
    _angle = 2 * PI / num;
    _CalcPerimeter();
    _CalcArea();
}

Poly::Poly(double radius) : _radius(radius), _angle(0), _num(-1)
{
    _perimeter = 2 * PI * _radius;
    _area = PI * _radius * _radius;
}

double Poly::perimeter() const
{
    return _perimeter;
}

double Poly::area() const
{
    return _area;
}

void Poly::_CalcPerimeter()
{
    double side = sqrt(2 * (1 - cos(_angle))) * _radius;
    _perimeter = _num * side;
}

void Poly::_CalcArea()
{
    _area = _num * (_radius * _radius * sin(_angle) / 2);
}

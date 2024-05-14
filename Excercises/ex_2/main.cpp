#include <iostream>
using namespace std;
class Polygon {
protected:
int width, height;
public:
void set_values (int a, int b)
{ width=a; height=b;}
};
class Rectangle: public Polygon, public PaintCost {
public:
int area ()
{ return width * height; }
};
class Triangle: public Rectangle {
public:int area()
{
return (width*height)/2;
}
};
class PaintCost
{
public:
int getCost(int area)
{
return area * 70;
}
};
int main ()
{
Rectangle rect;
PaintCost cost;
rect.set_values (5,8);
cout << "Emvadon orthogoniou: " << rect.area() << '\n';
cout << "Synoliko kostos xrwmatos: " << cost.getCost(rect.area()) << endl;
return 0;
}

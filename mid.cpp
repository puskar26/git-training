#include <iostream>
using namespace std;
class midPoint
{
private:
  double point1;
  double point2;

public:
  midPoint(double x, double y) : point1(x), point2(y) {}
  static midPoint findMidpoint(midPoint *p1, midPoint *p2)
  {
    double a = (p1->point1 + p2->point1) / 2;
    double b = (p1->point2 + p2->point2) / 2;
    return midPoint(a, b);
  }
  void display()
  {
    cout << "(" << point1 << ", " << point2 << ")" << endl;
  }
};
int main()
{
  midPoint *pt1 = new midPoint(2, 3);
  midPoint *pt2 = new midPoint(4, 5);
  midPoint pt3 = pt1->findMidpoint(pt1, pt2);
  cout << "Point 1: ";
  pt1->display();
  cout << "Point 2: ";
  pt2->display();
  cout << "Midpoint: ";
  pt3.display();

  delete pt1;
  delete pt2;
  return 0;
}
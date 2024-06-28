#include <iostream>
using namespace std;
class Compare
{
  int feet;
  float inches;

public:
  Compare(int ft, float in) : feet(ft), inches(in) {}
  friend bool operator>(Compare &c1, Compare &c2);
  friend bool operator==(Compare &c1, Compare &c2);
};
bool operator>(Compare &c1, Compare &c2)
{
  if (c1.feet > c2.feet)
  {
    return true;
  }
  else if (c1.feet == c2.feet && c1.inches > c2.inches)
  {
    return true;
  }
  else
  {
    return false;
  }
}
bool operator==(Compare &c1, Compare &c2)
{
  return (c1.feet == c2.feet && c1.inches == c2.inches);
}
int main()
{
  Compare c1(2, 5);
  Compare c2(2, 3);
  Compare c3(4, 6);
  if (c1 > c2)
  {
    cout << "c1 is greater than c2" << endl;
  }
  else
  {
    cout << "c1 is not greater than c2" << endl;
  }

  if (c1 == c3)
  {
    cout << "c1 is equal to c3" << endl;
  }
  else
  {
    cout << "c1 is not equal to c3" << endl;
  }
  return 0;
}
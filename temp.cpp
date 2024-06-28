#include <iostream>
using namespace std;
class Temp
{
private:
  double temp;

public:
  Temp(double x) : temp(x) {}
  Temp operator-() const
  {
    return Temp((1.8 * temp) + 32);
  }
  void display()
  {
    cout << "Temperature: " << temp << endl;
  }
};
int main()
{
  Temp t1(37);
  Temp t2 = -t1;
  t2.display();
  return 0;
}
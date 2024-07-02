#include <iostream>
using namespace std;
class Student
{
  int roll;
  static int count;

public:
  void getInfo()
  {
    cout << "Enter the ROll no: ";
    cin >> roll;
    count++;
  }
  void showInfo()
  {
    cout << "Count: " << count << endl;
    ;
  }
};
int Student::count = 0;
int main()
{
  Student s1, s2;
  s1.getInfo();
  s1.showInfo();
  s2.getInfo();
  s2.showInfo();

  return 0;
}
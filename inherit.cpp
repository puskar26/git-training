#include <iostream>
using namespace std;
class Person
{
protected:
  string name;
  int age;

public:
  Person(string x, int y) : name(x), age(y) {}
  void displayDetails()
  {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  }
  virtual void character() {}
};
class Student : public Person
{
protected:
  string grade;

public:
  Student(string x, int y, string z) : Person(x, y), grade(z) {}
  void displayStudentDetails()
  {
    cout << "Grade: " << grade << endl;
  }
  void character() override
  {
    cout << "Good" << endl;
  }
};
int main()
{
  Student s("Pushkar", 20, "A+");
  s.displayDetails();
  s.displayStudentDetails();
  s.character();
  return 0;
}
#include <iostream>
using namespace std;
class Concatenate
{
  string word;

public:
  Concatenate(string x) : word(x) {}
  Concatenate operator+(const Concatenate &other)
  {
    return (word + other.word);
  }
  void display()
  {
    cout << "Word is: " << word << endl;
  }
};
int main()
{
  Concatenate w1("Pus");
  Concatenate w2("kar");
  Concatenate w3 = w1 + w2;
  w3.display();
  return 0;
}
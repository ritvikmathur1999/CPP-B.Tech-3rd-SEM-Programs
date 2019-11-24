//INLINE FUNCTION EXAMPLE
#include<iostream>
using namespace std;

class calc
{
  int a, b;
public:
    inline int add (int a, int b)
  {
    return a + b;
  }

  inline int sub (int a, int b)
  {
    return a - b;
  }

  inline int mul (int a, int b)
  {
    return a * b;
  }

  inline int divi (int a, int b)
  {
    return a / b;
  }

  inline int mod (int a, int b)
  {
    return a % b;
  }
};

int
main ()
{
  int a, b, op;
  calc c;
  cout << "Enter first number:";
  cin >> a;
  cout << "\nEnter second number:";
  cin >> b;
  cout << "\nSum:" << c.add (a, b) << endl;
  cout << "\nDifference:" << c.sub (a, b) << endl;
  cout << "\nProduct:" << c.mul (a, b) << endl;
  cout << "\nDivision:" << c.divi (a, b) << endl;
  cout << "\nModulus:" << c.mod (a, b) << endl;
}

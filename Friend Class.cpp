//Implementation of friend class.
#include<iostream>
using namespace std;
class B;
class A
{
  int x;
public:
  void getx ()
  {
    cout << "Enter the value of X:";
    cin >> x;
  }

  friend class B;
};

class B
{
  int y;
public:
  void gety ()
  {
    cout << "Enter the value of Y:";
    cin >> y;
  }
  void sum (A);
};

void
B::sum (A a1)
{
  cout << "\nSum:" << a1.x + y;
}

int
main ()
{
  A a1;
  B b1;
  a1.getx ();
  b1.gety ();
  b1.sum (a1);
}

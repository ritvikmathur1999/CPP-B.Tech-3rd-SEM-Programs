//Member function of one class, Friend function of the other's
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

  void sum (B);
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
  friend void A::sum (B);
};

void
A::sum (B b1)
{
  cout << "\nSum:" << x + b1.y;
}

int
main ()
{
  A a1;
  B b1;
  a1.getx ();
  b1.gety ();
  a1.sum (b1);
}

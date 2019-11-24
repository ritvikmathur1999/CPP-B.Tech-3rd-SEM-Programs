#include<iostream>

using namespace std;

class matrix {

  int a[3][3], b[3][3], sum[3][3], i, j;

  public:
    void getmatrix();

  void add();

  void show();

};

void
matrix::getmatrix() {

  cout << "Enter first matrix:" << endl;

  for (i = 0; i < 3; i++)

    for (j = 0; j < 3; j++)

  {

    {

      cin >> a[i][j];

    }

  }

  cout << "Enter second matrix:" << endl;

  for (i = 0; i < 3; i++)

  {

    for (j = 0; j < 3; j++)

    {

      cin >> b[i][j];

    }

  }

}

void
matrix::add() {

  for (i = 0; i < 3; i++)

  {

    for (j = 0; j < 3; j++)

    {

      sum[i][j] = a[i][j] + b[i][j];

    }

  }

}

void
matrix::show() {

  for (i = 0; i < 3; i++)

  {

    for (j = 0; j < 3; j++)

    {

      cout << sum[i][j] << " ";

    }

    cout << "\n";

  }

}

int
main() {

  matrix m;

  m.getmatrix();

  m.add();

  m.show();

}

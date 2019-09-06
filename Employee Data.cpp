#include <iostream>
using namespace std;

class emp 
{
    public:
    int eid,n;            //Employee Id Declaration
    char name[10];        //Employee Name Declaration
    public:
    void getdata();       //INPUT FUNCTION DECLARATION
    void showdata();      //OUTPUT FUNCTION DECLARATION
};

void emp:: getdata()
{
    cout<<"\n Employee ID : ";
    cin>>eid;
    cout<<"\nEmployee Name : ";
    cin>>name;
  }

void emp:: showdata()
{
     cout<<"\nEMPLOYEES DETAILS\n\n";
     cout<<"\nEmployee ID : "<<eid<<"\nEmployee Name : "<<name;
}

int main()
{
int n;
cout<<"\nEnter the number of employees:";
cin>>n;
emp e[10];
for(int i=0;i<n;i++)
e[i].getdata();           //I Function Call
for(int i=0;i<n;i++)      
e[i].showdata();          //O Function Call
return 0;
}

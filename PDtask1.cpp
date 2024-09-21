#include<iostream>
using namespace std;
main()
{
int sides;
int angles;
cout<<"Enter the number of sides of the polygon: ";
cin>>sides;
angles=(sides-2)*180;
cout<<"The sum of integral angles of a "<<sides<<"-sided polygon is: "<<angles<<" degrees";
}
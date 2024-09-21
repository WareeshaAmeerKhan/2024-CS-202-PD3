#include<iostream>
using namespace std;
main()
{
string name;
float target;
float days;
int loss_per_day=15;
cout<<"Enter the name of the person: ";
cin>>name;
cout<<"Enter the target weight loss in kilogram: ";
cin>>target;
days=target*loss_per_day;
cout<<name<<" will need "<<days<<" days to lose "<<target<<" kg of weight by following the doctor's suggestions.";
}
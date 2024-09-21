#include<iostream>
using namespace std;
main()
{
float size_bag;
float cost_bag;
float area_coveredby_bag;
float cost_per_pound;
float cost_per_sqfoot;
cout<<"Enter the size of fertilizer bag in pounds: ";
cin>>size_bag;
cout<<"Enter the cost of bag: $";
cin>>cost_bag;
cout<<"Enter the area in sq feet that can be covered by bag: ";
cin>>area_coveredby_bag;
cost_per_pound=cost_bag/size_bag;
cout<<"Cost of fertilizer per pound: $"<<cost_per_pound<<endl;
cost_per_sqfoot=cost_bag/area_coveredby_bag;
cout<<"Cost of fertilizing per square foot: $"<<cost_per_sqfoot;
}
#include<iostream>
using namespace std;
main()
{
string movie;
float adult_price;
float child_price;
float adult_sold;
float child_sold;
float charity;
float total_sale;
float donation;
float remaining;
cout<<"Enter the movie name: ";
cin>>movie;
cout<<"Enter the adult ticket price: $";
cin>>adult_price;
cout<<"Enter the child ticket price: $";
cin>>child_price;
cout<<"Enter the number of adult tickets sold: ";
cin>>adult_sold;
cout<<"Enter the number of child tickets sold: ";
cin>>child_sold;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>>charity;
cout<<"                                                             "<<endl;
cout<<"Movie: "<<movie<<endl;
total_sale=adult_sold*adult_price+child_sold*child_price;
cout<<"Total amount generated from ticket sales: $"<<total_sale<<endl;
donation=0.1*total_sale;
cout<<"Donation to Charity (10%): $"<<donation<<endl;
remaining=total_sale-donation;
cout<<"Remaining amount after donation: $"<<remaining<<endl;
}
#include<iostream>
using namespace std;
main()
{
float v_per_kg;
float f_per_kg;
int tot_v;
int tot_f;
float earning_c;
float earning_Rps;
cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>v_per_kg;
cout<<"Enter fruit price per kilogram (in coins): ";
cin>>f_per_kg;
cout<<"Enter total kilograms of vegetables: ";
cin>>tot_v;
cout<<"Enter total kilograms of fruits: ";
cin>>tot_f;
earning_c=(v_per_kg*tot_v)+(f_per_kg*tot_f);
earning_Rps=earning_c/1.94;
cout<<"Total earning in Rupees (Rps): "<<earning_Rps;
}
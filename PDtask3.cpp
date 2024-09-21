#include<iostream>
using namespace std;
main()
{
float i_v;
float f_v;
float acc;
float t;
cout<<"Enter Initial Velocity (m/s): ";
cin>>i_v;
cout<<"Enter Acceleration (m/s^2): ";
cin>>acc;
cout<<"Enter Time (s): ";
cin>>t;
f_v=(acc*t)+i_v;
cout<<"Final Velocity: "<<f_v;
}
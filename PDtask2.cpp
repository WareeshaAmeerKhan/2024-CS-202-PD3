#include<iostream>
using namespace std;
main()
{
int min;
int frame_sec;
int total_frames;
cout<<"Number of Minutes: ";
cin>>min;
cout<<"Frames per Second: ";
cin>>frame_sec;
total_frames=min*60*frame_sec;
cout<<"Total Number of Frames: "<<total_frames;
}
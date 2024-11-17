#include<iostream>
using namespace std;
int main()
{
 int bill,units;
 cout<<"ENTER THE UNITS:";
 cin>>units;
 if(units<=50){
  bill=0.5*(units-50);
 } else if (units<=150){
  bill=0.5*50+0.75*(units-150);
 }else if(units<=250){
  bill=0.5*50+0.75*100+1.2*(units-250);
 }else {
  bill=0.5*50+0.75*100+1.2*100+1.5*(units-250);
 }
 cout<<"YOUR FINAL BILL IS : RS."<<bill<<endl;
 return 0;
}
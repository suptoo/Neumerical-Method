#include<bits/stdc++.h>
using namespace std;  
int main()
{
    double a,x1=0,x2=0;
   
    cout<<"Enter approximation "<<endl;
    cin>>a;
    double e;
    cout<<"Enter Thresold"<<endl;
    cin>>e;
    double d;
    cout<<"Iteration Method"<<endl;
    cout<<"x_n"<<"           "<<"g_n"<<"           "<<"|x_{n+1}-x_n|"<<endl;
  x1=a;
    while(1)
    {
     x2=x1;
    x1=1/exp(x1);
    if(abs(x2-x1)<e)
   {
    break;
   }
     cout<<fixed<<setprecision(5)<<x2<<"      "<<x1<<"         "<<abs(x2-x1)<<endl;
    
    }
    cout<<fixed<<setprecision(9)<<"Root is "<<x1<<endl;
}  

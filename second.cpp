#include<bits/stdc++.h>
using namespace std; 
int main()
{  
   double  x0,x1,xn;
   double f0,f1;
    cout<<"Enter x0 and x1"<<endl;
    cin>>x0>>x1;
    double e;
    cout<<"Enter Thresold"<<endl;
    cin>>e;
    double d;
    cout<<"Second Method"<<endl;
    cout<<"x_n"<<"          "<<"f(x_n)"<<"          "<<"|x_{n+1}-x_n|"<<endl;
    while(e<=abs(x1-x0))
    {
     
      f0=pow(x0,3)-2*x0-5;
      f1=pow(x1,3)-2*x1-5;
      double d;
      d=f1;
     xn=x1-(f1*(x1-x0))/(f1-f0);
     x0=x1;x1=xn;
     cout<<fixed<<setprecision(5)<<x0<<"      "<<d<<"        "<<abs(x1-x0)<<endl; 
    }
     
    cout<<fixed<<setprecision(9)<<"Root is "<<xn<<endl;
}  

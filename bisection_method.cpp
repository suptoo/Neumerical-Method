#include<bits/stdc++.h>
using namespace std; 
int main()
{  
   double a,b,c;
   double f1,f2;
    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
    double e;
    cout<<"Enter Thresold"<<endl;
    cin>>e;
    double d;
    cout<<"Bisection Method"<<endl;
    cout<<"a"<<"          "<<"b"<<"          "<<"c"<<"          "<<"f(c)"<<endl;
    while(e<=abs(a-b)/2)
    {
        
      c=(a+b)/2;
      d=pow(c,3)-c-1;
      f1=pow(a,3)-a-1;
      f2=pow(b,3)-b-1;
      
      if(d==0 )
      {
        cout<<"Root is "<<c<<endl;
        break;
      }
      else if(f1*d<0)
      {
        b=c;
      }
      else if(f2*d<0)
        {
               a=c;
        }
        double a1=a,b1=b,c1=c,d1=d;
     cout<<fixed<<setprecision(5)<<a1<<"   "<<b1<<"   "<<c1<<"   "<<d1<<endl; 
    }
     
    cout<<fixed<<setprecision(9)<<"Root is "<<c<<endl;
}  

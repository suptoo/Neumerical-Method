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
    cout<<"Falseposition Method"<<endl;
    cout<<"a"<<"          "<<"b"<<"          "<<"c"<<"          "<<"f(c)"<<endl;
    while(e<=abs(a-b))
    {
     
      f1=pow(a,3)-a-1;
      f2=pow(b,3)-b-1;
      c=(a*f2-b*f1)/(f2-f1);
       d=pow(c,3)-c-1;
      
      if(abs(d)<e )
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

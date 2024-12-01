#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x0, x1,e,f;
        cout<<"Enter the value of x0: ";
        cin>>x0;
        cout<<"Enter the value of e: ";
        cin>>e;
  cout<<"f(x_n)     "<<"f(x_n+1)       "<<"|x_n-x_(n+1)|"<<endl;
 
        while(abs(x1-x0)>=e)
        { 
            x1=x0;
         x0=x0-((pow(x0,3)-2*x0-5)/(3*pow(x0,2)-2));
          f=pow(x1,3)-2*x1-5;
              cout<<fixed<<setprecision(5)<<x1<<"     "<<f<<"      "<<abs(x1-x0)<<endl;
        }  
        cout<<fixed<<setprecision(9)<<"Root is "<<x0<<endl; 
}
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<double>x ;
    vector<double>y ;
    cout<<"Enter the number of points"<<endl;
    int n; 
    cin>>n;
    cout<<"Enter the points"<<endl;
    for(int i=0;i<n;i++){
        double a,b;
        cin>>a>>b;
        x.push_back(a);
        y.push_back(b);
    }
//formula= 
//((y[0] + y[n-1] + 3*remaining terms  like (y1+y2+y4+y5++) +2*multiple of 3(like :y3+y6+y9++)) * h )/ 3;
//h=x[n-1]-x[0]/n-1
//valid for total number of interval is multiple of 3
  double y_rem = 0.0;
  double y_3_mul = 0.0;
  for (int i = 1; i < n - 1; i++) 
  { 
    if (i % 3 == 0) 
      y_3_mul += y[i];
    else 
        y_rem += y[i];
  }
  double area;
  double h = (x[n-1] - x[0]) / (n - 1);
  area = ((y[0] + y[n-1] + 3 *y_rem+2*y_3_mul) * h*3 )/8 ;
    
    cout<< "Approximate integral: " << area << endl;
    return 0;
}
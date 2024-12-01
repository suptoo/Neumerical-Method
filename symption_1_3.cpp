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
//formula= ((y[0] + y[n-1] + 4* y_odd +2*y_even) * h )/ 3;
//h=x[n-1]-x[0]/n-1
//valid for even integral only
  double y_odd = 0.0;
  double y_even = 0.0;
  for (int i = 1; i < n - 1; i++) 
  { 
    if (i % 2 == 0) 
      y_even += y[i];
    else 
        y_odd += y[i];
  }
  double area;
  double h = (x[n-1] - x[0]) / (n - 1);
  area = ((y[0] + y[n-1] + 4 *y_odd+2*y_even ) * h )/ 3;
    
    cout<< "Approximate integral: " << area << endl;
    return 0;
}
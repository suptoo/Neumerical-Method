#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<double>x ;
    vector<double>y ;
    int n; 
    cout<<"Enter the number of points"<<endl;
    cin>>n;
    cout<<"Enter the points"<<endl;
    for(int i=0;i<n;i++){
        double a,b;
        cin>>a>>b;
        x.push_back(a);
        y.push_back(b);
    }
//formula= ((y[0] + y[n-1] + 2 * y_sum) * h )/ 2;
//h=x[n-1]-x[0]/n-1
  double y_vlue = 0.0;
  for (int i = 1; i < n - 1; i++) 
  {
    y_vlue += y[i];
  }
  double area;
  double h = (x[n-1] - x[0]) / (n - 1);
  area = ((y[0] + y[n-1] + 2 * y_vlue) * h )/ 2;
    
    cout<< "Approximate integral: " << area << endl;
    return 0;
}
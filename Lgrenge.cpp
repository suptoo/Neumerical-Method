#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<double> x;
    vector<double> y;
    cout << "Enter the number of points" << endl;
    int n; 
    cin >> n;
    cout << "Enter the points (x y)" << endl;
    for(int i = 0; i < n; i++){
        double a, b;
        cin >> a >> b;
        x.push_back(a);
        y.push_back(b);
    }
    cout << "Enter the value of x for which you want to find y" << endl;
    double x1;
    cin >> x1;
    vector<vector<double>> v(n, vector<double>(n, 0));

    for(int i = 0; i < n; i++)
    {
        v[0][i] = y[i];
    }

    double h = x[1] - x[0];
    double p = (x1 - x[0]) / h;
    double result = 0;
    

    for(int i = 0; i < n; i++)
    {
        double product = y[i];
        for(int j = 0; j < n; j++)
        {
           if (j!=i)
           {
                product *= (x1 - x[j])/(x[i] - x[j]);
           }
        }
        result += product;
    }



    cout << "Estimated value at x = " << x1 << " is " << result << endl;
    return 0;
}

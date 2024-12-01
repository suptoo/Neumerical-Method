#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

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
        v[i][0] = y[i];
    }

    double h = x[1] - x[0];
    double p = (x1 - x[0]) / h;
    double result = y[0];
    
    
    for(int j = 1; j < n; j++)
    {
        for(int i = 0; i < n - j; i++)
        {
            v[i][j] = v[i+1][j-1] - v[i][j-1];
        }
    }
    

    for(int i = 1; i < n; i++)
    {
        double product = 1;
        for(int k = 0; k < i; k++)
        {
            product *= (p - k);
        }
        result += (product * v[0][i]) / factorial(i);
    }


    
    cout << "Forward Difference Table:" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << x[i] << "\t";
        for(int j = 0; j < n - i; j++)
        {
            cout << v[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << "Estimated value at x = " << x1 << " is " << result << endl;
    return 0;
}
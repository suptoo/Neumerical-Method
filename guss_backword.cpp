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


   
    for(int j = 1; j < n; j++)
    {
        for(int i = n - 1; i >= j; i--)
        {
            v[i][j] = v[i][j - 1] - v[i - 1][j - 1];
        }
    }
    int mid = n / 2;
    double h = x[1] - x[0];
    double p = (x1 - x[mid]) / h;
    double result = y[mid];

   
    for(int i = 1; i < n; i++)
    {
        double product = p;
        for(int k = 1; k <= (i - 1); k++)
        {
            if(k % 2 == 1)
                product *= (p + (k + 1) / 2.0);
            else
                product *= (p - k / 2.0);
        }
        result += (product * v[mid + (i - 1) / 2][i]) / factorial(i);
    }

    cout << "\nBackward Difference Table:\n";
    for(int i = 0; i < n; i++)
    {
        cout << fixed << setprecision(4) << x[i] << "\t";
        for(int j = 0; j <= i; j++)
        {
            cout << fixed << setprecision(4) << v[i][j] << "\t";
        }
        cout << endl;
    }

    cout << fixed << setprecision(6);
    cout << "\nInterpolated value at x = " << x1 << " is " << result << endl;

    return 0;
}

#include <iostream>
#include <vector>
#include <iomanip>

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

   
    for(int j = 1; j < n; j++)
    {
        for(int i = n - 1; i >= j; i--)
        {
            v[i][j] = v[i][j - 1] - v[i - 1][j - 1];
        }
    }
    double p = (x1 - x[n - 1]) / h;
    double result = y[n - 1];


    for(int i = 1; i < n; i++)
    {
        double product = p;
        for(int k = 1; k < i; k++)
        {
            product *= (p + k);
        }
        result += (product * v[n - 1][i]) / factorial(i);
    }

    cout << "\nBackward Difference Table:\n";
    for(int i = 0; i < n; i++)
    {
        cout << setw(5) << x[i];
        for(int j = 0; j <= i; j++)
        {
            cout << setw(12) <<v[i][j];
        }
        cout << endl;
    }

    cout << fixed << setprecision(6);
    cout << "\nResult x = " << x1 << " is " << result << endl;

    return 0;
}
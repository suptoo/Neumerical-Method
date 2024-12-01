#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of data points: ";
    cin >> n;

    vector<double> x(n), y(n);
    cout << "Enter the data points (x y):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;

    for (int i = 0; i < n; i++) {
        sumX += x[i];
        sumY += y[i];
        sumXY += x[i] * y[i];
        sumX2 += x[i] * x[i];
    }

    double m = (n * sumXY - sumX * sumY) / (n * sumX2 - sumX * sumX);
    double c = (sumY - m * sumX) / n;

    cout << "The fitted line is: y = " << m << "x + " << c << endl;
    double x1;
    cout << "Enter the value of x to predict y: ";
    cin >> x1;
    double y1 = m * x1 + c;
    cout << "The estimated value of y at x = " << x1 << " is " << y1 << endl;

    return 0;
}

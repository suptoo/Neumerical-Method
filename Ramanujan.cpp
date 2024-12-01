#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a1, a2, a3, a4, a5, a6, R, R0, e, b1, b2, b3, b4, b5, b6, b7;
    vector<double> v;

    cout << "Enter the value of e: ";
    cin >> e;
    cout << "Output" << endl;

    
    a1 = 1;
    a2 = -1.0 / 4;
    a3 = 1.0 / 36;
    a4 = -1.0 / 576;
    a5 = 1.0 / 14400;
    a6 = -1.0 / 518400;

    
    b1 = 1;
    b2 = a1;
    b3 = a1 * b2 + a2 * b1;
    b4 = a1 * b3 + a2 * b2 + a3 * b1;
    b5 = a1 * b4 + a2 * b3 + a3 * b2 + a4 * b1;
    b6 = a1 * b5 + a2 * b4 + a3 * b3 + a4 * b2 + a5 * b1;
    b7 = a1 * b6 + a2 * b5 + a3 * b4 + a4 * b3 + a5 * b2 + a6 * b1;
    v={b1, b2, b3, b4, b5, b6, b7}; 
   
    for (size_t i = 0; i < v.size(); i++) {
        cout << "b_" << i << " = " << v[i] << endl;
    }
    int i = 0;
    R0 = v[0] / v[1];
    i++;
    
    while ( abs(R - R0) >= e && i<=v.size() ) {
        R = R0;
        R0 = v[i] / v[i + 1];
        cout << fixed << setprecision(5) << "b_" << i << "/b_" << (i + 1) <<R<< endl;
        i++;
    }
    cout << fixed << setprecision(9) << "Root is " << R0 << endl;
}
#include <iostream>

using namespace std;

int main() {
    const double RISE_RATE_MM_PER_YEAR = 1.5;

    int years1 = 5;
    int years2 = 7;
    int years3 = 10;

    double rise5Years = RISE_RATE_MM_PER_YEAR * years1;
    double rise7Years = RISE_RATE_MM_PER_YEAR * years2;
    double rise10Years = RISE_RATE_MM_PER_YEAR * years3;

    cout << "Ocean level rise after " << years1 << " years: " << rise5Years << " mm" << endl;
    cout << "Ocean level rise after " << years2 << " years: " << rise7Years << " mm" << endl;
    cout << "Ocean level rise after " << years3 << " years: " << rise10Years << " mm" << endl;

    return 0;
}
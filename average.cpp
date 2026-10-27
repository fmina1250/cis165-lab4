#include <iostream>

using namespace std;

int main() {
    double value1 = 28.0;
    double value2 = 32.0;
    double value3 = 37.0;
    double value4 = 24.0;
    double value5 = 33.0;

    double sum = value1 + value2 + value3 + value4 + value5;
    double average = sum / 5.0;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}
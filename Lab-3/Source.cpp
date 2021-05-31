#include "iostream"
#include "calc.h"

using namespace std;

int main() {
    auto a = 20.1, b = 1.07, x = 0.19;

    auto result = calc::calculate(x, a, b);
    cout << "Result 1: " << result << endl;

    if (calc::calculate(x, a, b, result)) {
        cout << "Result 2: " << result << endl;
    }

    calc::Calculator calculator(a, b);
    cout << "Calculator 1: " << calculator.calculate(x) << endl;

    getchar();
}

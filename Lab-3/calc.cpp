#include "calc.h"

using namespace std;

double calc::calculate(const double& x, const double& a, const double& b) {

    auto res1 = 1 - tan(a * x);
    auto res2 = b - sqrt(x + 1);

    return res1 / res2;

}

bool calc::calculate(const double& x, const double& a, const double& b, double& result) {

    try {
        result = calc::calculate(x, a, b);

        return true;
    }
    catch (...) {

        return false;
    }
}

calc::Calculator::Calculator(const double&, const double&) {
    this->a = a;
    this->b = b;

}

calc::Calculator::~Calculator() {

}

double calc::Calculator::calculate(const double& x) const {

    return calc::calculate(x, this->a, this->b);
}

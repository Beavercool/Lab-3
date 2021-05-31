#include <cmath>
#include <string>

namespace calc {
    class Calculator {
    private:
        double a;
        double b;
    public:
        Calculator(const double&, const double&);
        virtual ~Calculator();
        double calculate(const double&) const;
    };

    double calculate(const double& x, const double& a, const double& b);

    bool calculate(const double& x, const double& a, const double& b, double& result);

}

#include "strophoid.h"

namespace Prog2 {
    Strophoid::Strophoid() {
        a = 1;
    }

    Strophoid::Strophoid(double a) {
        this->a = a;
    }

    Strophoid& Strophoid::setA(double a) {
        this->a = a;
        return *this;
    }

    double Strophoid::function(double x) const {
        if (std::abs(x) < -a || std::abs(x) >= a)
            throw std::domain_error("Illegal argument x!");
        return std::abs(x * sqrt((a + x) / (a - x)));
    }

    double Strophoid::distance(double phi) const {
        double alpha = 180 * phi / M_PI;
        return std::abs(a * cos(2 * alpha) / cos(alpha));
    }
}

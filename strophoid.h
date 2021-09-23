#ifndef STROPHOID_STROPHOID_H
#define STROPHOID_STROPHOID_H
#include <cmath>
#include <stdexcept>

namespace Prog2 {
    class Strophoid {
    private:
        double a;
    public:
        Strophoid();
        Strophoid(double a);
        double getA() const { return a; };
        Strophoid& setA(double a);
        double function(double x) const;
        double distance(double phi) const;
        double radius() const { return a * sqrt(2);}
        double loop() const { return a*a * (2 - M_PI/2); }
        double square() const { return a*a * (2 + M_PI/2); }
        double volume() const { return a*a*a * M_PI * (2*log(2) - 4.0/3); }
    };
}

#endif //STROPHOID_STROPHOID_H

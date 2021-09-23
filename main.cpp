#include <iostream>
#include "strophoid.h"

int main() {
    Prog2::Strophoid ptr(3);

    std::cout << "AB: -> " << ptr.getA() << std::endl;
    std::cout << "|y| = " << ptr.function(0.121) << std::endl;
    std::cout << "Distance = " << ptr.distance(0.323) << std::endl;
    std::cout << "Radius = " << ptr.radius() << std::endl;
    std::cout << "Loop = " << ptr.loop() << std::endl;
    std::cout << "Square = " << ptr.square() << std::endl;
    std::cout << "Volume = " << ptr.volume() << std::endl;
    return 0;
}

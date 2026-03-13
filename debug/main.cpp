#include <iostream>

struct A { int x = 42; };

struct B : virtual A {};
struct C : virtual A {};
struct D : B, C {};

int main() {
    D d;

    A* a_from_b = static_cast<B*>(&d);
    A* a_from_c = static_cast<C*>(&d);

    std::cout << a_from_b << std::endl;
    std::cout << a_from_c << std::endl;
}
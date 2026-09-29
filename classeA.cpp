#include <iostream>
#include "classeA.h"

A::A() {
    std::cout<<"A::A() Constructeur par defaut de la classe A"<<std::endl;
}
A::~A() {
    std::cout<<"A::~A() destructeur initialise"<<std::endl;
}
A::A(const A&) {
    std::cout<<"A::A(const A&) Constructeur par copie"<<std::endl;
}
A::A(const B&) {
    std::cout<<"A::A(const B&) Constructeur par copie"<<std::endl;
}
A& A::operator = (const A&) {
    std::cout<<"A::operator = (const A&) operateur copier appel"<<std::endl;
    return *this;
};
A& A::operator = (const B&) {
    std::cout<<"B::operator = (const B&) operateur copier appel"<<std::endl;
    return *this;
};
A::A(A&&) {
    std::cout<<"A::A(A&&) Constructeur par couper"<<std::endl;
};
A& A::operator = (A&&) {
    std::cout<<"A::operator = (A&&) operateur couper appel"<<std::endl;
    return *this;
};
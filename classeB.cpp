#include <iostream>
#include "classeB.h"

B::B() {
    std::cout<<"B::B() Constructeur par defaut de la classe B"<<std::endl;
}
B::~B() {
    std::cout<<"B::~B() destructeur initialise"<<std::endl;
}
 B::B(const B&) {
    std::cout<<"B::B(const B&) Constructeur par copie"<<std::endl;
 }
B& B::operator = (const B&) {
    std::cout<<"B::operator = (const B&) operateur copier appel"<<std::endl;
    return *this;
};
B::B(B&&) {
    std::cout<<"B::B(B&&) Constructeur par couper"<<std::endl;
};
B& B::operator = (B&&) {
    std::cout<<"B::operator = (B&&) operateur couper appel"<<std::endl;
    return *this;
};
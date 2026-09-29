#include "classeB.h"
class A{
    double x = 0.0;
    double y = 0.0;

    public:

    A();
    ~A();
    A(const B&);
    A(const A&);
    A& operator = (const A&);
    A& operator = (const B&);
    A(A&&);
    A& operator = (A&&);
};
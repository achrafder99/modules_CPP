#include <stdio.h>

class Base {
public:
    virtual void foo() {}
};

class Derived : public Base {
public:
    void bar() {
        printf("bar\n");
    }
};

class Derived2 : public Base {
public:
    void bar() {
        printf("bar2\n");
    }
};

int main() {
    Base* basePtr = new Derived2;

    Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
    Derived2* derivedPtr2 = dynamic_cast<Derived2*>(basePtr);
    if (derivedPtr) {
        // The conversion is valid, and derivedPtr points to a Derived object.
        derivedPtr->bar();
    } else {
        derivedPtr->bar();
    }

    delete basePtr;
    return 0;
}

#include <iostream>
using namespace std;

//Single Inheritance
class Base { /* ... */ };
class Derived : public Base { /* ... */ };

//Multiple Inheritance
class Base1 { /* ... */ };
class Base2 { /* ... */ };
class Derived : public Base1, public Base2 { /* ... */ };


//Multilevel Inheritance
class Base { /* ... */ };
class Intermediate : public Base { /* ... */ };
class Derived : public Intermediate { /* ... */ };


//Hierarchical Inheritance
class Base { /* ... */ };
class Derived1 : public Base { /* ... */ };
class Derived2 : public Base { /* ... */ };

//Hybrid Inheritance
class Base { /* ... */ };
class Derived1 : public Base { /* ... */ };
class Derived2 : public Base { /* ... */ };
class Derived3 : public Derived1, public Derived2 { /* ... */ };
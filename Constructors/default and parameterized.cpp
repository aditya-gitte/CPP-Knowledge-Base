#include <iostream>
using namespace std;

class A
{
    int a, b;
};

class B
{
    int a;
    public:
    B(int i)
    {
        a=i;
    }
};


int main()
{
    A obj; //this will not give an error because the default constructor is called by default
    B obj2; // this will give an error because defualt constructor is not created when we manually create a parameterized constructor
    return 0;
}
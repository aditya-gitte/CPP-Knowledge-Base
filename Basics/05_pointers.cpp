
#include<iostream>
using namespace std;

struct rectangle
{
    int length;
    int breadth;
};



int main()
{
    //Pointer to inbuilt variables
    
    int a =10;
    int* b=&a;
    cout<<"the address of 'a' "<<&a<<endl;  //0x7ffc0311ca8c 
    cout<<"the address of 'a' "<<b<<endl;   //0x7ffc0311ca8c
    cout<<"the variable 'a' contains"<<a<<endl; //10
    cout<<"the variable a's contents can be pointed to by"<<*b<<endl;   //10
    cout<<"the address of the pointer 'b' is "<<&b<<endl;   //0x7ffc0311ca9
    *b=15;
    cout<<"the value of 'a' is now "<<a<<endl;  //15
    //pointer to pointer
    int **c=&b;
    cout<<"The address of b is"<<&b<<endl;  //0x7ffc0311ca90
    cout<<"The address of b is"<<c<<endl;   //0x7ffc0311ca90
    cout<<"The value that c points to is the value stored in b which in turn points to the value that is stored in a "<<**c<<endl;  //15
    **c=25;
    cout<<"The value inside the variable a is "<<a<<endl;   //15
    cout<<"The value inside the variable a is "<<*b<<endl;  //15
    cout<<"The value inside the variable a is "<<**c<<endl; //15
    int *d = new int();
    cout<<"The random value in heap is"<<*d<<endl;  //0


    //Pointer to structures==============================================================================================
    
    
    
    rectangle s={5,10};
    cout<<"The breadth of the rectangle is"<<s.breadth<<endl;   //5
    cout<<"The length of the rectangle is"<<s.length<<endl;    //10
    rectangle *p=&s;    //s is a variable and not a pointer and hence we cannot equate the value of *p directly equal to s but instead of declaring the variable s like we did in line 42, we declared it like rectangle *s=new rectangle; and then assigned the value of length and breadht using -> , then we would have declared s as pointer and therefore in line 47 we could have directly written rectangle *p=s
    cout<<"The breadth of the rectangle is"<<(*p).breadth<<endl;
    cout<<"The breadth of the rectangle is"<<p->breadth<<endl;



    rectangle *t=new rectangle;
    t->breadth=40;
    (*t).length=50;    // both are valid sysntaxes
    rectangle *point=t;
    cout<<"The lenght of the new rectangle is"<<point->length<<endl;
    cout<<"The breadth of the new rectangle is"<<(*point).breadth<<endl;


    
    
    

    return 0;

}


//Pointers in complex data structures


class Node
{
    public:
    int data;
    Node* nextPointer;
    Node(int data)
    {
        this->data=data;
        nextPointer=NULL;
    }


};

int main2()
{
    Node* root; // This creates just a pointer of the type of Node and does not occupy the actual space required for the node
    
    root = new Node(10); // In this new creates an object of Node and the root just points to the object
    Node* newRoot = new Node(20); // This creates a Object of node class and the pointer newRoot points to this object

    Node temp(15); // This creates an object of Node temp and this occupies space
    Node* rootPointer = &temp; // The rootPointer pointer points to temp object i.e rootPointer stores the address of the temp object

}


// Null pointer and void pointer

int main3() {
    
    // - Void pointer is a pointer which has no data type associated with it
    // - It can hold the address (point to) of any type and can be typcasted to any type

    void *ptr=nullptr;
    int* newPtr = new int;
    ptr = newPtr;
    cout << "The address of the pointer is " << ptr << endl;   //0x158e06000


    //NULL vs nullptr
    /**
     * - NULL is a preprocessor macro which is defined as 0
     * - nullptr is a keyword which is defined in C++11 and is a pointer literal
     * - nullptr is type safe and NULL is not
     * - consider a function void foo(int) and an overloaded function void foo(int*). If you call foo(NULL), the foo(int) version will be called, because NULL is an integer. But if you call foo(nullptr), the foo(int*) version will be called, because nullptr is a pointer.
     * - In general, it is recommended to use nullptr when you want to represent a null pointer, because it is type-safe and makes your intentions clear.
    **/
   return 0;

}




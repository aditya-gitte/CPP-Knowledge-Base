#include <iostream>
using namespace std;

// 1.Order of constructor call in single inheritance 
class Parent1 
{ 
	public: 
	Parent1() 
	{ 
		cout << "Inside base class" << endl; 
	} 
}; 
class Child1 : public Parent1 
{ 
	public:    
	Child1() 
	{ 
		cout << "Inside sub class" << endl; 
	} 
}; 



//2. Calling the parameterized constructor of base class in derived class constructor
class Parent2 { 
    int x; 
  
public: 
    Parent2(int i) 
    { 
        x = i; 
        cout << "Inside base class's parameterized "
                "constructor"
             << endl; 
    } 
}; 
class Child2 : public Parent2 { 
public: 
    // sub class's parameterized constructor 
    Child2(int x): Parent2(x) 
    { 
        cout << "Inside sub class's parameterized "
                "constructor"
             << endl; 
    } 
}; 

  

//3. Destrucotrs are called in reverse order of constructors
 

    






int main() { 
	

	Child1 obj1;
    //Inside base class
    //Inside sub class
	
    Child2 obj2(10); 
	return 0; 
} 

#include<iostream>
#include<deque>
using namespace std;


void initialization()
{
    //creating deque
    deque<int> d1;
    deque<int> myDeque(5, 42); //creates a deque with 5 entries all as 42 
    deque<int> myDeque2 = {5, 42}; //creates a deque with 5 and 42
}



void traversal()
{
    deque<int> d1 = {1,2,3,4,5};

    //Creating an iterator
    deque<int>::iterator it1 = d1.begin();
    auto it2 = d1.begin(); //auto datatype automatically detects the datatype in cpp

    //can be traversed using range based loops
    for( deque<int>::iterator it3 = d1.begin(); it3!=d1.end(); it3++)
    {
        cout<<*(it3);
    }
    cout<<endl;
    for(auto it4 = d1.begin(); it4!= d1.end();it4++)
    {
        cout<<*(it4);
    }
    cout<<endl;
    for( auto it5:d1) //note that it here is not a pointer, it directly contains the value of the vector element
    {
        cout<<it5;
    }          

}


void importantFunctions()
{
    deque<int> d1 = {1,2,3,4,5};
    int size = d1.size(); //5
    bool flag = d1.empty(); //returns true if empty


    //push_back and push_front
    d1.push_back(6); //1,2,3,4,5,6
    d1.push_front(0); //0,1,2,3,4,5,6
    
    //pop_back and pop_front, these functions do not return the value of the element popped
    d1.pop_back(); //0,1,2,3,4,5
    d1.pop_front(); //1,2,3,4,5

    d1.clear(); //clears the deque
}





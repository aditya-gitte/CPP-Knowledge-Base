#include<iostream>
#include<stack>
using namespace std;

/*
Stack is implemented internally as a deque.
*/

void intialization()
{
    stack<int> s1;
    stack<int> s2 = {1,2,3,4,5}; //creates a stack with 1,2,3,4,5
    stack<int> s3(s2); //creates a stack with the same elements as s2
}

void traversal()
{
    stack<int> s1 = {1,2,3,4,5};
    stack<int> s2 = s1;

    //stack does not have an iterator
    //stack can only be traversed using the top() and pop() functions
    while(!s1.empty())
    {
        cout<<s1.top();
        s1.pop();
    }
    cout<<endl;
    while(!s2.empty())
    {
        cout<<s2.top();
        s2.pop();
    }
}

void importantFunctions()
{
    stack<int> s1 = {1,2,3,4,5};
    int size = s1.size(); //5
    bool flag = s1.empty(); //returns true if empty

    s1.push(6); //1,2,3,4,5,6
    // complexity of push is O(1)

    s1.pop(); //1,2,3,4,5
    // complexity of pop is O(1)

    int t=s1.top(); //returns the top element of the stack
    // complexity of top is O(1)

}

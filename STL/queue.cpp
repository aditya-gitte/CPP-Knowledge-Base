#include <iostream>
#include <queue>
using namespace std;

/*
FIFO.Queue is implemented internally as a deque.
*/

void initialization()
{
    queue<int> q1;
    queue<int> q2 = {1,2,3,4,5}; //creates a queue with 1,2,3,4,5
    queue<int> q3(q2); //creates a queue with the same elements as q2
}

void traversal()
{
    queue<int> q1 = {1,2,3,4,5};
    queue<int> q2 = q1;

    //queue does not have an iterator
    //queue can only be traversed using the front() and pop() functions
    while(!q1.empty())
    {
        cout<<q1.front();
        q1.pop();
    }
    cout<<endl;
    while(!q2.empty())
    {
        cout<<q2.front();
        q2.pop();
    }
}

void importantFunctions()
{
    queue<int> q1 = {1,2,3,4,5};
    int size = q1.size(); //5
    bool flag = q1.empty(); //returns true if empty

    q1.push(6); //1,2,3,4,5,6
    // complexity of push is O(1)

    q1.pop(); //2,3,4,5,6
    // complexity of pop is O(1)

    int t=q1.front(); //returns the front element of the queue
    // complexity of front is O(1)
}
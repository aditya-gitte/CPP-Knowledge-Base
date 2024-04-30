#include <iostream>
#include <priority_queue>
using namespace std;

/*  
Priority Queue is built on top of max heaps. Internally it uses vector as a container.
*/


/*
The complexity for inserting an element in the priority queue is O(logn) and for deleting an element is O(logn).
If we create the priority queue and push all the elements in it, the complexity will be O(nlogn).
*/
void initialization_without_heapify()
{
    priority_queue<int> pq1; // max heap by default
    priority_queue<int, vector<int>, greater<int>> pq2; // min heap
    priority_queue<int> pq2 = {1,2,3,4,5}; //creates a priority queue with 1,2,3,4,5
    priority_queue<int> pq3(pq2); //creates a priority queue with the same elements as pq2
}


/*
When we convert a vector to priority queue, the complexity is O(n) as it uses heapify to convert the vector to a heap.
*/
void intialization_with_heapify()
{
    vector<int> v = {1,2,3,4,5};
    priority_queue<int> pq1(v.begin(), v.end()); //creates a priority queue with 1,2,3,4,5
    priority_queue<int, vector<int>, greater<int>> pq2(v.begin(), v.end()); //creates a priority queue with 5,4,3,2,1
}

void traversal()
{
    priority_queue<int> pq1 = {1,2,3,4,5};
    priority_queue<int> pq2 = pq1;

    //priority queue does not have an iterator
    //priority queue can only be traversed using the top() and pop() functions
    while(!pq1.empty())
    {
        cout<<pq1.top();
        pq1.pop();
    }
    cout<<endl;
    while(!pq2.empty())
    {
        cout<<pq2.top();
        pq2.pop();
    }
}

void basic_functions()
{
    priority_queue<int> pq1 = {1,2,3,4,5};
    int size = pq1.size(); //5
    bool flag = pq1.empty(); //returns true if empty

    pq1.push(6); //6,5,4,3,2,1
    // complexity of push is O(logn)

    pq1.pop(); //5,4,3,2,1
    // complexity of pop is O(logn)

    int t=pq1.top(); //returns the top element of the priority queue
    // complexity of top is O(1)

    int s=pq.size(); //returns the size of the priority queue
    //complexity of size is O(1)

    bool empty=pq.empty(); //returns true if the priority queue is empty
    //complexity of empty is O(1)
}



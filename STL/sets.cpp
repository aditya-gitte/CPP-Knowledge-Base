#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;


/*
Unordered set
- implemented internally as a hash table.
- The complexity of insertion, deletion, and searching is O(1) on average and O(n) in the worst case as it uses hash tables internally.
*/

void initialization_unordered_set()
{
    unordered_set<int> s1; //empty set
    unordered_set<int> s2 = {1,2,3,4,5}; //creates a set with 1,2,3,4,5
    unordered_set<int> s3(s2); //creates a set with the same elements as s2
}

void traversal_unordered_set()
{
    unordered_set<int> s1 = {1,2,3,4,5};
    unordered_set<int> s2 = s1;

    //unordered set has an iterator
    //unordered set can be traversed using the iterator
    for(auto it=s1.begin(); it!=s1.end(); it++)
    {
        cout<<*it;
    }
    cout<<endl;
    for(auto it=s2.begin(); it!=s2.end(); it++)
    {
        cout<<*it;
    }
    for(auto it:s2)
    {
        cout<<it;
    }
}

void basic_functions_unordered_set()
{
    unordered_set<int> s1 = {1,2,3,4,5};
    int size = s1.size(); //5
    bool flag = s1.empty(); //returns true if empty

    s1.insert(6); //1,2,3,4,5,6
    // complexity of insert is O(1)

    s1.erase(6); //1,2,3,4,5
    // complexity of erase is O(1)
    // if we erase an element that is not present, nothing will happen
    
    auto it = s1.find(3); //returns an iterator to the element 3
    // complexity of find is O(1)
    s1.erase(it); //1,2,4,5. Erase also works with iterators
    
    auto it2 = s1.find(6); // if the element is not found in the set, find returns an iterator to the end of the set

    s1.clear(); //removes all elements
    // complexity of clear is O(n)
}


/*
- ordered set is implemented internally as a balanced binary search tree.
- The complexity of insertion, deletion, and searching is O(logn) as it uses balanced binary search trees internally.
*/

void initialization()
{
    set<int> s1; //empty set
    set<int> s2 = {1,2,3,4,5}; //creates a set with 1,2,3,4,5
    set<int> s3(s2); //creates a set with the same elements as s2
}

void traversal()
{
    set<int> s1 = {1,2,3,4,5};
    set<int> s2 = s1;

    //set has an iterator
    //set can be traversed using the iterator
    for(auto it=s1.begin(); it!=s1.end(); it++)
    {
        cout<<*it;
    }
    cout<<endl;
    for(auto it=s2.begin(); it!=s2.end(); it++)
    {
        cout<<*it;
    }
    for(auto it:s2)
    {
        cout<<it;
    }
}

//All the functions are the same as unordered set
void basic_functions()
{
    set<int> s1 = {1,2,3,4,5};
    int size = s1.size(); //5
    bool flag = s1.empty(); //returns true if empty

    s1.insert(6); //1,2,3,4,5,6
    // complexity of insert is O(logn)

    s1.erase(6); //1,2,3,4,5
    // complexity of erase is O(logn)
    // if we erase an element that is not present, nothing will happen
    
    auto it = s1.find(3); //returns an iterator to the element 3
    // complexity of find is O(logn)
    s1.erase(it); //1,2,4,5. Erase also works with iterators
    
    auto it2 = s1.find(6); // if the element is not found in the set, find returns an iterator to the end of the set

    s1.clear(); //removes all elements
    // complexity of clear is O(n)
}
#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

/*
Unordered map
- implemented internally as a hash table.
- The complexity of insertion, deletion, and searching is O(1) on average and O(n) in the worst case as it uses hash tables internally.
*/

void initialization_unordered_map()
{
    unordered_map<int, int> m1; //empty map
    unordered_map<int, int> m2 = {{1,2}, {2,3}, {3,4}}; //creates a map with 1->2, 2->3, 3->4
    unordered_map<int, int> m3(m2); //creates a map with the same elements as m2
}

void traversal_unordered_map()
{
    unordered_map<int, int> m1 = {{1,2}, {2,3}, {3,4}};
    unordered_map<int, int> m2 = m1;

    //unordered map has an iterator
    //unordered map can be traversed using the iterator
    for(auto it=m1.begin(); it!=m1.end(); it++)
    {
        cout<<it->first<<" "<<it->second;
    }
    cout<<endl;
    for(auto it:m2)
    {
        cout<<it.first<<" "<<it.second;
    }
}

void basic_functions_unordered_map()
{
    unordered_map<int, int> m1 = {{1,2}, {2,3}, {3,4}};
    int size = m1.size(); //3
    bool flag = m1.empty(); //returns true if empty

    m1[4] = 5; //1->2, 2->3, 3->4, 4->5
    // complexity of insert is O(1)
    
    pair<int, int> p = make_pair(5, 6);
    m1.insert(p); //1->2, 2->3, 3->4, 4->5, 5->6

    m1.erase(4); //1->2, 2->3, 3->4
    // complexity of erase is O(1)
    // if we erase an element that is not present, nothing will happen

    auto it = m1.find(3); //returns an iterator to the element 3
    // complexity of find is O(1)
    m1.erase(it); //1->2, 2->3. Erase also works with iterators

    auto it2 = m1.find(6); // if the element is not found in the map, find returns an iterator to the end of the map
}

/*
Map
- implemented internally as a balanced binary search tree.
- The complexity of insertion, deletion, and searching is O(logn) as it uses balanced binary search trees internally.
*/

void initialization_map()
{
    map<int, int> m1; //empty map
    map<int, int> m2 = {{1,2}, {2,3}, {3,4}}; //creates a map with 1->2, 2->3, 3->4
    map<int, int> m3(m2); //creates a map with the same elements as m2
}

void traversal_map()
{
    map<int, int> m1 = {{1,2}, {2,3}, {3,4}};
    map<int, int> m2 = m1;

    //map has an iterator
    //map can be traversed using the iterator
    for(auto it=m1.begin(); it!=m1.end(); it++)
    {
        cout<<it->first<<" "<<it->second;
    }
    cout<<endl;
    for(auto it:m2)
    {
        cout<<it.first<<" "<<it.second;
    }
}

void basic_functions_map()
{
    map<int, int> m1 = {{1,2}, {2,3}, {3,4}};
    int size = m1.size(); //3
    bool flag = m1.empty(); //returns true if empty

    m1[4] = 5; //1->2, 2->3, 3->4, 4->5
    // complexity of insert is O(logn)
    
    pair<int, int> p = make_pair(5, 6);
    m1.insert(p); //1->2, 2->3, 3->4, 4->5, 5->6

    m1.erase(4); //1->2, 2->3, 3->4
    // complexity of erase is O(logn)
    // if we erase an element that is not present, nothing will happen

    auto it = m1.find(3); //returns an iterator to the element 3
    // complexity of find is O(logn)
    m1.erase(it); //1->2, 2->3. Erase also works with iterators

    auto it2 = m1.find(6); // if the element is not found in the map, find returns an iterator to the end of the map
}
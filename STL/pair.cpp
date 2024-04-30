#include <iostream>
using namespace std;

int main()
{
    //Intialization of pair
    pair<int, int> p1;
    pair<int, int> p2 = make_pair(1, 2);
    pair<int, int> p3(p2);

    //accesing the elements of an pair
    int a = p2.first; // a is 1
    int b = p2.second; // b is 2

    //comaaring two pairs
    //compared using the comparison operators (==, !=, <, <=, >, >=). The comparison is done lexicographically, i.e., first compares the first member of the pairs, and if they are equivalent, it compares the second member.

    pair<int, int> p4 = make_pair(1, 3);
    bool isEqual = (p2 == p4); // isEqual is false
    
}
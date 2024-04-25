#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void creattionAndTraversal()
{
    //Creating Vectors
    vector<int> v1;
    vector<char> v2;
    vector<string> v3;
    vector<int> v(5); //creates a vector of size 5, this size can be changed later dynamically
    vector<int> v(5,100); //creates a vector of size 5 and fills it with 100
    vector<int> v{1,3,4,6}; // creates a vector of 1,3,4,6
    //for creating a 2D vector with predefined size use
    vector<vector<int>> v=(m,vector<int> (n,0));
    //this would fill all the matrix with 0s;


    //Creating an iterator
    vector<int>::iterator it = v.begin();
    auto it = v.begin(); //auto datatype automatically detects the datatype in cpp

    
    
    //Vectors can be traversed using range based loops
    for( vector<int>::iterator it = v.begin(); it!=v.end(); it++)
    {
        cout<<*(it);
    }
    for(auto it = v.begin(); it!= v.end();it++)
    {
        cout<<*(it);
    }

    for( auto it:v) //note that it here is not a pointer, it directly contains the value of the vector element
    {
        cout<<it;
    }          


}


void importantVectorFunctions()
{
    vector<int> v{1,2,3,4,5};
    
    /*
    being and end functions
    */
    auto itr = v.begin();
    itr = v.end(); //points to the location after the end of the vector, so the get the last element of the vector you have to do it--
    //to access the elemets use *(itr) as iterator is just a pointer
    cout<<*(itr+2);

    
    /*
    size function
    */
    int size = v.size();
    int capacity = v.capacity(); //returns the capacity of the vector
    bool isEmpty = v.empty(); //returns true if the vector is empty


    v.push_back(6); //adds 6 to the end of the vector
    v.pop_back(); //removes the last element of the vector, this doesn't return the element


    v.insert(v.begin()+2,8); //inserts 8 at the 2nd index


    /*
    Finding an element inside of the vector
    */
    auto it = find(v.begin(),v.end(),3); //returns the iterator pointing to the element 3   
    //if the element is not found then it returns the iterator pointing to the end of the vector


    /*
    Erasing an element from the array
    */
    auto it=find(v.begin(),v.end(),2);
    if(it!=v.end())
    {
        v.erase(it);
    }

    v.clear(); //clears the vector
    v.swap(v1); //swaps the elements of the two vectors

}
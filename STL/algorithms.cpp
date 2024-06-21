#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

void STL_sort()
{
    //By default, it uses ==QuickSort==, but if QuickSort is doing unfair partitioning and taking more than O(NlogN) time, it switches to HeapSort. When the array size becomes very small, it switches to InsertionSort.

    vector<int> v={7,1,3,5,2,6,4};
    sort(v.begin(),v.end()); // sorts in ascending order by default
    sort(v.begin(), v.end(), greater<int>()); // sorts in descending order

    bool customSort(int a, int b) {
        return (a % 3) < (b % 3);
    }

    sort(v.begin(), v.end(), customSort);


}

int main()
{
    vector <int> c = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    sort(c.begin(), c.end(), greater<int>()); // sorts in descending order
    for (auto it:c )
    {
        cout<<it<<" ";
    }
    return 0;
}
#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool myCompare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
int main()
{
    int arr[] = {10, 16, 7, 14, 5, 3, 12, 9};
    vector<pair<int, int>> v;
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        v.push_back(make_pair(arr[i], i));//here make_pair consist first as arr[i] and second as i
    }
    sort(v.begin(), v.end(), myCompare);
    for (int i = 0; i < v.size(); i++)
    {
        arr[v[i].second] = i;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
//output index=4 7 2 6 1 0 5 3 yaha 0 pe input ki sbse chhoti value hogi fir 1 pe usse badi...
//       index=0 1 2 3 4 5 6 7 

// input=10, 16, 7, 14, 5, 3, 12, 9
// index= 0 , 1 ,2  ,3 ,4 ,5  ,6 ,7


#include <bits/stdc++.h>
#include <vector>

using namespace std;

bool myCompare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}

int main()
{
    //   syntax
    // vector<int> data_type(size,value)
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    } // 1 2 3

    // 2D vector
    // initialized a grid with -1
    // int n, m;
    // vector<vector<int>> grid(n, vector<int>(m, -1));

    // iterator
    vector<int>::iterator it; // we declares it as pointer here

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    } // 1 2 3

    v.pop_back(); // 1 2

    vector<int> v2(3, 50);

    // swap
    swap(v, v2);

    // for each loop
    for (auto element : v)
    {
        cout << element << endl;
    } // 1 2 3

    for (auto element : v2)
    {
        cout << element << endl;
    }

    // sort()
    sort(v.begin(), v.end());

    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum;

    // max_element() returns iterator to the max element
    int mx = *max_element(v.begin(), v.end());

    // max_element() returns iterator to the max element
    int mn = *min_element(v.begin(), v.end());

    // To convert the vector into a prefix sum vector(Quite useful)
    // convert the vector v into prefix sum vector
    partial_sum(v.begin(), v.end(), v.begin());

    // pair
    pair<int, char> p;
    p.first = 3;
    p.second = 'f';
    return 0;
}

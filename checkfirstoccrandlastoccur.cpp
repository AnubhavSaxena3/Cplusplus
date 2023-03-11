#include <iostream>
using namespace std;
// first and last occurance in number in array
int firstoccur(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return firstoccur(arr, n, i + 1, key);
}
int lastoccur(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }

    int restArray = lastoccur(arr, n, i + 1, key);
    if (restArray != -1)
    {
        return restArray;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}

int main()
{
    int arr[] = {0, 3, 2, 3, 4, 6, 2, 3, 7};
    cout << firstoccur(arr, 8, 0, 2)<<endl;
    cout << lastoccur(arr, 8, 0, 2);
    return 0;
}
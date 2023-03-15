// Given an array, transform the array such that
// arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= .....
#include <iostream>
using namespace std;
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void WaveSort(int arr[], int n)
{
    for (int i = 1; i < n; i += 2)//we have to start from i=1 index not 0 for wavesort
    {
        if (arr[i] > arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
        }
        if (arr[i] > arr[i + 1] && i <= n - 2)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int arr[] = {1, 3, 4, 7, 5, 6, 2};
    WaveSort(arr, 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
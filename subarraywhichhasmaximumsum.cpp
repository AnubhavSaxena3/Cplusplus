// this is only for print subarray
// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             for (int k = i; k <= j; k++)
//             {
//                 cout << arr[k] << " ";
//             }
//             cout << endl;
//         }
//     }
//     return 0;
// }

// here is the main problem (O(n3))
// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int maxSum = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {

//         for (int j = i; j < n; j++)
//         {int sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 sum += arr[k];
//             }
//             maxSum = max(maxSum, sum);
//         }
//     }
//     cout << maxSum << endl;
//     return 0;
// }

// Cumulative sum approach for better complexity(O(n2))
// #include <iostream>
// #include <climits>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int cumSum[n + 1];
//     cumSum[0] = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         cumSum[i] = cumSum[i - 1] + arr[i - 1];
//     }
//     int maxSum = INT_MIN;
//     for (int i = 0; i <= n; i++)
//     {
//         int sum = 0;
//         maxSum = max(maxSum, cumSum[i]);
//         for (int j = 0; j < i; j++)
//         {
//             sum = cumSum[i] - cumSum[j - 1];
//             maxSum = max(sum, maxSum);
//         }
//     }
//     cout << maxSum << endl;
// }

// for best complexity we used kadane's algo (O(N))
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int currentSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }
    cout<<maxSum<<endl;
    return 0;
}
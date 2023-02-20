#include <iostream>
#include <algorithm>
using namespace std;

int count_pairs_with_difference(int arr[], int n, int k)
{
    sort(arr, arr + n); // sort the array
    int count = 0;
    int i = 0, j = 1;
    while (j < n)
    {
        int diff = arr[j] - arr[i];
        if (diff == k)
        {
            count++;
            i++;
            j++;
        }
        else if (diff < k)
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> k;
        int count = count_pairs_with_difference(arr, n, k);
        cout << count << endl;
    }
    return 0;
}

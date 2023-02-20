#include <iostream>
using namespace std;

bool find_sum_indices(int arr[], int n)
{
    for (int k = n - 1; k >= 2; k--)
    {
        int i = 0, j = k - 1;
        while (i < j)
        {
            if (arr[i] + arr[j] == arr[k])
            {
                cout << i << " " << j << " " << k << endl;
                return true;
            }
            else if (arr[i] + arr[j] < arr[k])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (!find_sum_indices(arr, n))
    {
        cout << "No such indices found" << endl;
    }

    return 0;
}

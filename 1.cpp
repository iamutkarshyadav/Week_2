#include <iostream>
using namespace std;

int find_first_occurrence(int arr[], int n, int key)
{
    int left = 0, right = n - 1, first = -1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
        {
            first = mid;
            right = mid - 1;
        }
        else if (arr[mid] > key)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return first;
}

int find_last_occurrence(int arr[], int n, int key)
{
    int left = 0, right = n - 1, last = -1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
        {
            last = mid;
            left = mid + 1;
        }
        else if (arr[mid] > key)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return last;
}

void find_key(int arr[], int n, int key)
{
    int first = find_first_occurrence(arr, n, key);
    if (first == -1)
    {
        cout << "Key not present" << endl;
        return;
    }
    int last = find_last_occurrence(arr, n, key);
    cout << key << " " << last - first + 1 << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, key;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> key;

        find_key(arr, n, key);
    }

    return 0;
}

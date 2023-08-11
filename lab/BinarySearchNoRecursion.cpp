#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Element found at index 'mid'
        } else if (arr[mid] < target) {
            left = mid + 1; // Target is in the right half
        } else {
            right = mid - 1; // Target is in the left half
        }
    }

    return -1; // Element not found in the array
}

int main() {
    int n;
    cout << "Enter the number of elements in the sorted array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the sorted elements of the array:\n";
    for (int i = 0; i<n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the element to search for: ";
    cin >> target;

    int index = binarySearch(arr, n, target);

    if (index != -1) {
        cout << "Element found at index " << index << endl;
    } else {
        cout << "Element not found in the array.\n";
    }

    return 0;
}
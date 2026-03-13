#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Recursive Slow Sort function
void slowSort(vector<int>& arr, int i, int j) {
    if (i >= j) return;  // base case

    int m = (i + j) / 2;  // middle index

    // Sort left half
    slowSort(arr, i, m);

    // Sort right half
    slowSort(arr, m + 1, j);

    // Compare middle and last element
    if (arr[j] < arr[m]) {
        swap(arr[j], arr[m]);
    }

    // Sort again, excluding last element
    slowSort(arr, i, j - 1);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Show the array elements before it is sorted
    cout << "\nOriginal array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    //Here it  Perform Slow Sort
    slowSort(arr, 0, n - 1);

    // Show array after sorting
    cout << "After sorting (ascending): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

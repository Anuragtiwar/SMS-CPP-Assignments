//To implement selection sort
#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; ++i) {
        // Assume the minimum element is at the current position
        int minIndex = i;

        // Find the minimum element in the unsorted sublist
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int size;

    // Get the size of the array from the user
    cout << "Enter the size of the array: ";
    cin >> size;

    // Get array elements from the user
    vector<int> arrayToSort(size);
    cout << "Enter " << size << " elements for the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arrayToSort[i];
    }

    // Perform Selection Sort
    selectionSort(arrayToSort);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int num : arrayToSort) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

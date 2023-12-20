// To implement bubble sort. 
#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap them if they are in the wrong order
                swap(arr[j], arr[j + 1]);
            }
        }
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

    // Perform Bubble Sort
    bubbleSort(arrayToSort);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int num : arrayToSort) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

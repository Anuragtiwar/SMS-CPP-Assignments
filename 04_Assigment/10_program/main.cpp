//To implement insertion sort. 
#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        // Move elements greater than key to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }

        // Place the key at its correct position in the sorted sublist
        arr[j + 1] = key;
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

    // Perform Insertion Sort
    insertionSort(arrayToSort);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int num : arrayToSort) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

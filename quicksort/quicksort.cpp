#include<iostream>
using namespace std;

// Partition function to arrange elements around the pivot
int parition(int arr[], int st, int end) {
    // Set the pivot element as the middle element of the array
    int pivot = arr[(st + end) / 2];
    int count = 0;

    // Count how many elements are less than or equal to the pivot (excluding the pivot itself)
    for (int i = st + 1; i <= end; i++) {
        // Skip the pivot element in this iteration
        if (i == (st + end) / 2) continue;
        // Count elements less than or equal to pivot
        if (arr[i] <= pivot) count++; 
    }

    // Calculate the final position (index) of the pivot in the sorted array
    int pivotidx = count + st;

    // Swap the pivot element with the element at its final position
    swap(arr[(st + end) / 2], arr[pivotidx]);

    // Initialize pointers for arranging elements around the pivot
    int i = st;
    int j = end;

    // Arrange elements so that all elements less than the pivot are on the left,
    // and all elements greater than the pivot are on the right
    while (i < pivotidx && j > pivotidx) {
        // Move 'i' to the right as long as elements are less than or equal to the pivot
        if (arr[i] <= pivot) i++;
        
        // Move 'j' to the left as long as elements are greater than the pivot
        if (arr[j] > pivot) j--;

        // If an element larger than the pivot is found on the left side and
        // an element smaller than the pivot is found on the right side, swap them
        if (arr[i] > pivot && arr[j] <= pivot) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
   
    // Return the final index of the pivot
    return pivotidx;
}

// Quick Sort function to sort the array recursively
void quicksort(int arr[], int st, int end) {
    // Base condition: if the subarray has 1 or 0 elements, it is already sorted
    if (st >= end) return;

    // Partition the array and get the pivot index
    int pi = parition(arr, st, end);

    // Recursively sort the left subarray (elements before the pivot)
    quicksort(arr, st, pi - 1);

    // Recursively sort the right subarray (elements after the pivot)
    quicksort(arr, pi + 1, end);
}

int main() {
    int n;
    
    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    
    // Input the values of the array
    cout << "Enter the values of the array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Call quicksort to sort the array
    quicksort(arr, 0, n - 1);
    
    // Output the sorted array
    cout << "The output is: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}

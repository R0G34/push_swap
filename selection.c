#include <stdio.h>

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void selection_sort(int arr[], int n) {

    int i, j, min_index;

    // Traverse through all array elements

    for (i = 0; i < n - 1; i++) {

        // Find the minimum element in the unsorted part of the array

        min_index = i;

        for (j = i + 1; j < n; j++) {

            if (arr[j] < arr[min_index]) {

                min_index = j;

            }

        }

        // Swap the found minimum element with the first element

        int temp = arr[i];

        arr[i] = arr[min_index];

        arr[min_index] = temp;

    }

}

int main() {

    int my_array[] = {64, 25, 12, 22, 11};

	printf("Array before sort: \n");
	printArray(my_array, 5);
    int n = sizeof(my_array) / sizeof(my_array[0]);

    // Perform selection sort

    selection_sort(my_array, n);

    // Print the sorted array

    printf("\nSorted array: \n");

    printArray(my_array, n);

    printf("\n");

    return 0;

}
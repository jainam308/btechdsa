#include <stdio.h>

// Declare arr2 globally or pass it as an argument
int arr2[100]; // assuming the array size won't exceed 100

void merge(int arr[], int lb, int mid, int ub) {
    int i = lb;
    int j = mid + 1;
    int k = lb;

    while (i <= mid && j <= ub) {
        if (arr[i] < arr[j]) {
            arr2[k] = arr[i];
            i++;
        } else {
            arr2[k] = arr[j];
            j++;
        }
        k++;
    }
    if (i>mid){
          while (j <= ub) {
        arr2[k] = arr[j];
        j++;
        k++;
    }

    }
    else
    {
        while (i <= mid) {
        arr2[k] = arr[i];
        i++;
        k++;
    }

    }
    
    
  
    for (k = lb; k <= ub; k++) {
        arr[k] = arr2[k];
    }
}

void mergesort(int arr[], int lb, int ub) {
    if (lb < ub) {
        int mid = (lb + ub) / 2;
        mergesort(arr, lb, mid);
        mergesort(arr, mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
}

int main() {
    int n = 5;
    int arr[n];
    int lb = 0, ub = n - 1;

    printf("Enter elements of array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    mergesort(arr, lb, ub);

    printf("\nSorted elements of the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

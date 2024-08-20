#include <stdio.h>

#define ROWS 3
#define COLS 3
#define MAX 100

void findDuplicates(int arr[][COLS], int rows, int cols) {
    int hash[MAX] = {0}; // Initialize hash table with zeros

    printf("Duplicate elements in the array:\n");

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            if(hash[arr[i][j]] == 1) {
                printf("%d ", arr[i][j]);
            } else {
                hash[arr[i][j]]++;
            }
        }
    }
}

int main() {
    int array[ROWS][COLS] = {{1, 2, 3},
                             {4, 5, 6},
                             {1, 2, 3}};

    findDuplicates(array, ROWS, COLS);

    return 0;
}
#include <stdio.h>

int main() {
    FILE *filePointer;

    // Open file in write mode
    filePointer = fopen("data.txt", "w");

    // Check if file opened successfully
    if (filePointer == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Write to file
    fprintf(filePointer, "Hello, World!\n");

    // Close the file
    fclose(filePointer);

    printf("Data written to file successfully.\n");

    return 0;
}

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

  int size = argc - 1;
  int data[size];
  
  // Check for correct usage.
  if (argc < 2) {
    printf("Usage: %s <element 1> <element 2> ... <element N>", argv[0]);
  }

  // Parse command line arguments.
  for (int i = 0; i < size; i++) {
    data[i] = (int)atoi(argv[i + 1]);
  }

  for (int i = 1; i < size; i++) {
    int key = data[i];
    int j = i - 1;
    // Search for the correct position in the subarray.
    while (j >= 0 && data[j] > key) {
      data[j + 1] = data[j];
      j = j - 1;
    }
    // Insert the key into the correct position in the subarray.
    data[j + 1] = key;
  }

  // Display correct order.
  for (int i = 0; i < size; i++) {
    printf("%d ", data[i]);
  } printf("\n");
}
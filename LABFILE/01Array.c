#include <stdio.h>

void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertElement(int array[], int size, int element, int index) {
  for (int i = size - 1; i >= index; i--) {
    array[i + 1] = array[i];
  }
  array[index] = element;
  size++;
}

void deleteElement(int array[], int size, int index) {
  for (int i = index; i < size - 1; i++) {
    array[i] = array[i + 1];
  }
  size--;
}

int searchElement(int array[], int size, int element) {
  for (int i = 0; i < size; i++) {
    if (array[i] == element) {
      return i;
    }
  }
  return -1;
}

int main() {
  int array[] = {1, 2, 3, 4, 5};
  int size = sizeof(array) / sizeof(array[0]);

  printArray(array, size);

  insertElement(array, size, 6, 2);
  printArray(array, size);

  deleteElement(array, size, 2);
  printArray(array, size);

  int index = searchElement(array, size, 6);
  if (index != -1) {
    printf("Element found at index %d\n", index);
  } else {
    printf("Element not found\n");
  }

  return 0;
}

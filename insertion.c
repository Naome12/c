#include <stdio.h>
#include <string.h>
    // function to print the elements of the array
void display(int arr[], int n) { 
int i;    
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
// function to sort the elements of the array
void insertionSort(int arr[], int n) {
	int i;
  for ( i = 1; i < n; i++) {
    int insert = arr[i];
    int j = i - 1;

    
    while (insert < arr[j] && j >= 0) {
      arr[j + 1] = arr[j];
      --j;
    }
    arr[j + 1] = insert;
  }
}
// main function or driver function
 int main() {
  int arr[] = {9, 5, 1, 4, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  printf("Elements before sorting:\n");
  display(arr, n);
  insertionSort(arr, n);
  printf("Elements after sorting:\n");
  display(arr, n);



//char *var = "string";
//printf("Value: %s\n", var);
//printf("Address: %p\n", &var); //Notice, the ampersand(&) before var. return 0;

}

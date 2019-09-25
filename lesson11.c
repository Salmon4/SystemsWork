#include <stdio.h>
#include <stdlib.h>
double avg(int *arr, int size) {
  double sum = 0;
  int counter = 0;
  int i;
  for (i = 0; i < size; i ++){
    counter++;
    sum += arr[i];
  }
  return sum/counter;
}

void copy(int *arr1, int *arr2, int size){
  int i;
  for (i = 0; i < size; i++){
    *(arr2 + i) = *(arr1 + i);
  }
}

int lengthOfWord(char *word){
  int counter = 0;
  while (word[counter] != '\0'){
    counter++;
  }
  return counter;
}

#include <stdio.h>
#include <stdlib.h>
int avg(int arr[], int size) {
  int sum = 0;
  int counter = 0;
  int i;
  for (i = 0; i < size; i ++){
    counter++;
    sum += arr[i];
  }
  return sum/counter;
}

int copy(int *arr1, int *arr2, int size){
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



int main(){
  int a1[] = {2,3,4,5,6};
  int a2[] = {};
  printf("Problem 1 is: %d\n", avg(a1,5));
  copy(a1,a2,5);
  int i;
  for (i = 0; i < 5; i++){
    printf("%d ", a1[i]);
  }
  printf("\n");
  int j;
  for (j = 0; j < 5; j++){
    printf("%d ", a2[j]);
  }

  printf("\n");
  printf("The length of WORD is: %d", lengthOfWord("WORD"));
}

#include <stdio.h>
#include <stdlib.h>
int avg(int arr[]) {
  int sum = 0;
  int counter = 0;
  int i;
  for (i = 0; i < sizeof(arr); i ++){
    counter++;
    sum += arr[i];
  }
  return sum/counter;
}

int main(){
  int a1[] = {1,2,3,4,5};
  avg(a1);
  printf("Problem 1 is: %d", avg(a1));
}

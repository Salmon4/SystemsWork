int main(){
  int a1[] = {10,9,8,7,6};
  int a2[] = {};
  printf("Problem 1 is: %f\n", avg(a1,5));
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
  printf("The length of APPLE is: %d", lengthOfWord("APPLE"));
}

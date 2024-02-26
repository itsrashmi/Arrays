#include <stdio.h>
#include <conio.h>


void create(int size){
  int arr [size];
  printf("Enter the Value of Array ");
  for(int i = 0; i< size; i++){
    arr[0] = scanf("%d",arr[i]);
  }
  printf("The Value are : ");
  for(int i = 0; i < sizel i++){
    printf("%d\n",arr[i]);
  }
}
int main(){

  create(4);
  return 0;
}

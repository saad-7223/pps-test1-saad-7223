#include<stdio.h>
//using pass by reference
int input(int *a,int *b){
  printf("Enter 2 numbers : \n");
  scanf("%d \n %d",a,b);
}
int add(int a,int b,int *sum){
  *sum = a+b;
}
int output(int a,int b,int c){
  printf("Sum of %d + %d = %d",a,b,c);
}
int main()
{
  int x,y,z;
  input(&x,&y);
  add(x,y,&z);
  output(x,y,z);
  return 0;
}
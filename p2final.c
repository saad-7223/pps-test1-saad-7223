#include<stdio.h>
int input(){
  int n;
  printf("Enter a number = ");
  scanf("%d",&n);
  return n;
}
int add(int a,int b){
  int sum =a+b;
  return sum;
}
int output(int a,int b,int sum){
  printf("sum of %d + %d = %d",a,b,sum);
}
int main(void){
  int a,b,sum;
  a=input();
  b=input();
  sum=add(a,b);
  output(a,b,sum);
}
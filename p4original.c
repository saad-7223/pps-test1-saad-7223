// using pass by value
#include<stdio.h>
int input(int a,int b,int c){
  printf("Enter 3 numbers : \n");
  scanf("%d%d%d",&a,&b,&c);
}
int cmp(int a,int b,int c){
  //int a;int b;int c;
  if (a>b && a>c)
    printf("%d is largest",a);
  else if (b>a && b>c)
    printf("%d is largest",b);
  else
    printf("%d is largest",c);
  return 0;      
}
int main(){
  int x,y,z;
  input(x,y,z);
  cmp(x,y,z);
  return 0;
}
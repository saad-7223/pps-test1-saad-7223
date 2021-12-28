// comparing three numbers using pass by reference
#include<stdio.h>
void input(int *a,int *b,int *c){
    printf("Enter 3 numbers : \n");
    scanf("%d%d%d",a,b,c);
}
void cmp(int a,int b,int c,int *large){
    if (a>b && a>c){
        *large =  a;
        printf("The largest is : %d",*large);
    }
    else if (b>a && b>c){
        *large =  b;
        printf("The largest is : %d",*large);
    }
    else{
        *large =  c;
        printf("The largest is : %d",*large);
    }
}
int main(){
  int x,y,z,large;
  input(&x,&y,&z);
  cmp(x,y,z,&large);
  return 0;
}
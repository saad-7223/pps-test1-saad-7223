#include<stdio.h>
int input_n(){
  int n;
  printf("Enter the number you want sum of : \n");
  scanf("%d",&n);
  return n;
}
int sum_n(int n){
  int sum =0;int r;
  r=n;
  while(r>0){
    sum = sum + r;               /* program of sum of n numbers using 3 functions blocks */
    r--;
  }                                           
  return sum;
}
void output(int n,int sum){
  printf("Sum of %d numbers = %d",n,sum);
}
int main(){
  int a,s;
  a = input_n();
  s = sum_n(a);
  output(a,s);
  return 0;
}
/*#include<stdio.h>
int main(){
  int r;int n;int sum;
  printf("Enter the number you want sum of : \n");
  scanf("%d",&n);
  sum = 0;
  r=n;                                    **  the same above function but in the main      while(r>0){                                 blocks without sub blocks **
    sum = sum + r;
    r--;
  }
  printf("sum of %d numbers = %d",n,sum);
  return 0;
}*/
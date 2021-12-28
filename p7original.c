#include<stdio.h>
int input_array_size(){
   int n;
   printf("Enter the array size : \n");
   scanf("%d",&n);
   return n; 
}
void input_array(int n,int a[n]){
  int i=n;
  printf("Enter %d positive integers :",n);
  for(n=0;n<i;n++){
    scanf("%d",&a[n]);
  }
}
int sum_n_arrays(int n,int a[n]){
  int sum =0;
  int i=n;
  for(n=0;n<i;n++){
    sum += a[n];
  }
  return sum;
}
void out_put(int n,int a[n],int sum){
  int i=n;
  for(n=0;n<(i-1);n++){
    printf("%d+",a[n]);
  }
  printf("%d=%d",a[(i-1)],sum);
}
int main(){
  int n,sum,a[1000];
  n=input_array_size();
  input_array(n,a);
  sum=sum_n_arrays(n,a);
  out_put(n,a,sum);
  return 0;
}
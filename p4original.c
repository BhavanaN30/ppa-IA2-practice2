#include<stdio.h>
int input_array_size()
{
  int n;
printf("enter the array size");
scanf("%d",&n);
return n;
}
void input_array(int n,int a[n])
{
  int i;
  printf("enter the elements of array");
  for(i=1;i<n/2;i++){
    scanf("%d",&a[i]);
  }
}
int sum_composite_numbers(int n,int a[n])
{
  int i,sum=0;
  for(i=1;i<n/2;i++){
    sum+=a[i];
  }
  return sum;
}
void output(int n,int a[n],int sum)\
{
  int i;
  printf("the sum of array elements");
  for(i=0;i<n/2-1;i++){
    printf("%d+"),a[i]);}
    printf("%d is %d",a[n/2-1],sum);
  }
  int main()
  {
    int n,sum;
    n=input_array_size();
    int a[n];
    input_arra(n,a);
    sum=sum of composite numbers(n,a);
    output(n,a,sum);
    return 0;
  }
}
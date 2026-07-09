#include <stdio.h>
int main(){
  int num;
  double fact=1;
  printf("enter a number for factorial=");
  scanf ("%d",&num);
  for (int i=1;i<=num;i++){
    fact = fact*i;
  }
  printf("factorial of %d id %0f \n",num,fact);
  return 0;
}
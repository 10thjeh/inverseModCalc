#include <stdio.h>
//ax=1modb
//find x
int main(int argc, char const *argv[]) {
  int a,b,found=0;
  printf("ax=1modb\n");
  printf("Please enter a : "); scanf("%d",&a);
  printf("\nPlease enter b : "); scanf("%d",&b);
  int x=1;
  while(found!=1){
      printf("%d * %d mod %d = %d\n",a,x,b,(a*x)%b);
    if((a*x)%b == 1){
      found = 1;
    }
    x++;
  }
  printf("\nAnswer is %d",x-1);
  return 0;
}

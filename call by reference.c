#include <stdio.h>
   swap(int*,int*);
int main()
   {  int a, b;
 printf("\n Enter value of a & b: ");
  scanf("%d %d , &a, &b");
printf("\n Before swapping: \n");

printf("\na = %d\n\nb = %d\n", a, b);
   swap(&a, &b);
printf("\n After swapping: \n");

  printf("\na = %d\n\nb = %d", a, b);}

  swap(int *x , int *y)
{
    int temp;
    temp = *x;
      *x = *y ;
      *x = *y;
       *y = temp;
       }

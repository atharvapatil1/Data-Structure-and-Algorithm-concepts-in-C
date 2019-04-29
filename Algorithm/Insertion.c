#include<stdio.h>

int main(){

   int i, j, count, temp, a[100];

   printf("How numbers you are going to enter?: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   for(i=0;i<count;i++)
      scanf("%d",&a[i]);

   for(i=1;i<count;i++){
      temp=a[i];
      j=i-1;
      while((temp<a[j])&&(j>=0)){
         a[j+1]=a[j];
         j=j-1;
      }
      a[j+1]=temp;
   }

   printf("Order of Sorted elements in ascending order: ");
   for(i=0;i<count;i++)
      printf(" %d",a[i]);

   return 0;
}
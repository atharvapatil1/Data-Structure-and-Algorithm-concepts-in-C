#include  <stdio.h>

void  bubble(int  x[ ] , int  n) ; 
void  show(int  x[ ] , int  n) ;

int main()
{
 int  i , n , x[20] ;


 printf("Enter the number of elements: ") ;
 scanf("%d",&n) ;
 printf("Enter the elements:\n") ;
 for(i=0 ; i<n ; i++)
    scanf("%d",&x[i]) ;

 bubble(x,n) ;

 printf("Sorted array is as shown:\n") ;
 for(i=0 ; i<n ; i++)
    printf("%d " , x[i]) ;

 return 0;
}

void  bubble(int  x[ ] , int  n)
{
 int  i , j , temp ; 
 int  flag=1 ;

 for(i=0 ; i<n-1&&flag==1 ; i++)
 {
   flag=0 ;

   for(j=0 ; j<n-1-i ; j++)
     if(x[j]>x[j+1])
     {
       temp=x[j] ;
       x[j]=x[j+1] ;
       x[j+1]=temp ;

       flag=1 ;
     }

   show(x,n) ;
 }
}
void  show(int  x[ ] , int  n)
{
  int  i ;
  for(i=0 ; i<n ; i++)
    printf("%d " , x[i]) ;
  printf("\n\n") ;
}


#include  <stdio.h>

int  binary(int  x[ ] , int  low , int  high , int  key) ;

int  main()
{
int  i , n , x[20] , key ;

printf("Enter the number of elements: ") ;
scanf("%d",&n) ;
printf("Enter the elements:\n") ;
for(i=0 ; i<n ; i++)
    scanf("%d",&x[i]) ;

printf("Enter the element to be searched: ") ;
scanf("%d",&key) ;

i=binary(x,0,n-1,key) ;

  if(i==-1)
     printf("%d not found." , key) ;
  else
     printf("%d found at position %d." , key,i) ;

return 0;
}

int  binary(int  x[ ] , int  low , int  high , int  key)
{
  int  mid ;

  if(low>high)
    return  -1 ;

  mid=(low+high)/2 ;

  if(key==x[mid])
    return mid ;
  else if(key<x[mid])
    return (binary(x,low,mid-1,key)) ;
  else
    return (binary(x,mid+1,high,key)) ;
}


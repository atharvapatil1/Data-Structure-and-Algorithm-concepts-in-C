#include  <stdio.h>

#define  STACKSIZE  5

struct  stack
{
  int  top ;
  int  items[STACKSIZE] ; 
};
struct  stack  s ;

void  push(int  x)
{
  s.items[++(s.top)]=x ;
}

int  pop()
{
  return (s.items[(s.top)--]) ;
}

void  show()
{
  int  i ;
  printf("Stack from topmost element is as shown:\n") ;
  for(i=s.top ; i>=0 ; i--)
    printf("%d ", s.items[i]) ;
}

int  main()
{
  int  x , ch ;

  s.top=-1 ;


  do
  {
    printf("\n\n  Menu: \n") ;
    printf("1:push \n") ;
    printf("2:pop \n") ;
    printf("3:exit \n") ;
    printf("Enter your choice: ") ;
    scanf("%d",&ch) ;
    switch(ch)
    {
      case 1:
      printf("Enter element to be pushed: ") ;
      scanf("%d",&x) ;
      push(x) ;
      show() ;
      break ;

      case 2:
      x=pop() ;
      printf("Element popped is %d \n",x) ;
      show() ;
      break ;

      case 3:
      break ;
   }
 }
 while(ch!=4) ;

 return 0;
}




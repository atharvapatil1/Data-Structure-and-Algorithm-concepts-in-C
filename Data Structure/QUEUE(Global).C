
#include  <stdio.h>

#define  QUEUESIZE  5

struct  queue
{
  int  front , rear ;
  int  items[QUEUESIZE] ; 
} ;

struct  queue  q ;

void  insert(int  x)
{
  q.items[++(q.rear)]=x ;
}

int  removes()
{

  return (q.items[(q.front)++]) ;
}


void  show()
{
  int  i ;
  printf("Queue from frontmost element is as shown:\n") ;
  for(i=q.front ; i<=q.rear ; i++)
    printf("%d " , q.items[i]) ;
}

int main()
{
  int  x , ch ;


  q.rear=-1 ;
  q.front=0 ;

  do
  {
    printf("\n\n Menu: \n") ;
    printf("1:Insert \n") ;
    printf("2:Remove \n") ;
    printf("3:exit \n") ;
    printf("Enter your choice: ") ;
    scanf("%d",&ch) ;
    switch(ch)
    {
      case 1:
      printf("Enter element to be inserted: ") ;
      scanf("%d",&x) ;
      insert(x) ;
      show() ;
      break ;

      case 2:
      x=removes() ;
      printf("Element removed is: %d \n",x) ;
      show() ;
      break ;

      case 3:
      break ;
    }
  }
  while(ch!=3) ;

  return 0;
}




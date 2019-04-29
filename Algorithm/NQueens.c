 #include<stdio.h>
 #include<math.h>
  int board[10],count=1;
  void queen(int,int);
  int place(int,int);
  void print (int);
  int main()
  {
    int n;
    printf("\n enter the number of queen : ");
    scanf("%d",&n);
    queen(1,n);
  }
  void queen(int row,int n)
  {
   int column;
    for(column=0;column<=n;column++)
    {
      if(place(row,column))
      {
      board[row]=column;
      if(row==n)
      print(n);
      else
      queen(row+1,n);
      }
    }
   }
   int place(int row,int column)
   {
     int i;
     for(i=0;i<=row-1;i++)
     {
     if(board[i]==column)
     return 0;
     if(abs(board[i]-column)==abs(i-row))
     return 0;
     }
     return 1;
   }
    void print(int n)
  { int i,j;
    printf("\n\n soluntion %d \n\n",count++);
    for(i=1;i<=n;i++)
    printf("\t%d",i);
    for(i=1;i<=n;i++)
   {
     printf("\n %d",i);
     for(j=1;j<=n;j++)
     { if(board[i]==j)
       printf("\tQ");
       else
       printf("\t-");
     }
   }
}
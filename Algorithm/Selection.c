#include <stdio.h>
int main()
 {
    int a[100],i,n,b,temp;
    printf("Enter the number of elements to be sorted: ");
    scanf("%d",&n);
    for(i=0;i<n;++i)
      {
       printf("Enter %d element: ",i+1);
       scanf("%d",&a[i]);
    }
    for(b=0;b<n;++b)
    for(i=b+1;i<n;++i)
     {
         if(a[b]>a[i])  
          {
             temp=a[b];
             a[b]=a[i]; 
             a[i]=temp;
         }
    }
    printf("In ascending order: ");
    for(i=0;i<n;++i)
        printf("%d  ",a[i]);
    return 0;
}
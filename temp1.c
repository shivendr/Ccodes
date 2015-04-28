#include<stdio.h>
main()
{
      int a,i=0;
      int arr[99];
      scanf("%d",&a);
      while(a!=42)
      {
      arr[i++]=a;
      scanf("%d",&a);
      }
      a=i; i=0;
      while(i!=a)
      {
                 printf("%d\n",arr[i++]);
                 }
                 getch();
}
      

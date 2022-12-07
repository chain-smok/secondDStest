#include <stdio.h>
#include <stdlib.h>

int values[] = {0};

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
   int i,n;
   scanf("%d",&n);
   for( i = 0 ; i < n; i++ ) {
      scanf("%d" ,&values[i]);
   }

    qsort(values, n, sizeof(int), cmpfunc);
   for( i = 0 ; i < n; i++ ) {
      printf("%d ", values[i]);
   }
 
  return(0);
}
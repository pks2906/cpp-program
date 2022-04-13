#include <stdio.h>
#define MAX_LEN 10
 
/* Non-Recursive function*/
void b_search_nonrecursive(int l[],int num,int ele)
{
   int l1,i,j, flag = 0;
   l1 = 0;
   i = num-1;
   while(l1 <= i)
   {
      j = (l1+i)/2;
      if( l[j] == ele)
      {
    printf("\nThe element %d is present at position %d in list\n",ele,j);
         flag =1;
         break;
      }
      else
        if(l[j] < ele)
           l1 = j+1;
        else
           i = j-1;
   }
   if( flag == 0)
   printf("\nThe element %d is not present in the list\n",ele);
}
 
#include <stdio.h>  
int main()  
{  
   int n;// variable declaration  
   // Displaying the n tables.  
   for(int i=1;i<=10;i++)  // outer loop  
   {  
       for(int j=1;j<=10;j++)  // inner loop  
       {  
           printf("%d  %d\n",i,j); //  printing the value.  
       }  
       printf("\n");  
   }
   return 0;

}
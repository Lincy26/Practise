#include <stdio.h>
int main()
{
int n,i,j,t,a[9]={7, 1, 2, 3, 4, 5, 6,8,9};
 
for (i = 0; i < 9; i++) 
        {
            for (j = i + 1; j < 9;j++)
            {
                if (a[i] > a[j]) 
                {
                    t =  a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }    
        n=i;
 i=0;j=8;
 while(i<j)
 {
     printf("%d\t",a[j--]);
     printf("%d\t",a[i++]);
 }
 if(n%2!=0)
if(i=j)
 printf("%d",a[i]);
    return 0;
}

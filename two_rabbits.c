#include<stdio.h>

int main()
{
  int t,i;
   scanf("%d", &t);

for(i=0;i<t;i++)
{   
   long long int a_loc,b_loc,ajmp,bjmp, count=0;

   scanf("%lld%lld%lld%lld", &a_loc, &b_loc, &ajmp, &bjmp);

  while(a_loc <= b_loc)
{
    if(a_loc = b_loc)
      {
           printf("%lld", count);
           break;

      }

     else if (a_loc > b_loc)
         {
           printf("-1");
         }
  else {
         a_loc = a_loc + ajmp;
         b_loc = b_loc - bjmp;

        count = count + 1;

       }
}
}
}

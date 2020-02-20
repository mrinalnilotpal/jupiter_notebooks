#include<stdio.h>

int
main ()
{
  int sbitnum, i, parbit, recdtanum, j , sum = 0;
  // sbitnum stands for total number of bits//
  // parbit stands for the parity bit//

  printf ("Enter the number of bits in data:");
  scanf ("%d", &sbitnum);
  
  int  tbits[sbitnum], rectbit[sbitnum];

  printf ("Enter the data bitwise:");

  for (i = 0; i < sbitnum; i++)
    {
      scanf ("%d", &tbits[i]);
    }

  for (i = 0; i < sbitnum; i++)
    {
      sum += tbits[i];
    }

  parbit = sum % 2;
  tbits[sbitnum] == parbit;

  printf ("Enter the data Receieved:");
  for(j=0; j<=sbitnum; j++)
  {
      scanf("%d", & rectbit[j]);
  }
  
  for (j = 0; j <= recdtanum; j++)
    {
      if (tbits[j]==rectbit[j])
      {
          printf("Correctly receieve! No Error!");
      }
      else 
      printf("Erorr in Transmission.");
	}
}

#include "atm.h"
#include <stdio.h>

unsigned int get_money(unsigned short int amount)
{
  int notes[8] = {2000, 500, 100, 50, 20, 10, 5, 1};
  int denominations = 0;
  int remaining_amount = amount;
  if(amount > 31999)
  {
   return denominations;
  }
  for(int index = 0; index < 8; index++)
  {
    int count = remaining_amount / notes[index];
    remaining_amount = remaining_amount - notes[index] * count;
    int x = count & 0xf;
    denominations = denominations << 4;
    denominations = denominations | x;
  }
  return denominations;
}

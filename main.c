#include <stdio.h>
#include "atm.h"

int main(void)
{
  unsigned short int amounts[] = {31999};
  for (int i = 0; i < 1; i++)
  {
    unsigned int notes = get_money(amounts[i]);
    printf("%5u %08x\n", amounts[i], notes);
  }
  return 0;
}

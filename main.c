#include <stdio.h>
#include "atm.h"

void display_notes(unsigned int);

int main(void)
{
  unsigned short int amounts[] = {31999};
  for (int i = 0; i < 1; i++)
  {
    unsigned int notes = get_money(amounts[i]);
    display_notes(notes);
    printf("%5u %08x\n", amounts[i], notes);
  }
  return 0;
}

void display_notes(unsigned int denominations)
{
  int notes[8] = {2000, 500, 100, 50, 20, 10, 5, 1};
  for(int index = 0; index < 8; index++)
  {
    int count = denominations >> 28;
    denominations = denominations << 4;
    printf("%d notes of %d\n", count, notes[index]);
  }
}

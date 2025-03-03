/* hello.c */
#include <stdio.h>

#include "utils.h"
#include <ctype.h>
#include <string.h>

#include "utils.h"
#include <ctype.h>
#include <string.h>

void extract_even_odd_strings(const char *input, char *even, char *odd) {
  int even_index = 0, odd_index = 0;
  for (int i = 0; input[i] != '\0'; i++) {
    if (!isspace(input[i])) {
      if (i % 2 == 0) {
        even[even_index++] = input[i];
      } else {
        odd[odd_index++] = input[i];
      }
    }
  }
  even[even_index] = '\0';
  odd[odd_index] = '\0';
}

void main(void) {
  char input[] = "Hello World";
  char even[50], odd[50];
  extract_even_odd_strings(input, even, odd);
  printf("Even indexed characters: %s\n", even);
  printf("Odd indexed characters: %s\n", odd);
}

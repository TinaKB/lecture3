#include <string.h>
#include <stdio.h>
#include <stdlib.h>
//Take the string and change upper to low for each char

void inspect(char s[]) {
  int index = 0;
  while(s[index] != 0) {
    printf("%c (%hhu) ", s[index], s[index]);
    index += 1;
  }
  printf("\n");
}

char lower(char c) {
  if c >= 'A' && c <= 'Z'){
    return c+32; 
    //return c|0b00100000
    // bit 
  }
} return c;

void lowercase(char s[]) {
  int index = 0;

  while(s[index] != 0   ) {
    s[index] = lower(s[index]);
    index += 1;
  }
}
// forloop  for(int index - 0;s[index]!=0;index++1)

int main() {
  char abc[] = "ABC";
  lowercase(abc);
  inspect(abc); //expect a(97), b(98), c(99)

  char mixed[] = "Hello Aaron!";
  lowercase(mixed);
  inspect(mixed); //expect h(104)...






}

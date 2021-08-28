#include <stdio.h>
#include <stdlib.h>


char funkcija(char *s) {
  int c;
  int i, j;
  for (i = 0; s[i] != '\0'; i++) {
    c = 0;
    for (j = 0; s[j] != '\0'; j++) {
      if (s[i] == s[j]) {
        c++;
      }
    }
    
    if (c == 1) {
        return s[i];
    }
      
  }
  
}

int main() {
  char *s = (char* ) malloc(30);
  if (s == NULL) {
    return 1;
  }
  fgets(s, 30, stdin);
  printf("%c\n", funkcija(s));
  printf("%c\n", funkcija("1313Abc1B"));
  free(s);

  return 0;
}

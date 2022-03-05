#include <stdio.h>
#include <string.h>
#define MAX_BUF 1024

int main () {

  int letter_frequency[26] = {0};
  int len = 0, i, ch;
  char buf[MAX_BUF];

  while((ch = getchar()) != EOF && len < MAX_BUF){
    
    buf[len] = ch;
    len++;
    
  }
  
  do {
    
    if (buf[len] >= 65 && buf[len] <= 90) {
      
      letter_frequency[buf[len] - 65] ++;
      
    }
    else if (buf[len] >= 97 && buf[len] <= 122) {
      letter_frequency[buf[len]-97] ++;
      
    }
    
    len--;
    
  } 
  while (len > -1);

  printf("Distribution of letters in corpus:\n");
  
  for (i = 0; i < 26; i++) {
    printf("%c: %d\n", 65+i,   letter_frequency[i]);
  }

}
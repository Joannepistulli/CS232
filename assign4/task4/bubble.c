/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */
#include <stdlib.h>
#include <stdbool.h>



#define NUM 30   /* number of strings */
#define LEN 1200  /* max length of each string */

bool compareStr(char a[], char b[]){
  int a_len = strlen(a) - 1, b_len = strlen(b) - 1;
  if(a_len > b_len){
    for(int i = 0; i < b_len; i++){
      if(a[i] > b[i]){
        return true;
      } else {
        return false;
      }
    }
  } else {
    for(int i = 0; i < a_len; i++){
      if(a[i] > b[i]){
        return true;
      } else {
        return false;
      }
    }
  }
  return false;
}

int main()
{
  char * Strings[NUM];
  char buffer[LEN];

  printf("Please enter %d strings, one per line:\n", NUM);

  int stringsize = 0;
  for(int i = 0; i < NUM; i++){
    if(fgets(buffer, LEN, stdin) != NULL){
      stringsize = strlen(buffer);
      Strings[i] = (char *)malloc(stringsize+1);
      strcpy(Strings[i], buffer);
    }
  }

  puts("\nHere are the strings in the order you entered:");

  for(int i = 0; i < NUM; i++){
    puts(Strings[i]);
  }

  bool sorted = false;
  int ceiling = NUM - 1;
    
  while(!sorted){
    sorted = true;
    int i;
    for(i = 0; i < NUM - 1; i++){
      if(compareStr(Strings[i], Strings[i+1]) == true){
        char * temp = Strings[i];
        Strings[i] = Strings[i+1];
        Strings[i+1] = temp;
        sorted = false;
      }
    }
    ceiling--;
  }
  
  puts("\nIn alphabetical order, the strings are:");     

  for(int i = 0; i < NUM; i++){
    puts(Strings[i]);
  }

}

}

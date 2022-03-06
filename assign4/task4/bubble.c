#include <stdio.h> 
#include <string.h> 


#define NUM 30 /* number of strings */
#define LEN 1200 /* max length of each string */
int main()

{

char Strings[NUM][LEN];

printf("Please enter %d strings, one per line:\n", NUM);



int i=0;

for(i=0; i<NUM; i++){

    fgets(Strings[i],LEN,stdin);

}

puts("\nHere are the strings in the order you entered:");


for(i=0; i<NUM; i++){

      printf("[%d] %s\n",i+1,Strings[i]);

}

int j;

char temp[LEN];

for(i=0; i<NUM;i++){

          for(j=0;j<NUM-i-1;j++){

                                if(strcmp(Strings[j],Strings[j+1])>0){                                          strcpy(temp,Strings[j]);                                         strcpy(Strings[j],Strings[j+1]);                                 strcpy(Strings[j+1],temp);

          }

    }

}

puts("\nIn alphabetical order, the strings are:");  


for(i=0; i<NUM; i++){

                printf("[%d] %s\n",i+1,Strings[i]);

}

}
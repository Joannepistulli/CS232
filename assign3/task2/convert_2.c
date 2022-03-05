#include<stdio.h>
#include<stdlib.h>
//Program to convert a 32-bit Decimal numbers to Binary
//1) Do not change the signature of convert_2, or your task receives zero
//2) No globals allowed.
char* convert_2(int dec)
{
  char *bin=malloc(43 * sizeof(char));
  unsigned int num = 0;

  num = dec;
  
  int x, y;

  if(num < 0){
    num--;
   }

  for(x = 40; x > 0; x--){
      if((x-1) % 5 == 0 && x != 1){
        bin[x] = ' ';
      }else if(num % 2 == 1){
        bin[x] = '1';
        num = num / 2;
      } else {
        bin[x] = '0';
        num = num / 2;
      }
  }
  
  if(num < 0){
    for(y = 39; y > 1; y--){
      if(bin[y] == '0'){
        bin[y] = '1';
      } else if(bin[y] == '1'){
        bin[y] = '0';
      }
    }
  } 
  bin[0] = '0';
  bin[1] = 'b';
  bin[41] = ' ';
  return bin;
}

int main() {
	int n;
	char * bin;
	printf("Enter the Decimal Number\n");
	scanf("%d",&n);
	bin = convert_2(n);
	printf("The Binary Notation of %d is\t %s\n", n, bin);
	//TODO: do we need to release the memory of bin?
  free(bin);
}
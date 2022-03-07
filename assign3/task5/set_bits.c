#include<stdio.h>
#include<stdlib.h>

char* convert_2(int dec){
 char* ans = (char* )malloc(50);
  int mask = 0x80000000;
  int i=0,j;
  ans[i++] = '0';
  ans[i++] = 'b';

  for(j=0;j<32;j++) {
      if(j%4 == 0 && j > 0) ans[i++] = ' ';
     
      if(dec & mask) ans[i++] = '1';
      else ans[i++] = '0';
      dec <<= 1;
  }
  return ans;}

int main() {
	int n;
	char * bin;
	printf("Enter the Decimal Number below \n");
	scanf("%d",&n);
	bin = convert_2(n);
	printf("The Binary Notation of %d is\t %s\n", n, bin);
  free(bin);
}
#include <stdio.h>

// Create a function
void merhabayaz() {
  printf("Merhabalar\n");
}

int sayiyaz() {
	int sayi = 15;
  printf("%d\n",sayi);
  return sayi+5;
}

int main() {
int b;
  merhabayaz(); // call the function
  b = sayiyaz();
  printf("\n%d",b);
  
  return 0;
}

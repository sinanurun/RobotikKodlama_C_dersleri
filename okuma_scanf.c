#include <stdio.h>

int main() {
  // Create an integer variable that will store the number we get from the user
  int myNum;
  char harf[1];

  // Ask the user to type a number
  printf("Type a number and press enter: \n"); 

  // Get and save the number the user types
  scanf("%d", &myNum);
  printf("bir harf giriniz: "); 
  scanf("%s", harf);

  // Print the number the user typed
  printf("Your number is: %d ", myNum);
printf("Harfiniz: %s", harf);
  return 0;
}

#include <stdio.h>
#include <cs50.h>

int main() {
    
  printf("minutes take: ");
  int minutes = get_int();
  
  printf("Bottles of water used: %d\n", minutes * 12);
 
}
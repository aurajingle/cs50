#include <stdio.h>
#include <cs50.h>
#include <math.h>

#define quarter 25;
#define dime 10;
#define nickel 5;

int main (void) {
    float coins;
    int cents;
    int q_count =0;
    int d_count =0;
    int n_count = 0;
    int leftover = 0;
    int coin_count = 0;
    do
    {
        printf("changes: ");
        coins = get_float();
        
        cents =(int) round(coins*100);
    }
    while (coins <= 0);
    
    q_count = cents / quarter;
    leftover = cents % quarter;
    
    d_count = leftover/dime;
    leftover = leftover%dime;
    
    n_count = leftover/nickel;
    leftover = leftover%nickel;
    
    coin_count = q_count + d_count + n_count +leftover;
    
    printf("%d\n", coin_count);
}
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    int bot;
    do {
        n = get_int();
        bot = 12;
        bot = bot * n;
        if (n>0) {
        printf("Minutes: %i\nBottles: %i\n ", n, bot);
        }
        else {
            printf("Your number is not valid");
        }
    } while (n > 0);
    
}
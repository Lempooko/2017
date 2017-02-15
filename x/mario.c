#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = get_int(); //war for user input - pyrimid height
    int i; //order number of row
    for(i = 0; i < num; i++) {
        int k; // war for amount of spaces
        for (k = 0; k < num - i - 1; k++) { // amount of spaces = pyrimid height - order number of row
            printf(" ");
        }
        int j; // war for amount of cells 
        for (j = 0; j < num - k + 1; j++) { // amount of cells = pyrimid height - amount of spaces + one
            printf("#");
        }
        printf("\n"); // enter for new row
   }
   return 0;
}

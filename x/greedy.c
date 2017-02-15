#include <cs50.h>
#include <stdio.h>

int get_coin (int number) {
    if (number >= 25) {
        return 25;
    } else if (number >= 10) {
        return 10;
    } else if (number >= 5) {
        return 5;
    } else {
        return 1;
    }
}

int calculate (float num) {
    int result = 0;
    int user_input = num * 100;
    while(user_input) {
        user_input = user_input - get_coin(user_input);
        result++;
    }
    return result;
}

int main () {
    float num;
    do {
        num = get_float();
        if (num > 0) {
            int result = calculate(num);
            printf("%d\n", result);
        } else {
            printf("Number is not valid.\n");
        }
    } while (true);
}
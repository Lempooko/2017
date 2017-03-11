#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char initials[10] = "";
    string str = get_string();
    bool is_space_before = false;
    int len = strlen(str);
    
    for (int i = 0; i < len; i++)
    {
        char character = str[i];
        int key = str[i];
        
        if ((key >= 65 && key <= 90) || (key >= 97 && key <=122))
        {
            int initials_len = strlen(initials);
            if (initials_len == 0 || is_space_before)
            {
                char letter = toupper(character);
                initials[initials_len] = letter;
                is_space_before = false;
            }
        }
        if (key == 32)
        {
            is_space_before = true;
        }
    }
    printf("%s\n", initials);
}

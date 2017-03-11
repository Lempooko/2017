#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

    int main(int argc, string argv[]) {
        //printf ("%d\n", argc);
        
        if (argc != 2) {
            printf ("Net argumetov ili > 1\n");
          return 1; 
        }
        
        char result [100] = "";
        int last_index = 0;
        
        int k = atoi(argv[1]);
        printf ("plaintext: ");
        string text = GetString();
        //for (int j=2; j < argc; j++) {
           // string text = argv[j];
            
            for (int i = 0, n = strlen(text); i < n; i++, last_index++)
            {
                char letter = text[i];
                int key = text[i];
               // if (key == 32 || key == 44 || key == 33)
               if (!(isalpha(key)))
                {
                    result [last_index] = letter;
                }
                else if (islower (letter)) {
                    int begin = 97; // a
                    int index = key-begin;
                    int s_index = (index + k) % 26;
                    int asc_index = s_index+begin;
                    char r_letter = asc_index;
                    result [last_index] = r_letter;
                }
                else {
                   int begin = 65; // a
                    int index = key-begin;
                    int s_index = (index + k) % 26;
                    int asc_index = s_index+begin;
                    char r_letter = asc_index;
                    result [last_index] = r_letter;
                }
            }
            //result [last_index] = ' ';
            last_index = last_index + 1;
        //}
           
        printf ("ciphertext: %s\n", result);
        return 0; 
    }

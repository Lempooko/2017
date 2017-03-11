#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]) {
        
    if (argc != 2) {
        printf ("Net argumetov ili > 1\n");
        return 1; 
    }
    
    char result [100] = "";
    int last_index = 0;
    string key_phrase = argv[1]; // rename key_phrase to key_word
    
    for (int i = 0, n = strlen(key_phrase); i < n; i++) {
        int key_ward = key_phrase[i];
         if (!(isalpha(key_ward))) {
            printf("Ne dopoostimie simvolu v kluchevom slove\n");
            return 1;
            
        }
    }
    printf ("plaintext: ");   
    string text = GetString();
    int letter_counter = 0;
          
    for (int i = 0, n = strlen(text); i < n; i++, last_index++) {
        char letter = text[i];
        int key = text[i]; // rename key to letter code
        // if (key == 32 || key == 44 || key == 33)
        
        int begin; // a
        int key_phrase_begin;
        int index;
        int s_index;
        int asc_index;
        char r_letter;
        int key_phrase_index;
        int key_phrase_letter_code;
        char key_phrase_letter;
        
        
        int j = letter_counter % strlen(key_phrase); // to do: napisat' chto takoe j
        key_phrase_letter_code = key_phrase[j]; // 
        key_phrase_letter = key_phrase[j];
       
        if (!(isalpha(key))) {
            result [last_index] = letter;
            continue;
        }

        if (islower (letter)) {
            begin = 97; // a
            
        }
        else {
            begin = 65; // A
        }

        if (islower(key_phrase_letter)) {
            key_phrase_begin = 97; // a
        }
        else {
            key_phrase_begin = 65; // A
        }    
        
        index = key - begin;
        key_phrase_index = key_phrase_letter_code - key_phrase_begin;
        s_index = (index + key_phrase_index) % 26;
        asc_index = s_index + begin;
        r_letter = asc_index;
        result [last_index] = r_letter;
        
        letter_counter = letter_counter + 1;
    }
    
    last_index = last_index + 1;
           
    printf ("ciphertext: %s\n", result);
    return 0; 
}
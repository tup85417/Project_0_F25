#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "random_string.h"

//Used gemini to know the difference between int and size_t
void rand_string(char *s, size_t size) {

    char charachters[] = "qwertyuiopasdfghjklzxcvbnm";
    int numCharacters = strlen(charachters);

    for (size_t i = 0; i < size; i++) {

        int randomCharIndex = rand() % numCharacters;
        s[i] = charachters[randomCharIndex];

    }

    s[size] = '\0';
}

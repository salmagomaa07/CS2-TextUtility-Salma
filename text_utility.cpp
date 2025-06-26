#include <iostream>
#include <cctype>
#include <cstring>
#include "text_utility.h"
using namespace std;


#include <iostream>
#include <cctype>
#include <cstring>
#include "text_utility.h"
using namespace std;


int countwords(char* str) {
    
    if (str[0] == '\0') return 0;

    int count = 0;
    int i = 0;

    while (str[i] != '\0') {

        while (str[i] == ' ') {
            i++;
        }

        if (str[i] != '\0') {
            count++;

            while (str[i] != ' ' && str[i] != '\0') {
                i++;
            }
        }
    }

    return count;
}

int characterCount(char* str) {
    int count = 0;
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

void toUppercase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

void toLowercase(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}
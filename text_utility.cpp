#include <iostream>
#include <cctype>
#include <cstring>
#include "text_utility.h"
using namespace std;



void VowelConsonantCount(char* str, int& vowels, int& consonants){
    
    vowels = 0;
    consonants =0;
     for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); 
        
        if (isalpha(ch)){
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
     }

}

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

int countSubstringOccurrences(char* str, char* sub) {
    int count = 0;
    int lenStr = strlen(str);
    int lenSub = strlen(sub);

    if (lenSub == 0 || lenSub > lenStr)
        return 0;

    for (int i = 0; i <= lenStr - lenSub; i++) {
        bool match = true;
        for (int j = 0; j < lenSub; j++) {
            if (str[i + j] != sub[j]) {
                match = false;
                break;
            }
        }
        if (match)
            count++;
    }

    return count;
}
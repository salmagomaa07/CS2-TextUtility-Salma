#include <iostream>
#include <cctype>
#include <cstring>
#include "text_utility.h"
using namespace std;

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
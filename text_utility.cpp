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
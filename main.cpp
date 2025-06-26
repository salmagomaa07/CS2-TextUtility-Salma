#include <iostream>
#include "text_utility.h"
using namespace std;

int main()
{
    //testing the functions
    char str1[] = "Hello World!";
    char sub1[] = "lo";

    //outtputting the string we are using
    cout << "Original String: " << str1 << endl;
    
    //checking character count
    cout << "Character Count: " << characterCount(str1) << endl;
    
    //checking word count
    cout << "Word Count: " << countwords(str1) << endl;
    
    //counting vowels and consonants
    int vowels = 0, consonants = 0;
    VowelConsonantCount(str1, vowels, consonants);
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    //reversing the string
    reverseString(str1);
    cout << "String Reversed: " << str1 << endl;
    
    //call reverse again to unreverse it 
    reverseString(str1);

    //checking if it is palindrome
    cout << "Is Palindrome? " << (isPalindrome(str1) ? "Yes" : "No") << endl;

    //changing it to uppercase
    toUppercase(str1);
    cout << "Uppercase String: " << str1 << endl;

    //changing it to lower case
    toLowercase(str1);
    cout << "Lowercase String: " << str1 << endl;

    //checking occurrences of 'lo'
    cout << "Occurrences of the subrstring '" << sub1 << "' : " << countSubstringOccurrences(str1, sub1) << endl;

    cout << endl;

    //testing with empty string
    char str2[] = "";
    
    //outtputting the empty string
    cout << "Original String: " << str2 << endl;
    
    //counting characters
    cout << "Character Count: " << characterCount(str2) << endl;
    
    //counting the words
    cout << "Word Count: " << countwords(str2) << endl;
    
    //counting vowels and consonants
    VowelConsonantCount(str2, vowels, consonants);
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
   
    //reversing the string
    reverseString(str2);
    cout << "String Reversed: " << str2 << endl;
    
    //testing palindrome
    cout << "Is Palindrome? " << (isPalindrome(str2) ? "Yes" : "No") << endl;
  
    //changing it to uppercase
    toUppercase(str2);
    cout << "Uppercase String: " << str2 << endl;
  
    //changing it to lowercase
    toLowercase(str2);
    cout << "Lowercase String: " << str2 << endl;
    
    //checking occurrences of substring 'a'
    cout << "Occurrences of the substring 'a' : " << countSubstringOccurrences(str2, (char*)"a") << endl;

    

    return 0;
}
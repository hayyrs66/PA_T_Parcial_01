#include "Ejercicio01.h"
#include <string>

using namespace std;

char Ejercicio01::lower(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
        return c;

    return (char)(c + 32);
}

bool Ejercicio01::isPalindrome(const char* phrase, int length)
{
    
    string cleanPhrase;
    for (int i = 0; i < length; i++) {
        char c = lower(phrase[i]);
        if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
            cleanPhrase += c;
        }
    }
    
    int n = cleanPhrase.size();
    for (int i = 0; i < n / 2; i++) {
        if (cleanPhrase[i] != cleanPhrase[n - i - 1]) {
            return false;
        }
    }

    return true;
}




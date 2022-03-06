#include "D:\5e_string\string\string_.h"

#ifndef INC_5E_STRING_REMOVENONLETTERS_H
#define INC_5E_STRING_REMOVENONLETTERS_H

void removeNonLetters(char *s) {
    char *endSource = getEndOfString(s);
    char *destination = copyIf(s, endSource, s, isgraph);
    *destination = '\0';
}

void test_removeNonLetters_nonSpace() {
    char s[] = "HiIvanSergeevich";
    removeNonLetters(s);
    ASSERT_STRING(s, "HiIvanSergeevich");
}

void test_removeNonLetters_withSpace() {
    char s[] = "Hi Ivan Sergeevich";
    removeNonLetters(s);
    ASSERT_STRING(s, "HiIvanSergeevich");
}

void test_removeNonLetters_whiteSpaceCharacters() {
    char s[] = " \t H i \t I \n van Serg \t eevi \n ch  ";
    removeNonLetters(s);
    ASSERT_STRING(s, "HiIvanSergeevich");
}

void test_removeNonLetters_onlySpaceCharacters() {
    char s[] = " \t  \t  \n  \t  \n   ";
    removeNonLetters(s);
    ASSERT_STRING(s, "");
}

void test_removeNonLetters_emptyString() {
    char s[] = "";
    removeNonLetters(s);
    ASSERT_STRING(s, "");
}

void test_removeNonLetters() {
    test_removeNonLetters_nonSpace();
    test_removeNonLetters_withSpace();
    test_removeNonLetters_whiteSpaceCharacters();
    test_removeNonLetters_onlySpaceCharacters();
    test_removeNonLetters_emptyString();
}

#endif

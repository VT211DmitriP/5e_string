#include "D:\5e_string\string\string_.h"

#ifndef INC_5E_STRING_PRINTREVERSEWORDS_H
#define INC_5E_STRING_PRINTREVERSEWORDS_H

void reverseWords(char *str) {
    *copy(str, getEndOfString(str), _stringBuffer) = '\0';
    getBagOfWords(&_bag, _stringBuffer);

    char *begin = str;
    for (int i = 0; i < _bag.size; i++) {
        begin = copyReverse(_bag.words[i].end - 1, _bag.words[i].begin - 1, begin);
        *begin = ' ';
        begin++;

    }
    if (begin != str)
        begin--;

    *begin = '\0';
}

void test_reverseWords_emptyString() {
    char s[MAX_STRING_SIZE] = "";
    reverseWords(s);

    ASSERT_STRING("", s);
}

void test_reverseWords_onlySpace() {
    char s[MAX_STRING_SIZE] = "        ";
    reverseWords(s);

    ASSERT_STRING("", s);
}

void test_reverseWords_onlySpaceCharacters() {
    char s[MAX_STRING_SIZE] = " \t  \t  \n  \t  \n   ";
    reverseWords(s);

    ASSERT_STRING("", s);
}

void test_reverseWords_oneWord() {
    char s[MAX_STRING_SIZE] = "Hello";
    reverseWords(s);

    ASSERT_STRING("olleH", s);
}

void test_reverseWords_oneLetter() {
    char s[MAX_STRING_SIZE] = "a b c d e e d c a b";
    reverseWords(s);

    ASSERT_STRING("a b c d e e d c a b", s);
}

void test_reverseWords_withWords() {
    char s[MAX_STRING_SIZE] = "Hello world right left middle";
    reverseWords(s);

    ASSERT_STRING("olleH dlrow thgir tfel elddim", s);
}

void test_reverseWords() {
    test_reverseWords_emptyString();
    test_reverseWords_onlySpace();
    test_reverseWords_onlySpaceCharacters();
    test_reverseWords_oneWord();
    test_reverseWords_oneLetter();
    test_reverseWords_withWords();
}


#endif

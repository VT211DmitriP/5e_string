cmake_minimum_required(VERSION 3.20)
project(5e_string C)

set(CMAKE_C_STANDARD 11)

add_executable(5e_string main.c string/tasks/allTestsTasks.h string/tasks/removeExtraSpaces.h string/tasks/digitToStartWithoutChangingTheOrderOfTheWord.h string/tasks/replacingEachDigitWithSpaces.h string/tasks/replace.h string/tasks/isWordsOrdered.h string/tasks/printReverseWords.h) # string/tasks/removeNonLetters.h string/string_.c string/string_.h)

add_library(str string/string_.h string/string_.c
        string/tasks/removeNonLetters.h
        # string / tasks / reverseWords . h
        # string / tasks / replaceDigitsBySpaces . h
        # ...
        # < файл с решением задачи >
        # ...
        # string / tasks / hasPairOfWordsWithEqualLetterSet . h
        # string / tasks / printWordsNonEqualLastWord . h
)

target_link_libraries(5e_string str)

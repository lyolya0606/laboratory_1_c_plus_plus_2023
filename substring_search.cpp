//
// Created by lyolya on 06.09.2023.
//
#include <iostream>
#include <string>
#include "substring_search.h"
#include "beginning.h"
#include "checking_errors.h"
#include "input.h"


using namespace std;

enum input_choice {
    KEYBOARD_INPUT = 1,
    FILE_INPUT
};

int is_a_substring(string sentence, string substr) {
    if (sentence.find(substr) != std::string::npos) {
        return sentence.find(substr);
    } else {
        return -1;
    }
}


void work_with_text() {
    const int IS_NOT_SUBSTRING {-1};
    int user_choice;
    bool stop;
    string text {};

    do {
        menu_work_text();
        user_choice = get_int();

        switch (user_choice) {

            case KEYBOARD_INPUT: {
                text = keyboard_input();
                stop = true;
            }
                break;

            case FILE_INPUT: {
                text = file_input();
                stop = true;
            }
                break;

            default:
                cout << "There is no such choice!" << endl;
                stop = false;
        }

    } while (!stop);

    string substring = substring_input();
    int index_of_substring = is_a_substring(text, substring);

    if (index_of_substring == IS_NOT_SUBSTRING) {
        cout << "\033[1;31mThis isn't a substring of the given text:(\033[0m" << endl;
    } else {
        cout << "The substring was found!!" << endl;
        cout << text.substr(0, index_of_substring) + "\033[1;32m"
        << text.substr(index_of_substring, substring.length())
        << "\033[0m" << text.substr(index_of_substring + substring.length(), text.length() - index_of_substring + substring.length())
        << endl;
    };

}

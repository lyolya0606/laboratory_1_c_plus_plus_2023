//
// Created by lyolya on 06.09.2023.
//
#include <iostream>
#include <string>
#include "substring_search.h"

using namespace std;

void is_a_substring(string sentence, string substr) {
    if (sentence.find(substr) != std::string::npos) {
        cout << "find!!!!!!" << endl;
    }
}

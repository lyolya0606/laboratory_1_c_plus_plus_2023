//
// Created by lyolya on 07.09.2023.
//
#include <iostream>
#include <string>
#include <fstream>
#include "checking_errors.h"

using namespace std;

ifstream open_file_input();

string file_input() {
    string text {};
    string str;
    ifstream file;

    file = open_file_input();

    while (!file.eof()) {
        getline(file, str);
        text += str;
    }
    cout << "Read data:" << endl << text;

//    for (int i = 0; i < lines.size(); i++) {
//        cout << lines[i] << endl;
//    }
    file.close();
    return text;
}


string keyboard_input() {
    cout << "write text:" << endl;
    string text {};
    getline(cin, text, '\n');

    return text;
//    const string END {"end"};
//    string str {};
//    cout << endl << "Enter the text. If you want to finish, write \"" << END << "\"" << endl;
//    while (str != END) {
//        getline(cin, str);
//        if (str == END) {
//            break;
//        }
//        if (!are_good_symbols(str)) {
//            cout << "You entered bad symbols. Please, try again." << endl;
//        } else {
//            lines.push_back(str);
//        }
//    }
}
#pragma once
#include <iostream>
#include<filesystem>
#include<fstream>
#include<vector>
#include<conio.h>
#include<Windows.h>
using namespace std;
using std::filesystem::directory_iterator;
#define CTRL(x) (#x[0] - 'a' + 1)
const short KEY_0 = 48,
KEY_1 = 49, KEY_2 = 50, KEY_3 = 51,
KEY_4 = 52, KEY_5 = 53, KEY_6 = 54,
KEY_7 = 55, KEY_8 = 56, KEY_9 = 57;
short mygetch(const string&, vector<short>);
void exe0_to_exe(const vector<string>&, const string&);
void exe_to_exe0(const vector<string>&, const string&);
vector<string> get_files(const string&);
short index_of_begin_of_name_of_program(const string&);

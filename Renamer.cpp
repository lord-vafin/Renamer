#include"Header of program.h"

int main(int argc, char* argv[])
{
	system("mode con cols=22 lines=4");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string path = argv[0];
	int index = index_of_begin_of_name_of_program(path);
	string path_of_program = path.substr(0, index + 1);
	vector<string> files = get_files(path_of_program);
	int number = mygetch(" 1 - .exe to .exe0\n 2 - .exe0 to .exe\n\tClick-->", {1,2}) - 1;
	if(!number)
		exe_to_exe0(files, path);
	else
		exe0_to_exe(files, path);
	return 0;
}
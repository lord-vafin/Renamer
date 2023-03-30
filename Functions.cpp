#include"Header of program.h"

vector<string> get_files(const string& path)
{
	vector<string> paths;
	for (const auto& entry : directory_iterator(path))
		paths.push_back(entry.path().string());

	return paths;
}

void exe0_to_exe(const vector<string>& files, const string& name_of_program)
{
	for (short i = 0; i < files.size(); i++)
	{
		if (files[i] == name_of_program)
			continue;
		else if (files[i].substr(files[i].size() - 5, 5) == ".exe0")
			rename(files[i].c_str(), files[i].substr(0, files[i].size() - 1).c_str());
	}
}
void exe_to_exe0(const vector<string>& files, const string& name_of_program)
{
	for (short i = 0; i < files.size(); i++)
	{
		if (files[i] == name_of_program)
			continue;
		else if (files[i].substr(files[i].size() - 4, 4) == ".exe")
			rename(files[i].c_str(), (files[i] + '0').c_str());
	}
}
short mygetch(const string& message, vector<short> keys)
{
	bool func = true;
	short x;
	while (func)
	{
		cout << message;

		x = _getch();

		switch (x)
		{
		case KEY_1:
		{
			cout << 1;
			func = false;
			x = 1;
			break;
		}
		case KEY_2:
		{
			cout << 2;
			func = false;
			x = 2;
			break;
		}
		case CTRL(c):
		{
			exit(0);
			break;
		}
		case 0:
		case 224:
		{
			_getch();
		}
		default:
		{
			system("cls");
		}
		}
	}

	return x;
}

short index_of_begin_of_name_of_program(const string& path)
{
	short index = 0;
	for (int i = 0; i < path.size(); i++)
	{
		if (path[i] == '\\')
			index = i;
	}
	return index;
}
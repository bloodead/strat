#include <fstream>
#include <iostream>
using namespace std;
/*
int	save_pos(char* buffer)
{
	int	i;

	i = 0;
	while(buffer[i] != '\0' && ((buffer[i] >= '1' && buffer[i] <= '9') ||
	      buffer[i] == 'S' || buffer[i] == 'B' || buffer[i] == 'F') && i <= 10)
	{
		if (buffer[i] == ' ')
			return (1);
		else
			return (2);
		i = i + 1;
	}
	return (0);
}
*/
int	save_pos(char* buffer)
{
	int	i;
	int	count_al;
	int	count_obj;

	i = 0;
	count_al = 0;
	count_obj = 0;
	while (buffer[i] != '\0')
	{
		if (buffer[i] == ' ')
			i = i + 1;
		else
		{
			count_obj = if_object()
			if (count_obj == -1)
				return (-1);
		}
	}
}

int	red_and_blue_file(char* buffer)
{
	filebuf*	pbuf;
	long		size;
	int		res;
	ifstream	file;

		file.open (buffer);
		if (file.is_open())
		{
			pbuf = file.rdbuf();
			size = pbuf->pubseekoff (0,ios::end,ios::in);
			pbuf->pubseekpos (0,ios::in);
			buffer = new char[size];
			pbuf->sgetn (buffer,size);
			file.close();
			cout.write (buffer,size);
			res = save_pos(buffer);
			if (res == 0)
				cout << "Res = 0" << endl;
			if (res == -1)
				cout << "Res = -1" << endl;
			if (res == 1)
				cout << "Res = 1" << endl;
			if (res == 2)
				cout << "Res = 2" << endl;
			delete[] buffer;
		}
		else
			return (-1);
		return 0;
}

int	main(int argc, char** argv)
{
	if (argc != 3)
		cout << "Error Arguments" << endl;
	else
		if (red_and_blue_file(argv[1]) == -1)
			cout << "Error in the Argv[1]" << endl;
		if (red_and_blue_file(argv[2]) == -1)
			cout << "Error in the Argv[2]" << endl;
	return (0);
}

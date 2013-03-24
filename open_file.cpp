#include <fstream>
#include <iostream>
#include "struct.h"
#include "init_object.h"
using namespace std;

int	if_object(char buf)
{
	s_piece c[12];
	(void)c;
	(void)buf;
	c[0].c = '1';
	c[0].fct = init_marshal;
	c[2].c = '2';
	c[2].fct = init_general;
	c[3].c = '3';
	c[3].fct = init_colonel;
	c[4].c = '4';
	c[4].fct = init_major;
	c[5].c = '5';
	c[5].fct = init_captain;
	c[6].c = '6';
	c[6].fct = init_lieutnant;
	c[7].c = '7';
	c[7].fct = init_sergeant;
	c[8].c = '8';
	c[8].fct = init_miner;
	c[9].c = '9';
	c[9].fct = init_scout;
	c[10].c = 'S';
	c[10].fct = init_spy;
	c[11].c = 'B';
	c[11].fct = init_bomb;
	c[12].c = 'F';
	c[12].fct = init_flag;
	return (0);
}

int	save_pos(char* buffer)
{
	int	i;

	i = 0;
	while (buffer[i] != '\0' && i != 10)
	{
		if (buffer[i] == ' ')
			return (-1);
		else
		{
			if (if_object(buffer[i]) == -1)
				return (-1);
		}
	}
	return (0);
}

int	red_and_blue_file(char* buffer)
{
	filebuf*	pbuf;
	long		size;
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
			if (save_pos(buffer) == -1)
				return (-1);
			delete[] buffer;
		}
		else
			return (-1);
		return 0;
}

int	init_object(int argc, char** argv)
{
	if (argc != 3)
	{
		cout << "Error Arguments" << endl;
		return (-1);
	}
	else
		if (red_and_blue_file(argv[1]) == -1)
		{
			cout << "Error open the Argv[1]" << endl;
			return (-1);
		}
		if (red_and_blue_file(argv[2]) == -1)
		{
			cout << "Error open the Argv[2]" << endl;
			return (-1);
		}
	return (0);
}

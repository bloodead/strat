#include <fstream>
#include <iostream>
#include "struct.h"
#include "init_object.h"
using namespace std;

s_piece*	if_object(s_piece* c)
{
	c[0].c = '1';
	c[0].fct = init_marshal;
	c[1].c = '2';
	c[1].fct = init_general;
	c[2].c = '3';
	c[2].fct = init_colonel;
	c[3].c = '4';
	c[3].fct = init_major;
	c[4].c = '5';
	c[4].fct = init_captain;
	c[5].c = '6';
	c[5].fct = init_lieutnant;
	c[6].c = '7';
	c[6].fct = init_sergeant;
	c[7].c = '8';
	c[7].fct = init_miner;
	c[8].c = '9';
	c[8].fct = init_scout;
	c[9].c = 'S';
	c[9].fct = init_spy;
	c[10].c = 'B';
	c[10].fct = init_bomb;
	c[11].c = 'F';
	c[11].fct = init_flag;
	return (c);
}

int	save_pos(char* buffer)
{
	int	i;
	int	w;

	s_piece* c;
	c = new s_piece[12];
	i = 0;
	while (buffer[i] != '\0' && i != 10)
	{
		if (buffer[i] == ' ')
			return (-1);
		else
		{
			c = if_object(c);
			w = 0;
			while (w != 12)
			{
				if (c[i].c == buffer[i])
					c[i].fct(i);
				w = w + 1;
			}
		}
		i = i + 1;
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

int	main(int argc, char** argv)
{
	s_wordcase*	wordcase;
	wordcase = new s_wordcase[100];
	(void)wordcase;
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

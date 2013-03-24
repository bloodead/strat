#ifndef _UNIT_H_
#define _UNIT_H_

template <typename T>
class	unit
{
	public:
		T	value;
};

class	marshal : public unit
{
	public:
		marshal()
		{
			value = 1;
		}
};

class	general : public unit
{
	public:
		general()
		{
			value = 2;
		}
};

class	colonel : public unit
{
	public:
		colonel()
		{
			value = 3;
		}
};

class	major : public unit
{
	public:
		major()
		{
			value = 4;
		}
};

class	captain : public unit
{
	public:
		captain()
		{
			value = 5;
		}
};

class	lieutenant : public unit
{
	public:
		lieutenant()
		{
			value = 6;
		}
};

class	sergeant : public unit
{
	public:
		sergeant()
		{
			value = 7;
		}
};

class	miner : public unit
{
	public:
		miner()
		{
			value = 8;
		}
};

class	scout : public unit
{
	public:
		scout()
		{
			value = 9;
		}
};

class	spy : public unit
{
	public:
		spy()
		{
			value = 'S';
		}
};

class	bomb : public unit
{
	public:
		bomb()
		{
			value = 'B';
		}
};

class	flag : public unit
{
	public:
		flag()
		{
			value = 'F';
		}
};
#define

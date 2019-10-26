#pragma once
#include"all_library.h"
class my_rect {
protected:
	int x;
	int y;
	int a;
	int b;
public:
	my_rect(int, int, int, int);

	virtual void show(Graphics^ g) = 0;

	virtual void move(int dx) = 0;
};

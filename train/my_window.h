#pragma once
#include "my_rect.h"
class my_window : public my_rect {
public:
	my_window(int _x = 0, int _y = 0, int h = 1);
	
	void show(Graphics^ g);

	void move(int dx);
};

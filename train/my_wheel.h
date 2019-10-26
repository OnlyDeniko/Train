#pragma once
#include "my_rect.h"
class my_wheel : public my_rect {
public:
	my_wheel(int _x = 0, int _y = 0, int _h = 1);
	
	void show(Graphics^ g);
	
	void move(int dx);
};

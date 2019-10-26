#pragma once
#include "my_rect.h"
class my_trumpet : public my_rect {
public:
	my_trumpet(int _x = 0, int _y = 0, int _h = 1);
	
	void show(Graphics^ g);
	
	void move(int dx);
};


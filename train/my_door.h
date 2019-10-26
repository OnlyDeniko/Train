#pragma once
#include "my_rect.h"
class my_door : public my_rect {
public:
	my_door(int _x = 0, int _y = 0, int h = 1);
	void show(Graphics^ g);
	void move(int dx);
};
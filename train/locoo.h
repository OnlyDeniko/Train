#pragma once
#include"vagon.h"
#include"my_engine.h"
#include"my_trumpet.h"
class locoo {
private:
	my_body body;
	my_door door;
	my_wheel left_w, right_w;
	my_window *windows;
	my_engine engine;
	my_trumpet trumpet;
public:
	locoo(int x = 0, int y = 0, int h = 1);
	~locoo();
	locoo(const locoo& tmp);
	locoo &operator= (const locoo& tmp);
	void show(Graphics^ g);
	void move(int dx);
};


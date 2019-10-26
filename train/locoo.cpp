#include "locoo.h"


locoo::locoo(int _x, int _y, int h) {
	body = my_body(_x, _y, h);
	door = my_door(_x, 3 * h + _y, h);
	left_w = my_wheel(h + _x, 10 * h + _y, h);
	right_w = my_wheel(9 * h + _x, 10 * h + _y, h);
	windows = new my_window[3];
	for (int i = 0; i < 3; i++) {
		windows[i] = my_window(5 * h + _x + 3 * h * i, 3 * h + _y, h);
	}
	engine = my_engine(_x + h, _y + 10 * h, h);
	trumpet = my_trumpet(_x + 10 * h, _y - 4 * h, h);
}

locoo::~locoo() {
	delete[]windows;
}

locoo::locoo(const locoo & tmp) {
	body = tmp.body;
	door = tmp.door;
	left_w = tmp.left_w;
	right_w = tmp.right_w;
	windows = new my_window[3];
	for (int i = 0; i < 3; i++) {
		windows[i] = tmp.windows[i];
	}
	engine = tmp.engine;
	trumpet = tmp.trumpet;
}

locoo & locoo::operator=(const locoo & tmp) {
	engine = tmp.engine;
	trumpet = tmp.trumpet;
	body = tmp.body;
	door = tmp.door;
	left_w = tmp.left_w;
	right_w = tmp.right_w;
	windows = new my_window[3];
	for (int i = 0; i < 3; i++) {
		windows[i] = tmp.windows[i];
	}
	return *this;
}

void locoo::show(Graphics ^ g) {
	body.show(g);
	left_w.show(g);
	right_w.show(g);
	door.show(g);
	for (int i = 0; i < 3; i++) {
		windows[i].show(g);
	}
	trumpet.show(g);
	engine.show(g);
}

void locoo::move(int dx) {
	body.move(dx);
	left_w.move(dx);
	right_w.move(dx);
	door.move(dx);
	for (int i = 0; i < 3; i++) {
		windows[i].move(dx);
	}
	trumpet.move(dx);
	engine.move(dx);
}

#include "vagon.h"

vagon::vagon(int _x, int _y, int h) {
	body = my_body(_x, _y, h);
	door = my_door(_x, 3 * h + _y, h);
	left_w = my_wheel(h + _x, 10 * h + _y, h);
	right_w = my_wheel(9 * h + _x, 10 * h + _y, h);
	windows = new my_window[3];
	for (int i = 0; i < 3; i++) {
		windows[i] = my_window(5 * h + _x + 3 * h * i, 3 * h + _y, h);
	}
}
vagon::~vagon() {
	delete[]windows;
}
void vagon::show(Graphics^ g) {
	body.show(g);
	left_w.show(g);
	right_w.show(g);
	door.show(g);
	for (int i = 0; i < 3; i++) {
		windows[i].show(g);
	}
}
void vagon::move(int dx) {
	body.move(dx);
	left_w.move(dx);
	right_w.move(dx);
	door.move(dx);
	for (int i = 0; i < 3; i++) {
		windows[i].move(dx);
	}
}
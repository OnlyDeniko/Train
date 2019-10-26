#pragma once
#include"all_library.h"
#include"my_body.h"
#include"my_door.h"
#include"my_wheel.h"
#include"my_window.h"
class vagon {
private:
	my_body body;
	my_door door;
	my_wheel left_w, right_w;
	my_window *windows;
public:
	vagon(int _x = 0, int _y = 0, int h = 1);
	~vagon();
	vagon(const vagon &tmp) {
		body = tmp.body;
		door = tmp.door;
		left_w = tmp.left_w;
		right_w = tmp.right_w;
		windows = new my_window[3];
		for (int i = 0; i < 3; i++) {
			windows[i] = tmp.windows[i];
		}
	}
	vagon &operator= (const vagon &tmp) {
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
	void show(Graphics^ g);
	void move(int dx);
};

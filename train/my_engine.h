#pragma once
#include"my_line.h"
class my_engine {
private:
	my_line left_line, right_line, middle_line;
	int h;
public:
	my_engine(int x = 0, int y = 0, int h = 1);
	my_engine(const my_engine& tmp);
	my_engine &operator=(const my_engine& tmp) {
		left_line = tmp.left_line;
		right_line = tmp.right_line;
		middle_line = tmp.middle_line;
		h = tmp.h;
		return *this;
	}
	void move(int dx) {
		left_line.move(dx, h);
		right_line.move(dx, h);
		middle_line.set_xs(left_line.get_xe());
		middle_line.set_ys(left_line.get_ye());
		middle_line.set_xe(right_line.get_xe());
		middle_line.set_ye(right_line.get_ye());
	}
	void show(Graphics^ g);
};

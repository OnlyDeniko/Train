#include "my_engine.h"

my_engine::my_engine(int x, int y, int h) {
	left_line = my_line(2 * h + x, y + 2 * h, x + 2 * h, y + h, 5);
	right_line = my_line(10 * h + x, y + 2 * h, 10 * h + x, y + h, 5);
	middle_line = my_line(x + 2 * h, y + h, x + 10 * h, y + h, 5);
	this->h = h;
}
my_engine::my_engine(const my_engine& tmp) {
	left_line = tmp.left_line;
	right_line = tmp.right_line;
	middle_line = tmp.middle_line;
	h = tmp.h;
}

void my_engine::show(Graphics^ g) {
	left_line.show(g);
	right_line.show(g);
	middle_line.show(g);
}
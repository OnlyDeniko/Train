#include "my_line.h"

my_line::my_line(double _xs, double _ys, double _xe, double _ye, int _width) {
	xs = _xs;
	ys = _ys;
	xe = _xe;
	ye = _ye;
	width = _width;
}
void my_line::move(int dx) {
	xs += dx;
	xe += dx;
}
void my_line::move(double dx, int h) {
	double X = xe - xs;
	double Y = ye - ys;
	double alpha = (double)(dx / (2 * h));
	double new_X = cos(alpha) * X - sin(alpha) * Y;
	double new_Y = sin(alpha) * X + cos(alpha) * Y;
	//MessageBox::Show(Convert::ToString(new_X));
	new_X -= X;
	new_Y -= Y;
	xs += dx;
	ys += 0;
	xe += dx + new_X;
	ye += new_Y;
}
double my_line::get_xs() {
	return xs;
}
double my_line::get_xe() {
	return xe;
}
double my_line::get_ys() {
	return ys;
}
double my_line::get_ye() {
	return ye;
}
void my_line::set_xs(double x) {
	xs = x;
}
void my_line::set_xe(double x) {
	xe = x;
}
void my_line::set_ys(double x) {
	ys = x;
}
void my_line::set_ye(double x) {
	ye = x;
}
#include "my_wheel.h"

my_wheel::my_wheel(int _x, int _y, int _h) : my_rect(_x, _y, 4 * _h, 4 * _h) {};
void my_wheel::show(Graphics^ g) {
	//HatchBrush^ hbrush = gcnew HatchBrush(HatchStyle::Cross, Color::Purple, Color::Aquamarine);
	SolidBrush^ brush = gcnew SolidBrush(Color::Aquamarine);
	Pen^ pen = gcnew Pen(Color::Black, 5);
	g->FillEllipse(brush, x, y, a, b);
	g->DrawEllipse(pen, x, y, a, b);

}
void my_wheel::move(int dx) {
	x += dx;
}
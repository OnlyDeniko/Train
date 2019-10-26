#include "my_window.h"

my_window::my_window(int _x, int _y, int _h) : my_rect(_x, _y, 2 * _h, 4 * _h) {};

void my_window::show(Graphics^ g) {
	//HatchBrush^ hbrush = gcnew HatchBrush(HatchStyle::Vertical, Color::Purple, Color::Green);
	SolidBrush^ brush = gcnew SolidBrush(Color::Green);
	Pen^ pen = gcnew Pen(Color::Black, 5);
	g->FillRectangle(brush, x, y, a, b);
	g->DrawRectangle(pen, x, y, a, b);
}

void my_window::move(int dx) {
	x += dx;
}


#include "my_door.h"

my_door::my_door(int _x, int _y, int _h) : my_rect(_x, _y, 3 * _h, 7 * _h) {};

void my_door::show(Graphics^ g) {
	//HatchBrush^ hbrush = gcnew HatchBrush(HatchStyle::Horizontal, Color::Chocolate, Color::Red);
	SolidBrush^ brush = gcnew SolidBrush(Color::Red);
	Pen^ pen = gcnew Pen(Color::Black, 5);
	g->FillRectangle(brush, x, y, a, b);
	g->DrawRectangle(pen, x, y, a, b);
}

void my_door::move(int dx) {
	x += dx;
}

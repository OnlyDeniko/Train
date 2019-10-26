#include "my_body.h"

void my_body::show(Graphics^ g) {
	SolidBrush^ brush = gcnew SolidBrush(Color::Yellow);
	Pen^ pen = gcnew Pen(Color::Black, 5);
	g->FillRectangle(brush, x, y, a, b);
	g->DrawRectangle(pen, x, y, a, b);
}

my_body::my_body(int _x, int _y, int h) : my_rect(_x, _y, 14 * h, 10 * h) {};

void my_body::move(int dx) {
	x += dx;
}
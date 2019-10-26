#include "my_trumpet.h"

my_trumpet::my_trumpet(int _x, int _y, int _h) : my_rect(_x, _y, 2 * _h, 4 * _h) {};

void my_trumpet::show(Graphics^ g) {
	HatchBrush^ hbrush = gcnew HatchBrush(HatchStyle::Wave, Color::White, Color::Red);

	Pen^ pen = gcnew Pen(Color::Black, 5);
	g->FillRectangle(hbrush, x, y, a, b);
	g->DrawRectangle(pen, x, y, a, b);

}

void my_trumpet::move(int dx) {
	x += dx;
}
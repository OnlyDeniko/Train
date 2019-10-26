#pragma once
#include"all_library.h"
class my_line {
protected:
	double xs;
	double ys;
	double xe;
	double ye;
	int width;
public:
	my_line(double _xs = 0, double _ys = 0, double _xe = 0, double _ye = 0, int _width = 5);
	void show(Graphics^ g) {
		Pen^ pen = gcnew Pen(Color::Black, width);
		PointF p1 = PointF(xs, ys);
		PointF p2 = PointF(xe, ye);
		g->DrawLine(pen, p1, p2);
	}
	void move(int dx);
	void move(double dx, int h);
	double get_xs();
	double get_xe();
	double get_ys();
	double get_ye();
	void set_xs(double x);
	void set_xe(double x);
	void set_ys(double x);
	void set_ye(double x);
};


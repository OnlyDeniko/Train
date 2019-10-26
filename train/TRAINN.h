#pragma once
#include"locoo.h"
#include"my_chain.h"
#include"vagon.h"
class TRAINN{
private:
	locoo locomotive;
	chain *scepka;
	vagon *tutu;
	int n;
public:
	TRAINN(int x = 0, int y = 0, int h = 0, int n = 0);
	~TRAINN();
	TRAINN(const TRAINN& tmp);
	TRAINN &operator= (const TRAINN& tmp);
	void show(Graphics^ g);
	void move(int dx);
};


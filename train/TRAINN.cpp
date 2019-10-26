#include "TRAINN.h"

TRAINN::TRAINN(int x, int y, int h, int n){
	this->n = n;
	locomotive = locoo(x, y, h);
	tutu = new vagon[n];
	scepka = new chain[n];
	for (int i = 0; i < n; i++) {
		tutu[i] = vagon(x - 16 * (i + 1) * h, y, h);
		int xx = x - 16 * (i + 1) * h;
		scepka[i] = chain(xx + 14 * h, y + 10 * h, h);
	}
}

TRAINN::~TRAINN() {
	delete[]tutu;
	delete[]scepka;
}

TRAINN::TRAINN(const TRAINN & tmp){
	locomotive = tmp.locomotive;
	n = tmp.n;
	for (int i = 0; i < n; i++) {
		tutu[i] = tmp.tutu[i];
		scepka[i] = tmp.scepka[i];
	}
}

TRAINN & TRAINN::operator=(const TRAINN & tmp){
	locomotive = tmp.locomotive;
	n = tmp.n;
	for (int i = 0; i < n; i++) {
		tutu[i] = tmp.tutu[i];
		scepka[i] = tmp.scepka[i];
	}
	return *this;
}

void TRAINN::show(Graphics ^ g){
	locomotive.show(g);
	for (int i = 0; i < n; i++) {
		tutu[i].show(g);
		scepka[i].show(g);
	}
}

void TRAINN::move(int dx){
	locomotive.move(dx);
	for (int i = 0; i < n; i++) {
		tutu[i].move(dx);
		scepka[i].move(dx);
	}
}


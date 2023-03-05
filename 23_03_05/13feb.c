#include <stdio.h>

int vCercaOccorrenze(int v[], int Dim, int n) {
	int c;
	for (c = 0; Dim > 0; Dim--)
		if (v[Dim] == n)
			c++;
	return c;
}


int vReplace(int v[], int Dim, int nDaSostituire, int nSostituzione) {
	int c;
	for (c = 0; Dim > 0; Dim--)
		if (v[Dim] == nDaSostituire) {
			c++;
			nDaSostituire = nSostituzione;
		}
	return c;
}

void vSwap(int v[], int Dim, int p1, int p2) {
	v[p1] += v[p2];
	v[p2] = v[p1] - v[p2];
	v[p1] = v[p1] - v[p2];
}


void vSwap2(int v[], int Dim, int p1, int p2) {
	vReplace(v[], Dim, p1, ((unsigned int)0 - 1));
	vReplace(v[], Dim, p2, p1);
	vReplace(v[], Dim, ((unsigned int)0 - 1), p2);
}

int vSeOrdinato(int v[], int Dim) {
	int i;
	for (i = 0; i < Dim - 1; i++)
		if (v[i] >= v[i + 1])
			return -1;
	return 1;
}
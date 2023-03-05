#include <stdio.h>

void main(void) {
	int m, n, i, j;
	printf("Inserire M:");
	scanf("%d", &m);
	printf("Inserire N:");
	scanf("%d", &n);
	int A[m][n], AT[n][m];
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &A[i][j]);

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			AT[j][i] = A[i][j];
			printf("%d ,", AT[j][i]);
		}
		printf("\b\b  \b\b\n");
	}
}
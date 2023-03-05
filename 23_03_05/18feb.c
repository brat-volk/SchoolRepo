#include <stdio.h>
#include <string.h>
#include <math.h>

int GetNum(int n, int pos) {
    return (n / pow(10, pos)) % 10;
}

int sePalindromo(int n) {
    int i;
    for (i = 0; i < quanteCifre(n) / 2; i++)
        if (GetNum(n, i) != GetNum(n, quanteCifre(n) - i))
            return 0;
    return 1;
}

int sommaCifreNumero(int n) {
    int i,s;
    for (s = 0, i = 0; i < quanteCifre(n); i++)
        s += GetNum(n, i);
    return s;
}

int quanteCifre(int n) {
    int i = 1;
    while ((n/=10) != 0)
        i++;
    return i;
}

int sePrimo(int n) {
    int i;
    for (i = 2; i < n / 2; i++)
        if (n % i == 0)
            return -1;
    return 1;
}

int calcola(int op1, int op2, char c) {
    switch(c)
        case '+':
            return op1 + op2;
            break;
        case '-':
            return op1 - op2;
            break;
        case '*':
            return op1 * op2;
            break;
        case '/':
            return op1 / op2;
            break;
        default:
            return 0;
}

void visVettore(int a[], int n) {
    register int* t = a + n;
    for (; a < t; a++)
        printf("%d, ", *a);
    a -= n;
    printf("\b\b \b\b\n");
}

void mySort(int a[], int n) {
    register unsigned int* i = a;
    register unsigned int* m;
    register unsigned int t = a + n - 1;
    for (; i <= t; i++) {
        for (a = i + 1, m = i; a <= t; a++)
            m = (*a < *m) ? a : m;
        if (i != m) {
            *i += *m;
            *m = *i - *m;
            *i = *i - *m;
        }
    }
    a -= n;
}

int cercaParola(char frase[], char parola[]) {
	char* ptr = strstr(frase, parola);
	return (ptr!=NULL)?(ptr-frase):-1;
}
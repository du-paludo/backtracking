#include <stdio.h>

int testa_soma(int set[], int v[], int n, int b)
{
	int soma = 0;
	for (int i = 0; i < n; i++)
		if (v[i] == 1)
			soma += set[i];
	if (soma < b)
		return 1;
	return 0;
}

void imprime_vetor(int set[], int v[], int n)
{
	for (int i = 0; i < n; i++)
		if (v[i] == 1)
			printf("%d ", set[i]);
	printf("\n");
}

void bt(int set[], int v[], int n, int i, int b)
{
	if (!testa_soma(set, v, i, b))
		return;
	if (i == n)
	{
		imprime_vetor(set, v, n);
		return;
	}
	v[i] = 0;
	bt(set, v, n, i + 1, b);
	v[i] = 1;
	bt(set, v, n, i + 1, b);
}

void subconjuntos(int set[], int n, int b)
{
	int v[n];
	bt(set, v, n, 0, b);
}

int main()
{
	int set[] = {23, 10, 20, 11, 12, 6, 7};
	int n = 7;
	int b;
	scanf("%d", &b);
	subconjuntos(set, n, b);
	return 0;
}
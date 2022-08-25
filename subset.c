#include <stdio.h>

void imprime_vetor(int set[], int v[], int n)
{
	for (int i = 0; i < n; i++)
		if (v[i] == 1)
			printf("%d ", set[i]);
	printf("\n");
}

void bt(int set[], int v[], int n, int i)
{
	if (i == n)
	{
		imprime_vetor(set, v, n);
		return;
	}
	v[i] = 0;
	bt(set, v, n, i + 1);
	v[i] = 1;
	bt(set, v, n, i + 1);
}

void subconjuntos(int set[], int n)
{
	int v[n];
	bt(set, v, n, 0);
}

int main()
{
	int set[] = {23, 10, 20, 11, 12, 6, 7};
	int n = 7;
	subconjuntos(set, n);
	return 0;
}
#include <stdio.h>
#define N 4

void imprime_matriz (int matriz[N][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			printf("%d ", matriz[i][j]);
		printf("\n");
	}
}

int solucao(int maze[N][N], int sol[N][N], int i, int j)
{
	if ((i == N-1) && (j == N-1) && (maze[i][j] == 1))
	{
		sol[i][j] = 1;
		return 1;
	}
	if ((i < N) && (j < N) && (maze[i][j]) == 1)
	{
		sol[i][j] = 1;
		if (solucao(maze, sol, i + 1, j))
			return 1;
		if (solucao(maze, sol, i, j + 1))
			return 1;
		sol[i][j] = 0;
		return 0;
	}
	return 0;
}

int main()
{
	int maze[N][N], sol[N][N];
	int i, j;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			sol[i][j] = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			scanf("%d", &maze[i][j]);
	if (solucao(maze, sol, 0, 0))
		imprime_matriz(sol);;
	return 0;
}
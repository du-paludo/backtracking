#include <stdio.h>  
  
// funcao para imprimir o vetor 
void imprime_vetor(int set[], int v[], int n) { 
    for (int i = 0; i < n; i++)  
        if (v[i]) 
            printf("%d ", set[i]);    
    printf("\n");
} 
  
// funcao para gerar todas strings bin�rias 
void vetores_binarios(int set[], int v[], int n, int i) 
{ 
    if (i == n) { 
        imprime_vetor(set, v, n); 
        return; 
    } 
  
    v[i] = 0; 
    vetores_binarios(set, v, n, i + 1); 
  
    v[i] = 1; 
    vetores_binarios(set, v, n, i + 1); 
} 
  
// imprime_todos_subconjuntos
void todos_subconjuntos(int set[], int n)
{
    int v[n];
    vetores_binarios(set,v,n,0);
}

// Driver Code 
int main() { 
    
    int set[] = {1, 2, 3, 4}; 
    int n = sizeof(set)/sizeof(set[0]);  

    todos_subconjuntos(set, n);	
} 

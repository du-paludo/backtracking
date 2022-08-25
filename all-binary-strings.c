#include <stdio.h>  
  
// funcao para imprimir o vetor 
void imprime_vetor(int v[], int n) { 
    for (int i = 0; i < n; i++)  
        printf("%d ", v[i]);    
    printf("\n");
} 
  
// funcao para gerar todas strings binárias 
void vetores_binarios(int v[], int n, int i) { 
    if (i == n) { 
        imprime_vetor(v, n); 
        return; 
    }   
    for (int k = 0; k <= 2; k++)
    {
        v[i] = k; 
        vetores_binarios(v, n, i + 1);  
    }
} 
  
// funcao main
int main() { 
    int n = 3;  
    int v[n];       
    vetores_binarios(v, n, 0);	
} 

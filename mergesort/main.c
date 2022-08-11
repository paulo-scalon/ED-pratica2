 /* 
    Segunda prova prática de Estrutura de Dados
    Programadores: Paulo Scalon e Rafael Hoffmann
    Data: Agosto de 2022
    Disciplina: Estrutura de Dados
    Professor: Leonardo Medeiros
    Obs: Programa implementa ordenação por mistura(mergesort).
*/

#include "merge.h"

int main(int argc, char **argv)
{
	int *v;

	int tamanho;//=sizeof(vet)/sizeof(int*);
	printf("Digite quantos números serão ordenados:\n");
	scanf("%d",&tamanho);
	v=malloc((tamanho)*sizeof(int));
	if(v==NULL)
	{
		printf("Não foi possivel alocar a memória!");
		exit(1);
	}
	
	for(int i=0;i<tamanho;i++)
	{
		
		printf("Digite o número %d: ",i);
		scanf("%d",&v[i]);
	
	}
	printf("\n");
	for(int i=0;i<tamanho;i++)
	{
		printf(" %d ",v[i]);
	
	}
	printf("\n\n");
	 clock_t begin, end;
	double time_mergesort = 0.0;
    begin = clock();
	mergesort(v,0,tamanho-1,tamanho);
	for(int i=0;i<tamanho;i++)
	{
		printf(" %d ",v[i]);
	
	}
	 end = clock();
    time_mergesort = (float)(((end - begin) + 0.0) / CLOCKS_PER_SEC);
    printf("\nTempo para ordenar utilizando mergesort = %6.6lf\n", time_mergesort);
	free(v);
	
	return 0;
}


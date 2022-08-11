#include "merge.h"

void merge(int *v,int inicio,int meio, int fim,int tamanho){

	int *aux=malloc((tamanho)*sizeof(int));
	for(int i=inicio;i<=fim;i++)
	{
		aux[i]=v[i];
	}
	int i=inicio;
	int j=meio+1;
	int k=inicio;
	
	while(i<=meio && j<=fim)
	{
		if(aux[i]<=aux[j])
		{
			v[k
			] = aux[i];
			i++;
		}
		else
		{
			v[k]=aux[j];
			j++;
		}
		k++;
	}
	while(i<=meio)
	{
		v[k]=aux[i];
		i++;
		k++;
	}
	while(j<=fim)
	{
		v[k]=aux[j];
		j++;
		k++;
	}
	
	free(aux);
	
}

void mergesort(int *v,int inicio, int fim,int tamanho){
	
	if(inicio<fim)
	{
		int meio=(inicio+fim)/2;
		mergesort(v,inicio,meio,tamanho);
		mergesort(v,meio+1,fim,tamanho);
		merge(v,inicio,meio,fim,tamanho);
		
	}
	
}
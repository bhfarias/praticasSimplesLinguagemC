#include <stdio.h>
#include <string.h>

#include "mercado.h"
#include "mercadoProcura_cod.h"

int procura_cod(int* cod, int* itensAdc){
	int quantidadeCompra = 0, aux = 0;

	printf("O codigo pesquisado foi: \t%d", *cod);

	for(int i = 0; i < *itensAdc; i++){
		if(itens[i].codigo == *cod){
			printf("\n|%d - %s|R$%d Quantidade: %d\n\n", itens[i].codigo, itens[i].nome, itens[i].preco, itens[i].quantidade);
			printf("\nQuantidade de itens que deseja comprar:\t");
			fflush(stdout);
			scanf("%d", &quantidadeCompra);

			if(quantidadeCompra <= itens[i].quantidade){
				printf("Valor total da compra: \tR$%d\n", itens[i].preco * quantidadeCompra);
				itens[i].quantidade = itens[i].quantidade - quantidadeCompra;
			}else{
				printf("\nQuantidade inválida!");
			}
			++aux;
		}
	}

	if(aux == 0){
		printf("\nO código digitado não existe!\n");
	}

	return 0;
}

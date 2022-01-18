#include <stdio.h>
#include <string.h>

#include "mercado.h"
#include "mercadoProcura_cod.h"

int mostrar_produtos(int* quantidade_prod, int* itemAdc){

	printf("\n========================\n\n"
			" 1 - Mostrar produtos\n\n");

	if(*(itemAdc) > 0){
		for(int i=0; i < *itemAdc; i++){
			printf("|%d - %s|R$%d Quantidade: %d\n\n", itens[i].codigo, itens[i].nome, itens[i].preco, itens[i].quantidade);
		}
	}else{
		printf("\nNão há nenhum produto no mercado!\n");
	}

	printf("\n========================\n\n");

	return 0;
}

int comprar_produtos(int* quantidade_prod, int* itemAdc){
	int cod = 0;
	int itensAdc = *itemAdc;
	printf("\n========================\n\n"
				" 2 - Comprar Produtos\n");

	if(*(quantidade_prod) > 0){
		printf("\nInsira o código do produto que deseja comprar:\t");
		fflush(stdout);
		scanf("%d", &cod);

		procura_cod(&cod, &itensAdc);
	}else{
		printf("\nNão há nenhum produto cadastrado!\n");
	}

	printf("\n========================\n\n");

	return 0;
}

int inserir_produto(int* quantidade_prod, int* itemAdc){

	printf("\n========================\n\n"
					" 3 - Inserir Produtos\n");

	int total = *(quantidade_prod) + *(itemAdc);

	for(int i = *(itemAdc); i < total; i++){
		getchar();
		printf("\nProduto: \t");
		fflush(stdout);
		fgets(itens[i].nome, 15, stdin);

		printf("Cod: \t");
		fflush(stdout);
		scanf("%d", &itens[i].codigo);

		printf("Preço: \t");
		fflush(stdout);
		scanf("%d", &itens[i].preco);

		printf("Quantidade: \t");
		fflush(stdout);
		scanf("%d", &itens[i].quantidade);

		++*(itemAdc);
	}


	printf("\n========================\n\n");

	return 0;
}

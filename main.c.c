/*
 * 			Crie uma estrutura com os dados:
 * 			- Código (int)
 * 			- Nome (string no máximo 15 letras)
 * 			- Preço (int)
 * 			- Quantidade (int)
 *
 * 			Leia o pedido e verifique se tem o produto.
 * 			Atualize o mercado
 *
 */

#include <stdio.h>
#include <string.h>

#include "mercado.h"
#include "mercadoProcura_cod.h"

int main(){
	int selecao = 0, quantidade_prod = 0, itemAdc = 0;

	while(selecao != -1){
		printf("\n--------Menu Mercado--------\n\n");

		printf("[1] - Mostrar Produtos\n"
				"[2] - Comprar Produto\n"
				"[3] - Inserir Produto\n"
				"[-1] - Sair do mercado\n\n");

		printf("Selecione o item desejado:\t");
		fflush(stdout);
		scanf("%d", &selecao);

		switch(selecao){

		case MOSTRA_PRODUTOS:
			mostrar_produtos(&quantidade_prod, &itemAdc);
			break;

		case COMPRAR_PRODUTOS:
			comprar_produtos(&quantidade_prod, &itemAdc);
			break;

		case INSERIR_PRODUTOS:
			printf("Numero de produtos para inserir:\t");
			fflush(stdout);
			scanf("%d", &quantidade_prod);

			inserir_produto(&quantidade_prod, &itemAdc);
			break;

		case SAIR_MENU:
			printf("Saindo do Menu!\n");
			break;

		default:
			printf("Inválido!");
			break;
		}
	}

	printf("Finalizado!");

	return 0;
}

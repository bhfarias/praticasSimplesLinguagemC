#ifndef MERCADO_H

#define MERCADO_H

enum{
	MOSTRA_PRODUTOS = 1,
	COMPRAR_PRODUTOS = 2,
	INSERIR_PRODUTOS = 3,
	SAIR_MENU = -1
};

struct st_mercado{
	int codigo;
	char nome[15];
	int preco;
	int quantidade;
};

struct st_mercado itens[5];

int mostrar_produtos(int* quantidade_prod, int* itemAdc);

int comprar_produtos(int* quantidade_prod, int* itemAdc);

int inserir_produto(int* quantidade_prod, int* itemAdc);

#endif	//MERCADO_H

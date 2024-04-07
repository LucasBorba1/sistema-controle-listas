//Trabalho M1 - Estruturas de Dados
//Sistema de Controle com Listas
//Aluno: Lucas Carvalho de Borba - 6656927

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

#include "../include/ui/comprar.h"
#include "../include/ui/gerenciar.h"
#include "../include/datastructures/produto.hpp"
#include "../include/datastructures/estoque.hpp"

using namespace std;

int main(void) {

    int input;
    Estoque estoque; 

    do {
        cout << "Selecione a opcao:\n" << endl;
        cout << "0. Sair do programa" << endl;
        cout << "1. Gerenciar loja" << endl;
        cout << "2. Comprar\n" << endl;
        cout << "Input: ";
        cin >> input;

        switch(input) {
            case 0:
                return 0;
            case 1:
                gerenciar(estoque);
                break;
            case 2:
                comprar();
                break;
        }
    } while (1);
}
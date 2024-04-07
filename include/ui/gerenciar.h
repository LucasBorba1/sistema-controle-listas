#include <iostream>
#include "../datastructures/produto.hpp"
#include "../datastructures/estoque.hpp"
#include "novoProduto.h"

void gerenciar(Estoque& estoque) {
    int input;
    do{
        std::cout << "\n\n\n===== Menu Gerenciamento =====\n" << std::endl;
        std::cout << "Selecione a opcao desejada:\n" << std::endl;
        std::cout << "0. Voltar" << std::endl;
        std::cout << "1. Ver lista de produtos" << std::endl;
        std::cout << "2. Adicionar novo produto" << std::endl;
        std::cout << "3. Remover produto" << std::endl;
        std::cout << "4. Pesquisar produto" << std::endl;
        std::cout << "5. Reajustar produto\n" << std::endl;
        std::cout << "Input: ";
        std::cin >> input;

        switch (input) {
            case 1:
                estoque.mostrarEstoque();
                break;
            case 2:
                novoProduto(estoque);
                break;
            case 3: 
                break;
            case 4:
                break;
            case 5:
                break;
        }
        
        
    } while(input !=0); 
}
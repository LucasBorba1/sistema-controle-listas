#include <iostream>
#include <string>

#include "../datastructures/estoque.hpp"


void novoProduto(Estoque& estoque) {
    int input, novaQuantidade;
    std::string novoNome;
    float novoPreco, novoDesconto;

    do {
        std::cout << "\n\n\n===== Cadastrar Novo Produto =====\n" << std::endl;
        std::cout << "Nome do produto: ";
        std::cin >> novoNome;
        std::cout << "Preco unitario: ";
        std::cin >> novoPreco;
        std::cout << "Quantidade em estoque: ";
        std::cin >> novaQuantidade;
        std::cout << "Desconto (decimal): ";
        std::cin >> novoDesconto;

        Produto novoProduto(novoNome, novoPreco, novaQuantidade, novoDesconto);

        bool deuCerto = estoque.inserirFinal(novoProduto);

        std::cout << deuCerto << std::endl;

        std::cout << "\nProduto cadastrado!\n" << std::endl;
        std::cout << "Digite 0 para retornar: ";  

        std::cin >> input;

    } while (input != 0);
}
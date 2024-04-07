#ifndef ESTOQUE_HPP
#define ESTOQUE_HPP
#include <iostream>
#include <string>

#include "./produto.hpp"

struct NoEstoque {
    Produto produto;
    NoEstoque *anterior;
    NoEstoque *proximo;

    NoEstoque(std::string novoNome, float novoPreco, int novaQuantidade, float novoDesconto = 0.0) 
        : produto(novoNome, novoPreco, novaQuantidade, novoDesconto), 
          anterior(nullptr), 
          proximo(nullptr) {}
};

class Estoque {

    private: 
        NoEstoque* comeco;
        NoEstoque* fim;

    public:
        Estoque();

        bool inserirFinal(Produto produto);
        void mostrarEstoque();
        
};

#endif
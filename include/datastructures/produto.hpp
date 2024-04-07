#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <iostream>
#include <string>


class Produto {
    
    private:
        std::string nome;
        float preco;
        int quantidade;
        float desconto;

    public: 
        Produto(std::string novoNome, float novoPreco, int novaQuantidade, float novoDesconto = 0.0);
        
        void setNome(std::string novoNome);
        void setPreco(float novoPreco);
        void setQuantidade(int novaQuantidade);
        void setDesconto(float novoDesconto);
        std::string getNome();
        float getPreco();
        int getQuantidade();
        float getDesconto();
};

#endif
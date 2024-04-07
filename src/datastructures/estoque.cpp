#include "../include/datastructures/estoque.hpp"
#include <iostream>

Estoque::Estoque() : comeco(nullptr), fim(nullptr) {}

bool Estoque::inserirFinal(Produto produto) {
    
    NoEstoque* novoNo = new NoEstoque(produto.getNome(), produto.getPreco(), produto.getQuantidade(), produto.getDesconto());

    if (comeco == nullptr) { // caso a lista esteja vazia, inserir primeiro nó na lista
        comeco = novoNo;
        fim = novoNo;
    } else {
        fim->proximo = novoNo;
        novoNo->anterior = fim;
        fim = novoNo;
    }

    return true;

}

void Estoque::mostrarEstoque() {

    if (comeco != nullptr) {
        NoEstoque* atual = comeco;
        while(atual != nullptr) {
            Produto& prod = atual->produto;

            std::cout << "Nome: " << prod.getNome()
                    << ", Preco: " << prod.getPreco()
                    << ", Quantidade: " << prod.getQuantidade()
                    << ", Desconto: " << prod.getDesconto() * 100 << "%" << std::endl;

            atual = atual->proximo;
        }
    }
}
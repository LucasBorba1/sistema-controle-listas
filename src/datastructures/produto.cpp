#include "../include/datastructures/produto.hpp"

Produto::Produto(std::string novoNome, float novoPreco, int novaQuantidade, float novoDesconto){
    nome = novoNome;
    preco = novoPreco;
    quantidade = novaQuantidade;
    desconto = novoDesconto;
}

void Produto::setNome(std::string novoNome){
    nome = novoNome;
}

void Produto::setPreco(float novoPreco){
    preco = novoPreco;
}

void Produto::setQuantidade(int novaQuantidade) {
    quantidade = novaQuantidade;
}

void Produto::setDesconto(float novoDesconto) {
    desconto = novoDesconto;
}

std::string Produto::getNome() {
    return nome;
}

float Produto::getPreco() {
    return preco;
}

int Produto::getQuantidade() {
    return quantidade;
}

float Produto::getDesconto() {
    return desconto;
}
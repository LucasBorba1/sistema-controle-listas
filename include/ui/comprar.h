#include <iostream>

void comprar(void) {
    int input;
    do{
        std::cout << "\n\n\n===== Menu Compras =====\n" << std::endl;
        std::cout << "Selecione a opcao desejada:\n" << std::endl;
        std::cout << "0. Voltar" << std::endl;
        std::cout << "1. Ver lista de produtos" << std::endl;
        std::cout << "2. Ver carrinho" << std::endl;
        std::cout << "3. Pesquisar produto" << std::endl;
        std::cout << "4. Finalizar compra\n" << std::endl;
        std::cout << "Input: ";
        std::cin >> input;

        switch (input) {
            case 1:
                break;
            case 2:
                break;
            case 3: 
                break;
            case 4:
                break;
        }

    } while(input !=0); 
}
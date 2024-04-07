add_library(datastructures STATIC
    carrinho.cpp
    estoque.cpp
    produto.cpp
    vendas.cpp
)

target_include_directories(datastructures PUBLIC ../../include/datastructures)
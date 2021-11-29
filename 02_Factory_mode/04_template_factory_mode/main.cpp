#include "ConcreteFactory.h"
#include "../Shoes/Shoes.h"
#include "../Shoes/NikeShoes.h"

int main() {
    ConcreteFactory<Shoes, NikeShoes> nikeShoesFactory;
    Shoes *pNikeShoes = nikeShoesFactory.CreateProduct();
    pNikeShoes->Show();
    delete pNikeShoes;
    pNikeShoes = nullptr;

    return 0;
}
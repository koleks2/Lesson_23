#include <iostream>
#include "Inventory.h"

int main() {
    Inventory inv1(3);
    inv1.setItem(0, Item(String("Excalibur"), ItemClass::Weapon));
    inv1.setItem(1, Item(String("Health Potion"), ItemClass::Potion));
    inv1.setItem(2, Item(String("Apple"), ItemClass::Food));

    std::cout << "Original:" << std::endl;
    inv1.print();

    Inventory inv2 = inv1;
    inv2.setItem(0, Item(String("Rust axe"), ItemClass::Weapon));

    std::cout << "Copied:" << std::endl;
    inv2.print();

    std::cout << "Original after copy modification:" << std::endl;
    inv1.print();

}
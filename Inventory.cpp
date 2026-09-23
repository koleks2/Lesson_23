#include "Inventory.h"
#include <iostream>

Inventory::Inventory(int size) {
    this->size = size;
    this->items = new Item[this->size];
}

Inventory::Inventory(const Inventory& other) {
    this->size = other.size;
    this->items = new Item[this->size];
    for (int i = 0; i < this->size; ++i) {
        this->items[i].copyFrom(other.items[i]);
    }
}

void Inventory::setItem(int index, const Item& item) {
    if (index >= 0 && index < size) {
        items[index].copyFrom(item);
    }
}

void Inventory::print() const {
    std::cout << "=== Inventory (" << size << ") ===" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "[" << i << "] ";
        items[i].print();
    }
}
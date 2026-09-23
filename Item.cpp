#include "Item.h"
#include <iostream>

Item::Item() : name("Empty"), type(ItemClass::None) {}

Item::Item(const String& name, ItemClass type) : name(name), type(type) {}

void Item::copyFrom(const Item& other) {
    this->name.copyFrom(other.name);
    this->type = other.type;
}

void Item::print() const {
    const char* typeStr = "None";
    if (type == ItemClass::Weapon) typeStr = "Weapon";
    else if (type == ItemClass::Potion) typeStr = "Potion";
    else if (type == ItemClass::Food) typeStr = "Food";

    std::cout << "Item: " << name.c_str() << " | Type: " << typeStr << std::endl;
}
//
// Created by Angelo on 22/8/2020.
//

#include "PhysicalGames.h"

PhysicalGames::PhysicalGames(){}

PhysicalGames::PhysicalGames(const std::string &name, double price, double tax, double itemWeight, const std::string &productDimensions)
           : Game(name,price,tax), itemWeight(itemWeight),productDimensions(productDimensions) {}

double PhysicalGames::getItemWeight() const {
    return itemWeight;
}

void PhysicalGames::setItemWeight(double _itemWeight) {
    itemWeight = _itemWeight;
}

const std::string &PhysicalGames::getProductDimensions() const {
    return productDimensions;
}

void PhysicalGames::setProductDimensions(const std::string &_productDimensions) {
    productDimensions = _productDimensions;
}

std::string PhysicalGames::ship() {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output<<"This product will have a shipment"<<endl;
    return output.str();
}

std::string PhysicalGames::toString() {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << "Game Name: " << getName()
           << "\nGame type: Physical"
           << "\nItem Weight: " << getItemWeight()
           << "\nProduct Dimensions: " << getProductDimensions()
           << "\nPrice: $" << getPrice()
           << "\nPrice with Tax: $" << calculatePriceWithTax();

    return output.str();
}

double PhysicalGames::discount(){ return getPrice(); }

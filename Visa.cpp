//
// Created by poroshok on 20.11.26.
//

#include "Visa.h"

#include <iostream>

Visa::Visa() = default;

Visa::Visa(std::string country, std::string openingDate, std::string closingDate) : country(country), openingDate(openingDate), closingDate(closingDate) {

}

void Visa::setCountry(const std::string& value) {
    country = value;
}
void Visa::setOpeningDate(const std::string& value) {
    openingDate = value;
}
void Visa::setClosingDate(const std::string& value) {
    closingDate = value;
}

const std::string& Visa::getCountry() const {
    return country;
}
const std::string& Visa::getOpeningDate() const {
    return openingDate;
}
const std::string& Visa::getClosingDate() const {
    return closingDate;
}

void Visa::print() const {
    std::cout << country << " (" << openingDate << " - " << closingDate << ")";
}

//
// Created by poroshok on 20.11.26.
//

#include "ForeignPassport.h"

#include <iostream>

ForeignPassport::ForeignPassport() = default;

ForeignPassport::ForeignPassport(std::string series, std::string number, std::string surname, std::string name,
    std::string patronymic, std::string birthDate, std::string birthPlace, std::string issueDate, std::string issuedBy)
    : Passport(series, number, surname, name, patronymic, birthDate, birthPlace, issueDate, issuedBy, "") {

}

ForeignPassport::ForeignPassport(const Passport& passport) : Passport(passport) {

}

void ForeignPassport::addVisa(const Visa& visa) {
    visas.push_back(visa);
}

void ForeignPassport::removeVisa(std::size_t index) {
    if (index < visas.size()) {
        visas.erase(visas.begin() + static_cast<std::ptrdiff_t>(index));
    }
}

void ForeignPassport::setVisas(const std::vector<Visa>& values) {
    visas = values;
}

const std::vector<Visa>& ForeignPassport::getVisas() const {
    return visas;
}

std::size_t ForeignPassport::getVisaCount() const {
    return visas.size();
}

void ForeignPassport::print() const {
    Passport::print();
    std::cout << "\nForeign passport visas:";
    if (visas.empty()) {
        std::cout << "\n  No visas";
        return;
    }
    for (const Visa& visa : visas) {
        std::cout << "\n  - ";
        visa.print();
    }
}

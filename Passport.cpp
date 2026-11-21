//
// Created by poroshok on 20.11.26.
//

#include "Passport.h"

#include <iostream>

Passport::Passport() = default;

Passport::Passport(std::string series, std::string number,
                   std::string surname, std::string name,
                   std::string patronymic, std::string birthDate,
                   std::string birthPlace, std::string issueDate,
                   std::string issuedBy, std::string registration)
    : series(series), number(number),
      surname(surname), name(name),
      patronymic(patronymic), birthDate(birthDate),
      birthPlace(birthPlace), issueDate(issueDate),
      issuedBy(issuedBy), registration(registration) {}

void Passport::setSeries(const std::string& value) {
    series = value;
}
void Passport::setNumber(const std::string& value) {
    number = value;
}
void Passport::setSurname(const std::string& value) {
    surname = value;
}
void Passport::setName(const std::string& value) {
    name = value;
}
void Passport::setPatronymic(const std::string& value) {
    patronymic = value;
}
void Passport::setBirthDate(const std::string& value) {
    birthDate = value;
}
void Passport::setBirthPlace(const std::string& value) {
    birthPlace = value;
}
void Passport::setIssueDate(const std::string& value) {
    issueDate = value;
}
void Passport::setIssuedBy(const std::string& value) {
    issuedBy = value;
}
void Passport::setRegistration(const std::string& value)
{ registration = value; }

const std::string& Passport::getSeries() const {
    return series;
}
const std::string& Passport::getNumber() const {
    return number;
}
const std::string& Passport::getSurname() const {
    return surname;
}
const std::string& Passport::getName() const {
    return name;
}
const std::string& Passport::getPatronymic() const {
    return patronymic;
}
const std::string& Passport::getBirthDate() const {
    return birthDate;
}
const std::string& Passport::getBirthPlace() const {
    return birthPlace;
}
const std::string& Passport::getIssueDate() const {
    return issueDate;
}
const std::string& Passport::getIssuedBy() const {
    return issuedBy;
}
const std::string& Passport::getRegistration() const {
    return registration;
}

void Passport::print() const {
    std::cout << "Passport:\n"
        << "  Series: " << series << "\n"
        << "  Number: " << number << "\n"
        << "  Surname: " << surname << "\n"
        << "  Name: " << name << "\n"
        << "  Patronymic: " << patronymic << "\n"
        << "  Birth date: " << birthDate << "\n"
        << "  Birth place: " << birthPlace << "\n"
        << "  Issue date: " << issueDate << "\n"
        << "  Issued by: " << issuedBy << "\n"
        << "  Registration: " << registration;
}

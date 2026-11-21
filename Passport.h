//
// Created by poroshok on 20.11.26.
//

#ifndef HW27_PASSPORT_H
#define HW27_PASSPORT_H

#include <iostream>
#include <string>

class Passport {
protected:
    std::string series;
    std::string number;
    std::string surname;
    std::string name;
    std::string patronymic;
    std::string birthDate;
    std::string birthPlace;
    std::string issueDate;
    std::string issuedBy;
    std::string registration;

public:
    Passport();
    Passport(std::string series, std::string number,
             std::string surname, std::string name,
             std::string patronymic, std::string birthDate,
             std::string birthPlace, std::string issueDate,
             std::string issuedBy, std::string registration);

    virtual ~Passport() = default;

    void setSeries(const std::string& value);
    void setNumber(const std::string& value);
    void setSurname(const std::string& value);
    void setName(const std::string& value);
    void setPatronymic(const std::string& value);
    void setBirthDate(const std::string& value);
    void setBirthPlace(const std::string& value);
    void setIssueDate(const std::string& value);
    void setIssuedBy(const std::string& value);
    void setRegistration(const std::string& value);

    const std::string& getSeries() const;
    const std::string& getNumber() const;
    const std::string& getSurname() const;
    const std::string& getName() const;
    const std::string& getPatronymic() const;
    const std::string& getBirthDate() const;
    const std::string& getBirthPlace() const;
    const std::string& getIssueDate() const;
    const std::string& getIssuedBy() const;
    const std::string& getRegistration() const;

    virtual void print() const;
};


#endif //HW27_PASSPORT_H

//
// Created by poroshok on 20.11.26.
//

#ifndef HW27_FOREIGNPASSPORT_H
#define HW27_FOREIGNPASSPORT_H
#include "Passport.h"
#include "Visa.h"
#include <iostream>
#include <vector>

class ForeignPassport : public Passport {
private:
    std::vector<Visa> visas;

public:
    ForeignPassport();
    ForeignPassport(std::string series, std::string number, std::string surname, std::string name, std::string patronymic, std::string birthDate,
        std::string birthPlace, std::string issueDate, std::string issuedBy);
    ForeignPassport(const Passport& passport);

    void addVisa(const Visa& visa);
    void removeVisa(std::size_t index);
    void setVisas(const std::vector<Visa>& values);
    const std::vector<Visa>& getVisas() const;
    std::size_t getVisaCount() const;

    void print() const override;
};


#endif //HW27_FOREIGNPASSPORT_H

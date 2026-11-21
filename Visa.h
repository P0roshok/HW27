//
// Created by poroshok on 20.11.26.
//

#ifndef HW27_VISA_H
#define HW27_VISA_H

#include <iostream>
#include <string>

class Visa {
private:
    std::string country;
    std::string openingDate;
    std::string closingDate;

public:
    Visa();
    Visa(std::string country, std::string openingDate, std::string closingDate);
    void setCountry(const std::string& value);

    void setOpeningDate(const std::string& value);
    void setClosingDate(const std::string& value);

    const std::string& getCountry() const;
    const std::string& getOpeningDate() const;
    const std::string& getClosingDate() const;

    void print() const;
};


#endif //HW27_VISA_H

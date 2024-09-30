#ifndef COUNTRY_H
#define COUNTRY_H

#include <string>

class Country {
public:
    // Pure virtual function
    virtual void displayInfo() const = 0;

    // Virtual destructor
    virtual ~Country() {}
};

#endif

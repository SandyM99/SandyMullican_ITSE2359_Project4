#include <iostream>
#include <vector>
#include "USA.h"
#include "Japan.h"
#include "Syria.h"
#include "Brazil.h"

int main() {
    std::vector<Country*> countries;

    countries.push_back(new USA());
    countries.push_back(new Japan());
    countries.push_back(new Syria());
    countries.push_back(new Brazil());

    for (const auto& country : countries) {
        country->displayInfo();
        std::cout << "-------------------\n";
    }

    for (const auto& country : countries) {
        delete country;
    }

    return 0;
}

#include <iostream>
#include "Passport.h"
#include "ForeignPassport.h"
#include "Visa.h"

using namespace std;

int main() {
    Passport passport(
        "КМ", "123456",
        "Шевченко", "Олександр", "Іванович",
        "15.04.1998", "Київ",
        "10.06.2018", "4713 ДМС України",
        "м. Київ, вул. Хрещатик, 10");

    ForeignPassport foreignPassport(
        "FE", "987654321",
        "Шевченко", "Олександр", "Іванович",
        "15.04.1998", "Київ",
        "20.08.2021", "Державна міграційна служба");

    foreignPassport.setRegistration("м. Київ");
    foreignPassport.addVisa(Visa("Польща", "01.05.2024", "31.10.2024"));
    foreignPassport.addVisa(Visa("Німеччина", "12.09.2025", "12.03.2026"));
 
    cout << "Passport demonstration:\n";
    passport.print();
    cout << "\n\nForeign passport demonstration:\n";
    foreignPassport.print();
    cout << '\n';

    foreignPassport.removeVisa(0);
    cout << "\nAfter removing the first visa:\n";
    foreignPassport.print();
    cout << '\n';

    return 0;
}

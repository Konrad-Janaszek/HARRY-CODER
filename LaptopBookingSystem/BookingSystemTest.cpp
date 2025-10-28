#include <iostream>
#include "BookingSystem.h"

using namespace std;

int main()
{
    //BookingSystem TCDSystem("WIKTOR WIKTOR WIKTOR WIKTOR WIKTOR WIKTOR WIKTOR WIKTOR WIKTOR WIKTOR", 10, 10);
    //TCDSystem.PrintReport();

    //BookingSystem bookingSystemA;
    //bookingSystemA.PrintReport();
    
    BookingSystem bookingSystemB("GamesCon 2022 Laptops", 30, 35);
    for(int i=0;i<5;i++) { bookingSystemB.RentWindowsLaptop();
    bookingSystemB.RentMacBook();
    }
    bookingSystemB.ReturnWindowsLaptop();
    bookingSystemB.addMacBooks(10);
    bookingSystemB.PrintReport();
    

    /*BookingSystem bookingSystemC("Confused Shop", 10, 5); for(int
    i=0;i<20;i++) {
    bookingSystemC.RentWindowsLaptop();
    bookingSystemC.RentMacBook();
    }
    bookingSystemC.ReturnWindowsLaptop();
    bookingSystemC.ReturnMacBook(); bookingSystemC.PrintReport();
    */

    return 0;
}

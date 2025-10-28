#ifndef BOOKINGSYSTEM_H
#define BOOKINGSYSTEM_H

#include <string>

class BookingSystem
{ private:
    std::string name; 
    unsigned int totalWindowsLaptops; 
    unsigned int totalMacBooks; 
    unsigned int availableWindowsLaptops; 
    unsigned int availableMacBooks;
    //int rented_windows_laptops = 0;
    //int rented_macbooks = 0;


public:
    BookingSystem();
    BookingSystem(std::string name, int totalWindowsLaptops, int totalMacBooks);
    
    bool RentWindowsLaptop();
    bool RentMacBook();

    void ReturnWindowsLaptop();
    void ReturnMacBook();
    
    std::string getName() const; 
    unsigned int getTotalWindowsLaptops() const; 
    unsigned int getTotalMacBooks() const;
    
    unsigned int getAvailableWindowsLaptops() const;
    unsigned int getAvailableMacBooks() const;
    unsigned int getAvailableLaptops() const;
    
    unsigned int getRentedWindowsLaptops() const;
    unsigned int getRentedMacBooks() const;
    unsigned int getRentedLaptops() const;
    
    void addWindowsLaptops(unsigned int additionalWindowsLaptops);
    void addMacBooks(unsigned int additionalMacBooks);
    
    void removeWindowsLaptops(unsigned int removedWindowsLaptops);
    void removeMacBooks(unsigned int removedMacBooks);
    
    void PrintReport();
    
};

#endif //BOOKINGSYSTEM_H
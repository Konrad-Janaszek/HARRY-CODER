#include "BookingSystem.h"
#include <string>
#include <iostream>

BookingSystem::BookingSystem()
{
    name = "Trinity Laptop Bookings";
    totalWindowsLaptops = 20;
    totalMacBooks = 20;
    availableWindowsLaptops = totalWindowsLaptops;
    availableMacBooks = totalMacBooks;

    //std::cout << "object created using default constructor" << endl;
}

BookingSystem::BookingSystem(std::string name, int totalWindowsLaptops, int totalMacBooks)
{
    //name.resize(64); // limits the length of name to 64, if a longer string is provided, it is truncated to 64 characters
    //this->name = name; 

    if(name.length() > 64)
        this->name = name.substr(0, 64); // extracts a substring of 64 characters beginning at 0
    else
        this->name = name;
    
    if (totalWindowsLaptops < 0)
    {
        this->totalWindowsLaptops = 0;
        totalWindowsLaptops = 0;
    }
    else
        this->totalWindowsLaptops = totalWindowsLaptops;
    
    if (totalMacBooks < 0)
    {
        this->totalMacBooks = 0;
        totalMacBooks = 0;
    }
    else
        this->totalMacBooks = totalMacBooks;

    availableWindowsLaptops = totalWindowsLaptops;
    availableMacBooks = totalMacBooks;

    //std::cout << name << " has " << totalWindowsLaptops << " Windows Laptops and " << totalMacBooks << " Macbooks";
}

bool BookingSystem::RentWindowsLaptop() // variable type comes first and then we write the function name we are talking about
{ // we also tell it the scope the function belongs to
    if (availableWindowsLaptops > 0)
    {
        availableWindowsLaptops--;
        //rented_windows_laptops++;
        return true;
    }
    else
        return false;
}

bool BookingSystem::RentMacBook()
{
    if (availableMacBooks > 0)
    {
        availableMacBooks--;
        //rented_macbooks++;
        return true;
    }
    else
        return false;
}

void BookingSystem::ReturnWindowsLaptop()
{
    if (availableWindowsLaptops < totalWindowsLaptops)
        availableWindowsLaptops++; // else we don't increase avaiable Windows Laptops
}

void BookingSystem::ReturnMacBook()
{
    if (availableMacBooks < totalMacBooks)
        availableMacBooks++; // else we don't increase avaiable Macbooks as avaialble Macbooks = total Macbooks
}

void BookingSystem::PrintReport()
{
    std::cout << "---------------------" << std::endl;
    std::cout << "Laptop Booking System" << std::endl;
    std::cout << "---------------------" << std::endl;
    std::cout << "Name                      : " << name << std::endl;
    std::cout << "Total Windows Laptops     : " << totalWindowsLaptops << std::endl;
    std::cout << "Total MacBooks            : " << totalMacBooks << std::endl;
    std::cout << "Rented Windows Laptops    : " << totalWindowsLaptops - availableWindowsLaptops << std::endl;
    std::cout << "Rented MacBooks           : " << totalMacBooks - availableMacBooks << std::endl;
    std::cout << "Rented Laptops            : " << totalWindowsLaptops - availableWindowsLaptops + totalMacBooks - availableMacBooks << std::endl;
    std::cout << "Available Windows Laptops : " << availableWindowsLaptops << std::endl;
    std::cout << "Available MacBooks        : " << availableMacBooks << std::endl;
    std::cout << "Available Laptops         : " << availableWindowsLaptops + availableMacBooks << std::endl;
}

std::string BookingSystem::getName() const // getter functions
    {return name;}
unsigned int BookingSystem::getTotalWindowsLaptops() const
    {return totalWindowsLaptops;}
unsigned int BookingSystem::getTotalMacBooks() const
    {return totalMacBooks;}
unsigned int BookingSystem::getAvailableWindowsLaptops() const
    {return availableWindowsLaptops;}
unsigned int BookingSystem::getAvailableMacBooks() const
    {return availableMacBooks;}
unsigned int BookingSystem::getAvailableLaptops() const
    {return availableWindowsLaptops + availableMacBooks;}
unsigned int BookingSystem::getRentedWindowsLaptops() const
    {return totalWindowsLaptops - availableWindowsLaptops;}
unsigned int BookingSystem::getRentedMacBooks() const
    {return totalMacBooks - availableMacBooks;}
unsigned int BookingSystem::getRentedLaptops() const
    {return totalWindowsLaptops - availableWindowsLaptops + totalMacBooks - availableMacBooks;}

void BookingSystem::addWindowsLaptops(unsigned int additionalWindowsLaptops) // functions that let you increase total number of laptops
{
    totalWindowsLaptops = totalWindowsLaptops + additionalWindowsLaptops;
    availableWindowsLaptops = availableWindowsLaptops + additionalWindowsLaptops;
}
void BookingSystem::addMacBooks(unsigned int additionalMacBooks)
{
    totalMacBooks = totalMacBooks + additionalMacBooks;
    availableMacBooks = availableMacBooks + additionalMacBooks;
}

void BookingSystem::removeWindowsLaptops(unsigned int removedWindowsLaptops) // functions that let you decrease total number of laptops
{
    if (availableWindowsLaptops < removedWindowsLaptops)
    {
         totalWindowsLaptops = totalWindowsLaptops - availableWindowsLaptops;
          availableWindowsLaptops = 0;
    }
    else 
    {
        totalWindowsLaptops = totalWindowsLaptops - removedWindowsLaptops;
        availableWindowsLaptops = availableWindowsLaptops - removedWindowsLaptops;
    }
}
void BookingSystem::removeMacBooks(unsigned int removedMacBooks)
{
    if (availableMacBooks < removedMacBooks)
    {
        totalMacBooks = totalMacBooks - availableMacBooks;
        availableMacBooks = 0;
    }
    else 
    {
        totalMacBooks = totalMacBooks - removedMacBooks;
        availableMacBooks = availableMacBooks - removedMacBooks;
    }
}
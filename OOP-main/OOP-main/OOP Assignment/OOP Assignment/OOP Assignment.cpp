// OOP Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

class User {
 public:
     User(std::string name, int age) { _name = name; _age = age; };
     std::string GetName() { return _name; }
     void SetName(std::string name) { _name = name; }
     int GetAge() { return _age; }
     void SetAge(int age) { _age = age; }
     bool isAdult() 
     {
         if (_age >= 18) {
             return true;
         }
         else {
             return false;
         }
     } 
 private:
     std::string _name;
     int _age = 0;
};
class Activity {
public:
    Activity(std::string name, int cost) { _name = name; _cost = cost; };
    std::string GetName() { return _name; }
    void SetName(std::string name) { _name = name; }
    int GetCost() { return _cost; }
    void SetCost(int cost) { _cost = cost; }
private:
    std::string _name;
    int _cost = 0;
};
struct Location {
    std::string name = "";
    int price = 0;
    int mintravel = 0;
};

class Holiday {
private:
    std::string _name;
    Location selectedlocation;
    std::vector <User> users;
    std::vector <Activity> activities;
public:
    void GetName(std::string name) { _name = name; }
    std::string SetName() { return _name; }
    Holiday(std::string name) { _name = name; }
    std::string LocationChoose;
    /*Location(std::string holidaychoice) { _holidaychoice = holidaychoice };*/
    void CreateNewUser() 
    {
        std::string name = "";
        int age = 0;
        std::cout << "What is your name";
        std::cin >> name;
        std::cout << "How old are you";
        std::cin >> age;
        User person = User(name, age);
        users.push_back(person);
        /*std::cout << "Where do you want to go?, 1.Florida, 2.Milan, 3.Tokyo & 4.Paris";
        Location.push_back(selectedlocation);
        if (std::string selectedlocation = 1)
        {
           std::cout << "you have chosen florida";
           for (int Count = 0; Count < ActivityNumber; Count++)
           {

           }
        }
        else if (std::string selectedlocation = 2)
        {
            std::cout << "you have chosen Milan";
        }
        else if (std::string selectedlocation = 3)
        {
            std::cout << "you have chosen Tokyo";
        }
        else if (std::string selectedlocation = 4)
        {
            std::cout << "you have chosen Paris";
        }*/

        std::cout << "Congratulations " << name << " has been added to the Holiday!!!!\n";
    }

};

void HolidaySelect(int familysize,int HolidayPrice)
{
    /*Holiday Selection feature*/
    std::string selectholiday();
    int FloridaNumbers = 1300;
    int ParisNumbers = 600;
    int MilanNumbers = 950;
    int TokyoNumbers = 1800;
    /*std::vector<std::Items>Items;*/
    /*Holiday Destination[6];*/
    std::cout << "where do you want to go?\n";
    int choice;
    do {
        std::cout << "1.Florida\n" << "2.Paris\n" << "3.Milan\n" << "4.Tokyo\n";
        std::cin >> choice;
        switch (choice)
        {
        case 1:
            std::cout << "you have selected Florida\n";
            std::cout << "Florida has a 4 person Limit";
            if (familysize > 4)
            {
                std::cout <<("Sorry too many people in your family to book onto this holiday!");
            }
            else
            {
                HolidayPrice = FloridaNumbers * familysize;
                std::cout << "you need to pay " << HolidayPrice << " for this holiday!\n";

            }
            break;
        case 2:
            std::cout << "you have selected Paris\n";
            std::cout << "Paris has a 2 person Limit\n";
            if (familysize > 2)
            {
                std::cout <<("Sorry too many people in your family to book onto this holiday!\n");
            }
            else
            {
                HolidayPrice = ParisNumbers * familysize;
                std::cout << "you need to pay " << HolidayPrice << " for this holiday!\n";
            }
            //Paris
            break;
        case 3:
            std::cout << "you have selected Milan\n";
            std::cout << "Milan has a 2 person Limit";
            if (familysize > 2)
            {
                std::cout <<("Sorry too many people in your family to book onto this holiday!\n");
            }
            else
            {
                HolidayPrice = MilanNumbers * familysize;
                std::cout << "you need to pay " << HolidayPrice << " for this holiday!\n";
            }
            //Milan
            break;
        case 4:
            std::cout << "you have selected Tokyo\n";
            std::cout << "Tokyo has a 4 person Limit";
            if (familysize > 4)
            {
                std::cout <<("Sorry too many people in your family to book onto this holiday!\n");
            }
            else
            {
                HolidayPrice = TokyoNumbers * familysize;
                std::cout << "you need to pay " << HolidayPrice << " for this holiday!\n";
            }
            //Tokyo
            break;
        default:
            std::cout << "Not a valid Destination\n";
            break;
        }
        break;
    }
    while (choice !=5);
        return;
}
void HolidayAddons(int ActivityPrice, int numberofActivities)
{
    int AddonChoice;
    
    std::cout << "How many Activities do you want?";
    std::cin >> numberofActivities;
        do {

            std::string ThemePark;
            std::string GuidedTours;
            std::string SkyDiving;
    for (int Count = 0; Count <= numberofActivities; Count++)
    {
        
        std::cout << "Which Addons do you want?\n";
        std::cout << "1.Theme Park\n" << "2.Guided Tours\n" << "3.Sky Diving\n";
        std::cin >> AddonChoice;
        switch (AddonChoice)
        {
        case 1:
            std::cout << "Theme Park ADDON Selected\n";

            break;
        case 2:
            std::cout << "Guided Tours ADDON Selected\n";
            break;
        case 3:
            std::cout << "Skydiving ADDON Selected\n";
            break;
        default:
            break;
        }
    }
        } while (AddonChoice != 4);
        return;
    }

int main()
{

    Holiday objHoliday = Holiday("TEST");

    int familysize=0;
    std::string selectHoliday;
    int HolidayPrice=0;
    int ActivityPrice=0;
    int TotalPrice=0;
    int numberofActivities=0;
    std::cout << "Welcome to the Program\n";
    std::cout << "How many people are in your family\n";
    std::cin >> familysize;
    for (int Count = 0; Count < familysize; Count++)
    {
        objHoliday.CreateNewUser();
        
    }    
    HolidaySelect(familysize,HolidayPrice);
    
    HolidayAddons(ActivityPrice, numberofActivities);
    TotalPrice = HolidayPrice + ActivityPrice;
    std::cout << "the total price of the holiday is" << TotalPrice << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

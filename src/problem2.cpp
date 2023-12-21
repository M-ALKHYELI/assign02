
#include <iostream>
#include <string>

struct variables
{
    std::string qualities[31] = {
        "Self-starter",
        "Problem-solver",
        "Expressive",
        "Stable",
        "Flexible",
        "Nurturer",
        "Refined",
        "Successful",
        "Compassionate",
        "Leadership",
        "Intuitive",
        "Creative",
        "Conscientious",
        "Open-minded",
        "Loving",
        "Inquisitive",
        "Independent",
        "Open-hearted",
        "Independent",
        "Cosmic",
        "Social",
        "Creative",
        "Zestful",
        "Balanced",
        "Curious",
        "Innovative",
        "Tolerant",
        "Compassionate leader",
        "Connector",
        "Innovative thinker",
        "Practical and imaginative"
    };

    std::string numerologyMeanings[24] = {
        "Independence and leadership",    // 2000
        "Cooperation and balance",        // 2001
        "Creativity and expression",      // 2002
        "Stability and organization",     // 2003
        "Freedom and adaptability",       // 2004
        "Nurturing and responsibility",   // 2005
        "Analytical and spiritual",       // 2006
        "Ambition and success",           // 2007
        "Compassion and selflessness",    // 2008
        "Independence and leadership",    // 2009
        "Cooperation and balance",        // 2010
        "Creativity and expression",      // 2011
        "Stability and organization",     // 2012
        "Freedom and adaptability",       // 2013
        "Nurturing and responsibility",   // 2014
        "Analytical and spiritual",       // 2015
        "Ambition and success",           // 2016
        "Compassion and selflessness",    // 2017
        "Independence and leadership",    // 2018
        "Cooperation and balance",        // 2019
        "Creativity and expression",      // 2020
        "Stability and organization",     // 2021
        "Freedom and adaptability",       // 2022
        "Nurturing and responsibility",   // 2023
    };
};

int main() {
    std::cout << "Welcome to Birthday Date Meaning Generator!" << std::endl;
    struct variables var;
    char userChoice;

    do {
        std::cout << "Please enter the month of your birthday: ";
        int month;
        std::cin >> month;

        std::cout << "Please enter the day of your birthday: ";
        int day;
        std::cin >> day;

        std::cout << "Please enter the year of your birthday: ";
        int year;
        std::cin >> year;    

        // use the switch statement to distinguish the appropriate response
        switch (month) {
        case 1:
            std::cout << "The month of January means Janus" << std::endl;
            std::cout << "The " << day << " of January means " << var.qualities[day-1] << std::endl;
            std::cout << "The year of " << year << " means that you are " << var.numerologyMeanings[year-2000] << std::endl;
            break;
        case 2:
            std::cout << "The month of February means Februa" << std::endl;
            std::cout << "The " << day << " of February means " << var.qualities[day-1] << std::endl;
            std::cout << "The year of " << year << " means that you are " << var.numerologyMeanings[year-2000] << std::endl;
            break;
        case 3:
            std::cout << "The month of March means Mars" << std::endl;
            std::cout << "The " << day << " of March means " << var.qualities[day-1] << std::endl;
            std::cout << "The year of " << year << " means that you are " << var.numerologyMeanings[year-2000] << std::endl;
            break;
        case 4:
            std::cout << "The month of April means Aphrodite" << std::endl;
            std::cout << "The " << day << " of April means " << var.qualities[day-1] << std::endl;
            std::cout << "The year of " << year << " means that you are " << var.numerologyMeanings[year-2000] << std::
            endl;
            break;
        case 5:
            std::cout << "The month of May means Maia" << std::endl;
            std::cout << "The " << day << " of May means " << var.qualities[day-1] << std::endl;
            std::cout << "The year of " << year << " means that you are " << var.numerologyMeanings[year-2000] << std::
            endl;
            break;
        case 6:
            std::cout << "The month of June means Juno" << std::endl;
            std::cout << "The " << day << " of June means " << var.qualities[day-1] << std::endl;
            std::cout << "The year of " << year << " means that you are " << var.numerologyMeanings[year-2000] << std::
            endl;
            break;
        case 7:
            std::cout << "The month of July means Julius Caesar" << std::endl;
            std::cout << "The " << day << " of July means " << var.qualities[day-1] << std::endl;
            std::cout << "The year of " << year << " means that you are " << var.numerologyMeanings[year-2000] << std::
            endl;
            break;
        case 8:
            std::cout << "The month of August means Augustus Caesar" << std::endl;
            std::cout << "The " << day << " of August means " << var.qualities[day-1] << std::endl;
            std::cout << "The year of " << year << " means that you are " << var.numerologyMeanings[year-2000] << std::
            endl;
            break;
        case 9:
            std::cout << "The month of September means Septem" << std::endl;
            std::cout << "The " << day << " of September means " << var.qualities[day-1] << std::endl;
            std::cout << "The year of " << year << " means that you are " << var.numerologyMeanings[year-2000] << std::
            endl;
            break;
        case 10:
            std::cout << "The month of October means Octo" << std::endl;
            std::cout << "The " << day << " of October means " << var.qualities[day-1] << std::endl;
            std::cout << "The year of " << year << " means that you are " << var.numerologyMeanings[year-2000] << std::
            endl;
            break;
        case 11:
            std::cout << "The month of November means Novem" << std::endl;
            std::cout << "The " << day << " of November means " << var.qualities[day-1] << std::endl;
            std::cout << "The year of " << year << " means that you are " << var.numerologyMeanings[year-2000] << std::
            endl;
            break;
        case 12:
            std::cout << "The month of December means Decem" << std::endl;
            std::cout << "The " << day << " of December means " << var.qualities[day-1] << std::endl;
            std::cout << "The year of " << year << " means that you are " << var.numerologyMeanings[year-2000] << std::
            endl;
            break;
        default:
            std::cout << "Invalid month" << std::endl;
            break;
        }
        std::cout << "Would you like to try another one? (Y/N): ";
        std::cin >> userChoice;
    } while (std::toupper(userChoice) == 'Y');

    std::cout << "Thanks for playing!" << std::endl;

    return 0;
}

#include <iostream>
#include <string>

class Person {
public:
    std::string surname;
    std::string firstName;
    std::string middleName;
    std::string address;
    char gender;
    std::string education;
    int birthYear;

    int getAge(int currentYear) const {
        return currentYear - birthYear;
    }
};

int main() {
    const int currentYear = 2024;

    // Масив об'єктів Person
    const int numPeople = 5;
    Person people[numPeople] = {
        {"Smith", "John", "Doe", "123 Main St", 'M', "Bachelor's", 1980},
        {"Johnson", "Alice", "Mary", "456 Elm St", 'F', "Master's", 1995},
        {"Williams", "Robert", "James", "789 Oak St", 'M', "PhD", 1988},
        {"Brown", "Emily", "Ann", "101 Pine St", 'F', "Bachelor's", 1990},
        {"Jones", "Michael", "David", "555 Maple St", 'M', "Bachelor's", 1975}
    };

    int ageLimit;
    std::cout << "Enter the age limit: ";
    std::cin >> ageLimit;

    std::cout << "People whose age exceeds " << ageLimit << ":" << std::endl;
    for (int i = 0; i < numPeople; ++i) {
        if (people[i].getAge(currentYear) > ageLimit) {
            std::cout << people[i].surname << " " << people[i].firstName << " " << people[i].middleName << std::endl;
        }
    }

    std::cout << "\nPeople with higher education:" << std::endl;
    for (int i = 0; i < numPeople; ++i) {
        if (people[i].education == "Master's" || people[i].education == "PhD") {
            std::cout << people[i].surname << " " << people[i].firstName << " " << people[i].middleName << std::endl;
        }
    }

    std::cout << "\nMale citizens:" << std::endl;
    for (int i = 0; i < numPeople; ++i) {
        if (people[i].gender == 'M') {
            std::cout << people[i].surname << " " << people[i].firstName << " " << people[i].middleName << std::endl;
        }
    }

    return 0;
}

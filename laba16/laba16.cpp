#include <iostream>
#include <string>
#include <vector>

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
    int currentYear = 2024;

    std::vector<Person> people = {
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
    for (const auto& person : people) {
        if (person.getAge(currentYear) > ageLimit) {
            std::cout << person.surname << " " << person.firstName << " " << person.middleName << std::endl;
        }
    }

    std::cout << "\nPeople with higher education:" << std::endl;
    for (const auto& person : people) {
        if (person.education == "Master's" || person.education == "PhD") {
            std::cout << person.surname << " " << person.firstName << " " << person.middleName << std::endl;
        }
    }

    std::cout << "\nMale citizens:" << std::endl;
    for (const auto& person : people) {
        if (person.gender == 'M') {
            std::cout << person.surname << " " << person.firstName << " " << person.middleName << std::endl;
        }
    }

    return 0;
}

//
// Created by felip on 11/8/2020.
//

#ifndef BASIC_00_EXAMPLE_PERSONA_H
#define BASIC_00_EXAMPLE_PERSONA_H
#include <sstream>
#include <iomanip>

class Persona {
    std::string name;
    std::string id;
    int age;

private:
    Persona();
    Persona(std::string name, std::string id, int age);
    std::string getName();
    void setName(std::string name);
    std::string getId();
    void setId(std::string id);
    int getAge();
    void setAge(int age);
    std::string toString()const;
};


#endif //BASIC_00_EXAMPLE_PERSONA_H

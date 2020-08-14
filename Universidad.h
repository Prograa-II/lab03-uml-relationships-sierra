//
// Created by felip on 11/8/2020.
//

#ifndef BASIC_00_EXAMPLE_UNIVERSIDAD_H
#define BASIC_00_EXAMPLE_UNIVERSIDAD_H

#include <iostream>

class Universidad {
    std::string nombre;
public:
    Universidad();
    Universidad(const std::string &nombre);
    virtual ~Universidad();
    std::string getNombre();
    void setNombre(std::string);
};


#endif //BASIC_00_EXAMPLE_UNIVERSIDAD_H

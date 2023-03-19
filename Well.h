//
// Created by Никита Пеканов on 17.03.2023.
//

#ifndef TASK2_NUMBER1_WELL_H
#define TASK2_NUMBER1_WELL_H


#include <string>
#include <iostream>

using namespace std;


class Well {

protected:

    string type;
    int size;
    bool status;

    Well(int size);


public:

    virtual ~Well();

    string &getType();

    int getSize();

    void setSize(int size);

    bool getStatus();

    void setStatus(bool status);

    void printInfo();

    void switchStatus();

};


#endif //TASK2_NUMBER1_WELL_H

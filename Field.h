//
// Created by Никита Пеканов on 18.03.2023.
//

#ifndef TASK2_NUMBER1_FIELD_H
#define TASK2_NUMBER1_FIELD_H


#include <string>
#include <iostream>
#include <vector>
#include "Well.h"


using namespace std;

class Field {

protected:

    vector<Well*> wells;

    int size;
    string type;
    int countWells;

    Field(int size);


public:

    virtual ~Field();

    vector<Well *> &getWells();

    int getSize();

    void setSize(int size);

    string &getType();

    int getCountWells();

    void printInfo();

    virtual void addWell() = 0;

    Well* getOneWell(int index);

    void deleteOneWell(int index);

    void printAllWells();

    vector<Well*>* getAllWells();



};


#endif //TASK2_NUMBER1_FIELD_H

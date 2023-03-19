//
// Created by Никита Пеканов on 18.03.2023.
//

#ifndef TASK2_NUMBER1_CONSOLEUI_H
#define TASK2_NUMBER1_CONSOLEUI_H

#include "Field.h"


class ConsoleUI {

private:

    vector<Field*> fields;


protected:

public:

    void start();

    void showAllFields();

    void addNewField();

    void selectField();

    void editField(Field* field);

    void deleteSelectedField(Field* field, int index);

    void showAllWells(Field* field);

    void addNewWell(Field* field);

    void selectWell(Field* field);

    void editWell(Field* field, Well* well);

    void deleteWell(Field* field, Well* well , int index);









};


#endif //TASK2_NUMBER1_CONSOLEUI_H

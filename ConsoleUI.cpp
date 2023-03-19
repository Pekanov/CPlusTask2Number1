//
// Created by Никита Пеканов on 18.03.2023.
//

#include <iostream>
#include "ConsoleUI.h"
#include "OilField.h"
#include "WaterField.h"
#include "GazField.h"


using namespace std;



void ConsoleUI::start() {
    if(fields.empty()){
        cout << "Вы еще не добавили ни одно месторождение \n";
    }else{
        showAllFields();
    }
    cout << "Введите : "
            "1 - добавить новое месторождение, "
            "2 - выбрать месторождение по индексу, "
            "-1 - завершить программу \n";

    int choose;

    cin >> choose;

    switch (choose) {

        case 1:
            addNewField();
            break;

        case 2:
            selectField();
            break;

        case -1:
            return;

        default:
            cout << "Вы ввели недопустимое значение, поторите попытку \n";
            start();
            break;

    }


}

void ConsoleUI::showAllFields() {
    int i = 0;
    for(Field* field : fields ){
        cout << i << ") ";
        field->printInfo();
        i++;
    }
}

void ConsoleUI::addNewField() {
    int type, size;

    cout << "Введите тип месторождения: 1 - нефтяное  , 2 - газовое  , 3 - водяное \n";
    cin >> type;
    cout << "Введите объем месторождения \n";
    cin >> size;

    switch (type) {

        case 1:
            fields.push_back(new OilField(size));
            break;

        case 2:
            fields.push_back(new GazField(size));
            break;

        case 3:
            fields.push_back(new WaterField(size));
            break;

        default:
            cout << "\n Вы ввели недопустимое значение, поторите попытку \n";
            addNewField();
            break;

    }
    start();
}

void ConsoleUI::selectField() {

    int index, choose;

    cout << "Введите индекс нужного месторождения\n";
    cin >> index;
    Field* field;
    try
    {
        field = fields.at(index);
        field->printInfo();
    }
    catch (out_of_range e)
    {
        cout << "Недопустимый индекс \n";
        selectField();
    }

    cout << "Введите значение: "
            "1 - редактировать выбранное месторождение,  "
            "2 - показать список скважен,  "
            "3 - удалить выбранное месторождение,  "
            "0 - вернуться назад,  "
            "-1 -завершить программу \n";
    cin >> choose;

    switch (choose) {

        case 1:
            editField(field);
            break;

        case 2:
            showAllWells(field);
            break;

        case 3:
            deleteSelectedField(field, index);
            break;

        case 0:
            start();
            break;

        case -1:
            return;

        default:
            cout << "\n Вы ввели недопустимое значение, поторите попытку \n";
            selectField();
            break;
    }


}

void ConsoleUI::editField(Field* field) {
    int choose;
    cout << "Введите значение: "
            "1 - редактировать объем выбранного месторождения,  "
            "0 - вернуться назад,  "
            "-1 -завершить программу \n";    cin >> choose;

    switch (choose) {

        case 1:
            int size;
            cout << "Введите новый объем \n";
            cin >> size;
            field->setSize(size);
            break;

        case 0:
            start();
            break;

        case -1:
            return;

        default:
            cout << "\n Вы ввели недопустимое значение, поторите попытку \n";
            selectField();
            break;
    }

    editField(field);


}

void ConsoleUI::deleteSelectedField(Field* field, int index) {
    fields.erase(fields.begin() + index);
    delete field;
    cout << " \n Field was destroyed" << "\n";
    start();
}

void ConsoleUI::showAllWells(Field* field) {
    if (field->getWells().empty()){
        cout << "Пока что нет скважин\n";
    } else{
        field->printAllWells();
    }

    cout << "Введите : "
            "1 - добавить новую скважину, "
            "2 - выбрать скважину по индексу, "
            "0 - вернуться назад, "
            "-1 - завершить программу \n";

    int choose;

    cin >> choose;

    switch (choose) {

        case 1:
            addNewWell(field);
            break;

        case 2:
            selectWell(field);
            break;

        case 0:
            start();
            break;

        case -1:
            return;

        default:
            cout << "Вы ввели недопустимое значение, поторите попытку \n";
            showAllWells(field);
            break;

    }


}

void ConsoleUI::addNewWell(Field* field) {

    field->addWell();
    showAllWells(field);

}

void ConsoleUI::selectWell(Field* field) {
    int index, choose;

    cout << "Введите индекс нужной скважины\n";
    cin >> index;
    Well* well;
    try
    {
        well = field->getAllWells()->at(index);
        well->printInfo();

    }
    catch (out_of_range e)
    {
        cout << "Недопустимый индекс \n";
        selectField();
    }

    cout << "Введите значение: "
            "1 - редактировать выбранную скважину,  "
            "2 - удалить выбранную скважину,  "
            "0 - вернуться назад,  "
            "-1 -завершить программу \n";
    cin >> choose;

    switch (choose) {

        case 1:
            editWell(field,well);
            break;

        case 2:
            deleteWell(field, well, index);
            break;

        case 0:
            showAllWells(field);
            break;

        case -1:
            return;

        default:
            cout << "\n Вы ввели недопустимое значение, поторите попытку \n";
            selectField();
            break;
    }
}

void ConsoleUI::editWell(Field* field,Well* well) {
    int choose;
    cout << "Введите значение: "
            "1 - редактировать добывающий объем выбранной скважины,  "
            "2 - вкл/выключить скважину,  "
            "0 - вернуться назад,  "
            "-1 -завершить программу \n";    cin >> choose;

    switch (choose) {

        case 1:
            int size;
            cout << "Введите новый объем \n";
            cin >> size;
            well->setSize(size);
            break;

        case 2:
            well->switchStatus();

        case 0:
            showAllWells(field);
            break;

        case -1:
            return;

        default:
            cout << "\n Вы ввели недопустимое значение, поторите попытку \n";
            editField(field);
            break;
    }

    editField(field);
}

void ConsoleUI::deleteWell(Field* field ,Well* well, int index) {
    field->getAllWells()->erase(field->getAllWells()->begin() + index);
    delete well;
    cout << " \n Well was destroyed" << "\n";
    showAllWells(field);
}

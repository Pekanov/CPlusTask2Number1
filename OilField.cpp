//
// Created by Никита Пеканов on 18.03.2023.
//

#include "OilField.h"
#include "OilWell.h"

OilField::OilField(int size) : Field(size) {
    this->type = "Oil";
    this->countWells = 0;
}

void OilField::addWell() {
    Well *newWell = new OilWell(0);
    this->wells.push_back(newWell);
    this->countWells++;
    cout << "new Oil Wel was added! \n";

}
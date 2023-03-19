//
// Created by Никита Пеканов on 18.03.2023.
//

#include "GazField.h"
#include "GazWell.h"

GazField::GazField(int size) : Field(size) {
    this->type = "Gaz";
    this->countWells = 0;
}

void GazField::addWell() {
    Well* newWell = new GazWell(0);
    this->wells.push_back(newWell);
    this->countWells++;
    cout << "new Gaz Wel was added! \n";

}

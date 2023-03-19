//
// Created by Никита Пеканов on 18.03.2023.
//

#include "WaterField.h"
#include "WaterWell.h"

WaterField::WaterField(int size) : Field(size) {
    this->type = "Water";
    this->countWells = 0;
}

void WaterField::addWell() {
    Well *newWell = new WaterWell(0);
    this->wells.push_back(newWell);
    this->countWells++;
    cout << "new Water Wel was added! \n";

}

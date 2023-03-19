//
// Created by Никита Пеканов on 18.03.2023.
//

#include "OilWell.h"

OilWell::OilWell(int size) : Well(size) {
    this->type = "Oil";
    this->status = true;
}




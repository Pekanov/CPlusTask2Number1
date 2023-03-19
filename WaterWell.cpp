//
// Created by Никита Пеканов on 18.03.2023.
//

#include "WaterWell.h"

WaterWell::WaterWell(int size) : Well(size) {
    this->type = "Gaz";
    this->status = true;
}
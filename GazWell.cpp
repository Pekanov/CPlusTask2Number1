//
// Created by Никита Пеканов on 18.03.2023.
//

#include "GazWell.h"

GazWell::GazWell(int size) : Well(size) {
    this->type = "Gaz";
    this->status = true;
}

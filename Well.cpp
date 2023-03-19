//
// Created by Никита Пеканов on 17.03.2023.
//

#include "Well.h"


Well::Well(int size) {
    this->size = size;
    status = true;
}

Well::~Well() {

}

string &Well::getType() {
    return type;
}

int Well::getSize() {
    return size;
}

void Well::setSize(int size) {
    this->size=size;
}

bool Well::getStatus() {
    return status;
}

void Well::setStatus(bool status) {
    this->status = status;
}

void Well::switchStatus() {
    this->status = !status;
}

void Well::printInfo() {
    cout << "Well type - " << type << " ; Well size - " << size << " ; Well status - " << status << "\n";
}

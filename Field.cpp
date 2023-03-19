//
// Created by Никита Пеканов on 18.03.2023.
//

#include "Field.h"



Field::Field(int size){
    if(size > 0 & size < 99999){
        this->size = size;
    } else{
        this->size = 0;
    }
}


Field::~Field() {

}

vector<Well *> &Field::getWells(){
    return wells;
}



int Field::getSize()  {
    return size;
}

void Field::setSize(int size) {
    Field::size = size;
}

string &Field::getType()  {
    return type;
}

int Field::getCountWells() {
    return countWells;
}

void Field::printInfo() {
    cout << "Field type - " << type << "; Field size - " << size << " ; Field wells count - " << countWells << "\n";

}

Well *Field::getOneWell(int index) {

}

void Field::deleteOneWell(int index) {

}

void Field::printAllWells() {
    int i = 0;
    for (Well* well : wells) {
        cout << i << ") ";
        well->printInfo();
        i++;
    }
}

vector<Well *> *Field::getAllWells() {
    return &wells;
}









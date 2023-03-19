//
// Created by Никита Пеканов on 18.03.2023.
//

#ifndef TASK2_NUMBER1_GAZFIELD_H
#define TASK2_NUMBER1_GAZFIELD_H


#include "Field.h"

class GazField : public Field {

public:
    GazField(int size);

    void addWell() override;


};


#endif //TASK2_NUMBER1_GAZFIELD_H

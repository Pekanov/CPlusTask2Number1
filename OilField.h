//
// Created by Никита Пеканов on 18.03.2023.
//

#ifndef TASK2_NUMBER1_OILFIELD_H
#define TASK2_NUMBER1_OILFIELD_H


#include "Field.h"
#include "GazWell.h"


class OilField : public Field {

public:
    OilField(int size);

    void addWell() override;


};


#endif //TASK2_NUMBER1_OILFIELD_H

//
// Created by Никита Пеканов on 18.03.2023.
//

#ifndef TASK2_NUMBER1_WATERFIELD_H
#define TASK2_NUMBER1_WATERFIELD_H


#include "Field.h"

class WaterField : public Field{

public:
    WaterField(int size);

    void addWell() override;


};


#endif //TASK2_NUMBER1_WATERFIELD_H

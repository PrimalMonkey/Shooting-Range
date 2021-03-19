#include "Plate.h"

Plate::Plate()
{

}

bool Plate::IsPlate()
{
    bool flag = false;
    for (int i = Type1; i <= Type2; i++)
    {
        if (type == i)
            return true;
    }
    return false;
}
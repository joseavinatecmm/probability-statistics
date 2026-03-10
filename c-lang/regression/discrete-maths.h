#include "data-set.h"

int sumX(_dataset data)
{
    int totalSumX = 0;

    for (int i = 0; i < SIZE; i++)
        totalSumX = totalSumX + data.x[i];
    return totalSumX;
}

int sumY(_dataset data)
{
    int totalSumY = 0;

    for (int i = 0; i < SIZE; i++)
        totalSumY = totalSumY + data.y[i];
    return totalSumY;
}


int sumXY(_dataset data)
{
    int totalSumXY = 0;

    for (int i = 0; i < SIZE; i++)
        totalSumXY = totalSumXY + (data.x[i] * data.y[i]);
    return totalSumXY;
}



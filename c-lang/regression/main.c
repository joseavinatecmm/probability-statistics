#include "data-set.h"
#include "discrete-maths.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
    _dataset data = {
        .x = {1,1,1,1,1},
        .y = {3,3,3,3,3}    
    };

    printf("x[%i] = %i\n", 0, data.x[0]);
    printf("y[%i] = %i\n", 0, data.y[0]);

    printf("totalSumX = %i\n", sumX(data));
    printf("totalSumY = %i\n", sumY(data));
    printf("totalSumXY = %i\n", sumXY(data));

    return EXIT_SUCCESS;
}


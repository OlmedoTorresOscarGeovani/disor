#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Celulas.h"

using namespace std;

int main()
{
    Celulas c(20,12);
    srand(time(NULL));

    int opcion=1+rand()%((4-1)+1);;
    
    c.start(opcion);
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

enum day {pazar=1, sali, carsamba, persembe, cuma, cumartesi};
int main()
{
    enum day d = persembe;
    printf("d'nin g�sterdigi gun: %d", d);
    return;


}

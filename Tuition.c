#include <stdio.h>

int main()
{

    int tuition, prov, partial, full, paid;
    tuition = 2500000;
    prov = (0.1*tuition);
    partial = (0.5*tuition);
    full = (tuition);
    paid = 500000;

    printf("Tuition reg bar %d\n", tuition);
    printf("Provisional reg bar %d\n", prov);
    printf("Paid reg bar %d\n", paid);
    printf("Partial reg bar %d\n", partial);

    if(paid>=full)
    {
        printf("FULL REGISTRATION\n");
    }
    else if (paid>=partial)
    {
        printf("PARTIAL REGISTRATION\n");
    }
    else if ((paid>=prov) || (paid<partial))
    {
        printf("PROVISIONAL REGISTRATION\n");
    }
    else
    {
        printf("CANT REGISTER\n");

    }
    


}
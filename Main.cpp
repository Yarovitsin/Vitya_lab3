#include "Car.h"
int main() {
    int y = 10;
    car Toyta;
    car Mers;
    car audi(y);
    printf("Rashod no 100 km: %f\n", Toyta.na_sto_km());
    printf("Rashod no 100 km Mers + Toyta: %f", Toyta + Mers);
};

#include "Car.h"
car::car() {
    printf("vvedite kolichestvo topliva:");
    scanf("%f", &toplivo);
    while (toplivo == 0) {
        printf("3apravte mashiny\n");
        printf("vvedite kolichestvo topliva:");
        scanf("%f", &toplivo);
    }
    printf("Vvedite skolko km:");
    scanf("%f", &km);
};

float car::na_sto_km() {
    float a = 0;
    a = (toplivo / km) * 100;
    return a;
};

float car::operator+(car M) {
    float b = 0;
    b = na_sto_km() + M.na_sto_km();
    return b;
}

car::car(int y) {
    printf("alena top: %d", y);
}

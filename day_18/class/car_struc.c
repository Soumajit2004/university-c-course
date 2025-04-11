#include <stdio.h>

struct Car {
    char name[20];
    int model_no;
    int price;
};

int main() {
    
    struct Car miata = {.name="Mazda Miata", .model_no=10034, .price=20000};
    struct Car modelS = {.name="Tesla Model S", .model_no=10035, .price=80000};
    struct Car dogeDeamon = {.name="Doge Deamon", .model_no=10036, .price=30000};
    struct Car hondaCivic = {.name="Honda Civic", .model_no=10037, .price=25000};
    struct Car toyotaCorolla = {.name="Toyota Corolla", .model_no=10038, .price=22000};
    
   struct Car cars[] = {miata, modelS, dogeDeamon, hondaCivic, toyotaCorolla};

    struct Car maxPriceCar = cars[0];
    for (int i = 1; i < sizeof(cars)/sizeof(cars[0]); i++) {
        if (cars[i].price > maxPriceCar.price) {
            maxPriceCar = cars[i];
        }
    }
    printf("Car with maximum price: %s, Model No: %d, Price: %d\n", maxPriceCar.name, maxPriceCar.model_no, maxPriceCar.price);

    return 0;
}
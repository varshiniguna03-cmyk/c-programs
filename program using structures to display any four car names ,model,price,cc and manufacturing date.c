#include <stdio.h>

// Nested structure for manufacturing date
struct Date {
    int day;
    int month;
    int year;
};

// Structure for car details
struct Car {
    char name[30];
    char model[30];
    float price;   // in lakhs
    int cc;
    struct Date mfg_date;   // nested structure
};

int main() {
    struct Car cars[4] = {
        {"Tata Nexon", "XZ Plus", 12.50, 1497, {15, 6, 2023}},
        {"Hyundai Creta", "SX", 14.20, 1493, {10, 3, 2024}},
        {"Maruti Swift", "ZXi", 8.75, 1197, {25, 11, 2022}},
        {"Kia Seltos", "HTX", 15.90, 1497, {5, 8, 2023}}
    };

    printf("---- CAR DETAILS ----\n\n");

    for (int i = 0; i < 4; i++) {
        printf("Car %d Details:\n", i + 1);
        printf("Name            : %s\n", cars[i].name);
        printf("Model           : %s\n", cars[i].model);
        printf("Price           : %.2f Lakhs\n", cars[i].price);
        printf("Engine Capacity : %d CC\n", cars[i].cc);
        printf("Manufacturing Date : %02d-%02d-%d\n\n",
               cars[i].mfg_date.day,
               cars[i].mfg_date.month,
               cars[i].mfg_date.year);
    }

    return 0;
}

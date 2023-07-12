#include <stdio.h>

int main() {
    int customerId, unit;
    char name[30];
    float totalAmount, chargePerUnit, surcharge = 0.0;

    printf("Enter Customer ID: ");
    scanf("%d", &customerId);

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Unit Consumed: ");
    scanf("%d", &unit);

    if(unit <= 199) {
        chargePerUnit = 1.20;
    }
    else if(unit >= 200 && unit < 400) {
        chargePerUnit = 1.50;
    }
    else if(unit >= 400 && unit < 600) {
        chargePerUnit = 1.80;
    }
    else {
        chargePerUnit = 2.00;
    }

    totalAmount = unit * chargePerUnit;

    if(totalAmount > 400.00) {
        surcharge = totalAmount * 0.15;
    }

    totalAmount += surcharge;

    if(totalAmount < 100.00) {
        totalAmount = 100.00;
    }

    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customerId);
    printf("Customer Name: %s\n", name);
    printf("Unit Consumed: %d\n", unit);
    printf("Charge per unit: Rs. %.2f\n", chargePerUnit);
    printf("Surcharge amount: Rs. %.2f\n", surcharge);
    printf("Total amount: Rs. %.2f\n", totalAmount);

    return 0;
}


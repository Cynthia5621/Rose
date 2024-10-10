#include <stdio.h>

int main() {
    int CustomerID;
    char CustomerName[20];
    float UnitConsumed;
    float Bill;
    float Charge_Per_Unit = 0;  // Initialize charge per unit
    float Surcharge = 0;
    float Total_Amount;

    // Input Customer Details
    printf("Enter CustomerID: ");
    scanf("%d", &CustomerID);

    printf("Enter CustomerName: ");
    scanf("%s", CustomerName);

    printf("Enter UnitConsumed: ");
    scanf("%f", &UnitConsumed);

    // Display Customer Details
    printf("CustomerID : %d\n", CustomerID);
    printf("CustomerName : %s\n", CustomerName);
    printf("UnitConsumed : %.2f\n", UnitConsumed);

    // Determine charge per unit based on UnitConsumed
    if (UnitConsumed < 200) {
        Charge_Per_Unit = 1.20;
    } else if (UnitConsumed >= 200 && UnitConsumed < 400) {
        Charge_Per_Unit = 1.50;
    } else if (UnitConsumed >= 400 && UnitConsumed < 600) {
        Charge_Per_Unit = 2.00;
    } else {
        Charge_Per_Unit = 2.50;  // Add condition for 600+ units
    }

    // Calculate the bill
    Bill = UnitConsumed * Charge_Per_Unit;
    printf("Total Bill: %.2f\n", Bill);

    // Calculate surcharge if applicable
    if (Bill > 400) {
        Surcharge = Bill * 0.15;
    }

    printf("Surcharge: %.2f\n", Surcharge);

    // Calculate total amount
    Total_Amount = Bill + Surcharge;
    printf("Total Amount: %.2f\n", Total_Amount);

    return 0;
}

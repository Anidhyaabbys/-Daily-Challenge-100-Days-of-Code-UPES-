#include <stdio.h>

int main() {
    float costPrice, sellingPrice, difference;

    printf("Enter the cost price: ");
    
    scanf("%f", &costPrice);

    printf("Enter the selling price: ");

    scanf("%f", &sellingPrice);
    difference = sellingPrice - costPrice;

    if (difference > 0) {
        float profitPercentage = (difference / costPrice) * 100;
        printf("Profit: %.2f\n", difference);
        printf("Profit Percentage: %.2f%%\n", profitPercentage);
    } else if (difference < 0) {
        float lossPercentage = (-difference / costPrice) * 100;
        printf("Loss: %.2f\n", -difference);
        printf("Loss Percentage: %.2f%%\n", lossPercentage);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
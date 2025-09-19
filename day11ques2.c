#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitOrLoss, percentage;

   
    printf("Enter the Cost Price: ");
    scanf("%f", &costPrice);

    printf("Enter the Selling Price: ");
    scanf("%f", &sellingPrice);

    if (sellingPrice > costPrice) {
        // Profit
        profitOrLoss = sellingPrice - costPrice;
        percentage = (profitOrLoss / costPrice) * 100;
        printf("Profit = %.2f\n", profitOrLoss);
        printf("Profit Percentage = %.2f%%\n", percentage);
    } else if (costPrice > sellingPrice) {
        // Loss
        profitOrLoss = costPrice - sellingPrice;
        percentage = (profitOrLoss / costPrice) * 100;
        printf("Loss = %.2f\n", profitOrLoss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    } else {
        // No profit no loss
        printf("No Profit, No Loss.\n");
    }

    return 0;
}

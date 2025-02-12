#include <stdio.h>

void calculateChange(int amount) {
    int Thai_currency[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    const char *labels[] = {
        "One thousand banknote",
        "Five hundred banknote",
        "One hundred banknote",
        "Fifty banknote",
        "Twenty banknote",
        "Ten coins",
        "Five coins",
        "Two coins",
        "One coins"
    };

    printf("---------------------------------------------\n");
    printf("%d Bath in Thai you will get:\n\n", amount);

    for (int i = 0; i < 9; i++) {
        int count = amount / Thai_currency[i];
        amount %= Thai_currency[i];
        printf("%d %s\n", count, labels[i]);
    }

    printf("***************THANK YOU****************\n");
}

int main() {
    int amount;

    printf("Enter a whole number from 1 to 100000: ");
    scanf("%d", &amount);

    if (amount >= 1 && amount <= 100000) {
        calculateChange(amount);
    } else {
        printf("Please enter a valid amount between 1 and 100000.\n");
    }

    return 0;
}
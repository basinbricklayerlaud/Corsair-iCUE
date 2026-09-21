#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int quantity;
    double price;
} Product;

void printProduct(Product product) {
    printf("%-15s | %3d units | $%.2f | $%.2f\n",
           product.name,
           product.quantity,
           product.price,
           product.quantity * product.price);
}

int main() {
    Product products[] = {
        {"Laptop", 5, 899.99},
        {"Keyboard", 12, 79.50},
        {"Mouse", 20, 39.99},
        {"Monitor", 8, 249.99}
    };

    int count = sizeof(products) / sizeof(products[0]);
    double total = 0.0;

    printf("Inventory Report\n");
    printf("================\n");

    for (int i = 0; i < count; i++) {
        printProduct(products[i]);
        total += products[i].quantity * products[i].price;
    }

    printf("================\n");
    printf("Products: %d\n", count);
    printf("Total Value: $%.2f\n", total);

    return 0;
}
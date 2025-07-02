#include <stdio.h>
#include <string.h>

struct Product {
    int id;
    char name[30];
    int quantity;
    float price;
};

struct Product products[100];
int n = 0;

void addProduct() {
    printf("Enter Product ID: ");
    scanf("%d", &products[n].id);
    printf("Enter Product Name: ");
    scanf("%s", products[n].name);
    printf("Enter Quantity: ");
    scanf("%d", &products[n].quantity);
    printf("Enter Price: ");
    scanf("%f", &products[n].price);
    n++;
}

void updateQuantity() {
    int id, quantity, i;
    printf("Enter Product ID to update: ");
    scanf("%d", &id);
    printf("Enter new Quantity: ");
    scanf("%d", &quantity);
    
    for (i = 0; i < n; i++) {
        if (products[i].id == id) {
            products[i].quantity = quantity;
            printf("Quantity updated.\n");
            return;
        }
    }
    printf("Product not found.\n");
}

void displayInventory() {
    int i;
    float totalValue = 0;
    printf("\nInventory:\n");
    for (i = 0; i < n; i++) {
        printf("ID: %d, Name: %s, Quantity: %d, Price: %.2f\n", 
               products[i].id, products[i].name, products[i].quantity, products[i].price);
        totalValue += products[i].quantity * products[i].price;
    }
    printf("Total value of stock: %.2f\n", totalValue);
}

void searchProduct() {
    int id, i;
    printf("Enter Product ID to search: ");
    scanf("%d", &id);
    
    for (i = 0; i < n; i++) {
        if (products[i].id == id) {
            printf("ID: %d, Name: %s, Quantity: %d, Price: %.2f\n", 
                   products[i].id, products[i].name, products[i].quantity, products[i].price);
            return;
        }
    }
    printf("Product not found.\n");
}

int main() {
    int choice;
    
    while (1) {
        printf("\n 1. Add Product\n 2. Update Quantity\n 3. Display Inventory\n 4. Search Product\n 5. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: addProduct(); break;
            case 2: updateQuantity(); break;
            case 3: displayInventory(); break;
            case 4: searchProduct(); break;
            case 5: return 0;
            default: printf("Invalid choice.\n");
        }
    }
}

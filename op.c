#include <stdio.h>
#include <string.h>

struct Product {
    int id;
    char name[30];
    int quantity;
    float price;
};

void addProduct(struct Product products[], int *numProducts) {
    printf("Enter Product ID: ");
    scanf("%d", &products[*numProducts].id);
    printf("Enter Product Name: ");
    scanf("%s", products[*numProducts].name);
    printf("Enter Quantity: ");
    scanf("%d", &products[*numProducts].quantity);
    printf("Enter Price: ");
    scanf("%f", &products[*numProducts].price);
    (*numProducts)++;
}

void updateQuantity(struct Product products[], int numProducts) {
    int id, quantity, i;
    printf("Enter Product ID to update: ");
    scanf("%d", &id);
    printf("Enter new Quantity: ");
    scanf("%d", &quantity);
    
    for (i = 0; i < numProducts; i++) {
        if (products[i].id == id) {
            products[i].quantity = quantity;
            printf("Quantity updated.\n");
            return;
        }
    }
    printf("Product not found.\n");
}

void displayInventory(struct Product products[], int numProducts) {
    int i;
    float totalValue = 0;
    printf("\nInventory:\n");
    for (i = 0; i < numProducts; i++) {
        printf("ID: %d, Name: %s, Quantity: %d, Price: %.2f\n", 
               products[i].id, products[i].name, products[i].quantity, products[i].price);
        totalValue += products[i].quantity * products[i].price;
    }
    printf("Total value of stock: %.2f\n", totalValue);
}

void searchProduct(struct Product products[], int numProducts) {
    int id, i;
    printf("Enter Product ID to search: ");
    scanf("%d", &id);
    
    for (i = 0; i < numProducts; i++) {
        if (products[i].id == id) {
            printf("ID: %d, Name: %s, Quantity: %d, Price: %.2f\n", 
                   products[i].id, products[i].name, products[i].quantity, products[i].price);
            return;
        }
    }
    printf("Product not found.\n");
}

int main() {
    struct Product products[100];
    int numProducts = 0, choice;
    
    while (1) {
        printf("\n1. Add Product\n2. Update Quantity\n3. Display Inventory\n4. Search Product\n5. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: addProduct(products, &numProducts); break;
            case 2: updateQuantity(products, numProducts); break;
            case 3: displayInventory(products, numProducts); break;
            case 4: searchProduct(products, numProducts); break;
            case 5: return 0;
            default: printf("Invalid choice.\n");
        }
    }
}

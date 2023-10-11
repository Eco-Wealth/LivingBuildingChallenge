#include <stdio.h>
#include <stdbool.h>

// Define a structure for a property
struct Property {
    char name[100];
    char location[100];
    double size;
    double value;
    bool isSustainable;
};

// Function to acquire a property and make it sustainable
void acquireAndMakeSustainable(struct Property* property, double purchasePrice) {
    if (purchasePrice >= property->value) {
        property->isSustainable = true;
        printf("Property '%s' in %s has been acquired and made sustainable.\n", property->name, property->location);
    } else {
        printf("Insufficient funds to acquire the property.\n");
    }
}

int main() {
    // Create a property
    struct Property myProperty;
    strcpy(myProperty.name, "Green Acres");
    strcpy(myProperty.location, "Rural Area");
    myProperty.size = 10.5; // acres
    myProperty.value = 50000.0; // in dollars
    myProperty.isSustainable = false;

    // Display property details
    printf("Property Name: %s\n", myProperty.name);
    printf("Location: %s\n", myProperty.location);
    printf("Size: %.2f acres\n", myProperty.size);
    printf("Property Value: $%.2f\n", myProperty.value);
    printf("Is Sustainable: %s\n", myProperty.isSustainable ? "Yes" : "No");

    // Acquire and make the property sustainable
    double purchasePrice = 55000.0; // Simulated purchase price
    acquireAndMakeSustainable(&myProperty, purchasePrice);

    // Display updated property details
    printf("Updated Property Details:\n");
    printf("Property Name: %s\n", myProperty.name);
    printf("Location: %s\n", myProperty.location);
    printf("Size: %.2f acres\n", myProperty.size);
    printf("Property Value: $%.2f\n", myProperty.value);
    printf("Is Sustainable: %s\n", myProperty.isSustainable ? "Yes" : "No");

    return 0;
}

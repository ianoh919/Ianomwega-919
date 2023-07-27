#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Product class
class Product {
private:
    string name;
    double price;
    int quantity;

public:
    Product(string name, double price, int quantity) {
        this->name = name;
        this->price = price;
        this->quantity = quantity;
    }

    // Getters
    string getName() {
        return name;
    }

    double getPrice() {
        return price;
    }

    int getQuantity() {
        return quantity;
    }

    // Setters
    void setPrice(double price) {
        this->price = price;
    }

    void setQuantity(int quantity) {
        this->quantity = quantity;
    }
};

// Shopping cart class
class ShoppingCart {
private:
    vector<Product> items;

public:
    // Add product to cart
    void addItem(Product item) {
        items.push_back(item);
    }

    // Remove product from cart
    void removeItem(string itemName) {
        for (auto it = items.begin(); it != items.end(); ++it) {
            if (it->getName() == itemName) {
                items.erase(it);
                break;
            }
        }
    }

    // Display all available products
    void displayProducts() {
        cout << "Available products:\n";
        for (const auto& item : items) {
      cout << "Name: " << item.getName() << ", Price: " << item.getPrice() << ", Quantity: " << item.getQuantity() << endl;
        }
    }

    // Calculate total cost of items in cart
    double calculateTotalCost() {
        double totalCost = 0.0;
        for (const auto& item : items) {
            totalCost += item.getPrice() * item.getQuantity();
        }
        return totalCost;
    }
};

int main() {
    ShoppingCart cart;

    // Adding products to the cart
    cart.addItem(Product("Product 1", 10.0, 2));
    cart.addItem(Product("Product 2", 15.0, 3));
    cart.addItem(Product("Product 3", 20.0, 1));

    // Displaying available products
    cart.displayProducts();

    // Calculating total cost
    double totalCost = cart.calculateTotalCost();
    cout << "Total cost: " << totalCost << endl;

    // Removing a product
    cart.removeItem("Product 2");

    // Displaying updated products
    cart.displayProducts();

    return 0;
}

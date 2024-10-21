/*Name:Auti Arti ,DSPS Assigment no.6*/
#include<iostream>
using namespace std;
int n, i;

class PizzaParlor {
public:
    string name;   
    string address; 
    int pizzas;    
    float price;
    float finalPrice;
    float refund;
    int F, R, servedOrders;
    int timePerPizza;  
    int totalTime;     

    PizzaParlor() {
        F = -1;
        R = -1;
        n = 10;  
        servedOrders = 0; 
        timePerPizza = 10;  // Assume 10 minutes per pizza
    }

    void acceptOrder();
    void serveOrder();
    void displayOrders();
    void cancelOrder();
}P[10];

void PizzaParlor::acceptOrder() {
    if ((R == n - 1 && F == 0) || (F == R + 1)) {  
        cout << "Sorry, order can't be placed!" << endl;
        return;
    }

    cout << "Enter customer name, address, number of pizzas: ";
    if (R == -1 && F == -1) {  
        R = 0;
        F = 0;
        cin >> P[R].name >> P[R].address >> P[R].pizzas;
    } else {  
        R = (R + 1) % n;
        cin >> P[R].name >> P[R].address >> P[R].pizzas;
    }

    P[R].price = P[R].pizzas * 200;
    P[R].totalTime = P[R].pizzas * timePerPizza;  // Calculate total time for the order
    cout << "Order accepted!order preparation time: " << P[R].totalTime << " minutes" << endl;
}

void PizzaParlor::serveOrder() {
    if (R == -1 && F == -1) {  
        cout << "No orders to serve." << endl;
        return;
    }

    cout << "\nServing order for: " << P[F].name << endl;
    cout << "Address: " << P[F].address << endl;
    cout << "Number of pizzas: " << P[F].pizzas << endl;

    float discount = 0;
    if (servedOrders == 0) {
        discount = 0.10 * P[F].price;  
        cout << "Congratulations! You got a 10% discount" << endl;
    } else if (servedOrders == 1) {
        discount = 0.05 * P[F].price;  
        cout << "Congratulations! You got a 5% discount" << endl;
    } else if (servedOrders == 2) {
        discount = 0.02 * P[F].price;  
        cout << "Congratulations! You got a 2% discount" << endl;
    }

    finalPrice = P[F].price - discount; 
    cout << "Final price after discount: " << finalPrice << endl;
    cout << "Total preparation time for this order: " << P[F].totalTime << " minutes" << endl;  // Display preparation time

    servedOrders++;

    if (F == R) {  
        F = -1;
        R = -1;
    } else {
        F = (F + 1) % n;
    }
}

void PizzaParlor::displayOrders() {
    if (R == -1 && F == -1) {
        cout << "No orders in the store." << endl;
        return;
    }

    i = F;
    while (i != R) {
        cout << "\n" << P[i].name << "\t" << P[i].address << "\t" << P[i].pizzas;
        i = (i + 1) % n;
    }
    cout << "\n" << P[R].name << "\t" << P[R].address << "\t" << P[R].pizzas << endl;
}

void PizzaParlor::cancelOrder() {
    if (F == -1 && R == -1) {
        cout << "No orders in the store." << endl;
        return;
    }

    float refund = P[F].price * 0.5;  // Calculate the refund amount
    cout << "\nCancelled order is " << P[F].name << "\nRefund amount is " << refund << endl;  // Display refund amount

    if (F == R) {
        F = -1;
        R = -1;
    } else {
        F = (F + 1) % n;
    }
}

int main() {
    PizzaParlor parlor;
    int ch;
    cout << "Enter the number of orders: ";
    cin >> n;

    do {
        cout << "\nMenu:";
        cout << "\n1. Accept Order \n2. Serve Order \n3. Display Orders \n4. Cancel Order \n5. Exit";
        cout << "\nEnter choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                for (i = 0; i < n; i++) {
                    parlor.acceptOrder();
                }
                break;
            case 2:
                parlor.serveOrder();
                break;
            case 3:
                cout << "\nName\tAddress\tOrder" << endl;
                for (i = 0; i < n; i++) {
                    parlor.displayOrders();
                }
                break;
            case 4:
                parlor.cancelOrder();
                break;
            case 5:
                cout << "Exiting... " << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (ch != 5);

    return 0;
}

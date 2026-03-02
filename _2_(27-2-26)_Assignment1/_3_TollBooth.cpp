#include <iostream>
using namespace std;

class TollBooth
{
private:
    int totalVehicles;
    double totalRevenue;

public:
    TollBooth()
    {
        totalVehicles = 0;
        totalRevenue = 0;
    }

    void vehiclePayingToll(double amount)
    {
        totalVehicles++;
        totalRevenue += amount;
    }

    void displayVehicles()
    {
        cout << "Total vehicles: " << totalVehicles << endl;
    }

    void displayRevenue()
    {
        cout << "Total revenue: " << totalRevenue << endl;
    }

    void reset()
    {
        totalVehicles = 0;
        totalRevenue = 0;
        cout << "Data reset.\n";
    }
};

int main()
{
    TollBooth t;
    int choice;

    do
    {
        cout << "\n1. Car (Rs 180)";
        cout << "\n2. Truck (Rs 300)";
        cout << "\n3. Bus (Rs 350)";
        cout << "\n4. Show vehicles";
        cout << "\n5. Show revenue";
        cout << "\n6. Reset";
        cout << "\n7. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
            t.vehiclePayingToll(180);
        else if (choice == 2)
            t.vehiclePayingToll(300);
        else if (choice == 3)
            t.vehiclePayingToll(350);
        else if (choice == 4)
            t.displayVehicles();
        else if (choice == 5)
            t.displayRevenue();
        else if (choice == 6)
            t.reset();

    } while (choice != 7);

    return 0;
}
#include <iostream>

int main() {
    double hours_parked = 4.5;
    double fee_amount = 0;

    if (hours_parked >= 2.0)
    {
        fee_amount = 5.50 * (hours_parked - 2.0);
        
        if (fee_amount > 30.00)
        {
            fee_amount = 30.00;
        }
    }

    std::cout << "Total Parking Fee: " << fee_amount << std::endl;

    return 0;
}
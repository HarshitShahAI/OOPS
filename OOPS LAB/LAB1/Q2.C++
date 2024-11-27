#include <iostream>
using namespace std;

struct Order {
    int miners;
    int toasters;
    int fans;
};

float calculateTotal(Order order) {
    const float minerPrice = 1500;
    const float toasterPrice = 200;
    const float fanPrice = 450;

    const float minerDiscount = 0.05;
    const float toasterDiscount = 0.10;
    const float fanDiscount = 0.15;
    const float salesTax = 0.10;

    float minerCost = order.miners * minerPrice;
    float toasterCost = order.toasters * toasterPrice;
    float fanCost = order.fans * fanPrice;

    float minerDiscounted = minerCost - (minerCost * minerDiscount);
    float toasterDiscounted = toasterCost - (toasterCost * toasterDiscount);
    float fanDiscounted = fanCost - (fanCost * fanDiscount);

    float totalBeforeTax = minerDiscounted + toasterDiscounted + fanDiscounted;
    float totalAfterTax = totalBeforeTax + (totalBeforeTax * salesTax);

    return totalAfterTax;
}

int main() {
    Order order;

    cout << "Enter the number of miners: ";
    cin >> order.miners;
    cout << "Enter the number of toasters: ";
    cin >> order.toasters;
    cout << "Enter the number of fans: ";
    cin >> order.fans;

    float totalAmount = calculateTotal(order);
    cout << "The total amount to be paid by the store is: Rs. " << totalAmount << endl;

    return 0;
}

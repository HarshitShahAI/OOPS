#include <iostream>
using namespace std;

struct Letter {
    float weight;
};

float calculatePostage(Letter letter) {
    float postage = 0.0;

    if (letter.weight <= 50) {
        postage = (letter.weight / 10) * 0.50;
    }
    else if (letter.weight <= 150) {
        postage = 2.5 + ((letter.weight - 50) / 10) * 0.40;
    }
    else if (letter.weight <= 400) {
        postage = 2.5 + 4 + ((letter.weight - 150) / 10) * 0.25;
    }
    else {
        postage = 2.5 + 4 + 6.25 + (letter.weight / 1000) * 25;
    }

    return postage;
}

int main() {
    Letter letter;
    cout << "Enter the weight of the letter in grams: ";
    cin >> letter.weight;

    float postage = calculatePostage(letter);
    cout << "The postage to be paid is: Rs. " << postage << endl;

    return 0;
}

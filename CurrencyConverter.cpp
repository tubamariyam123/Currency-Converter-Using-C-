#include <iostream>
using namespace std;

int main() {
    int choice;
    double amount, converted;

    // Currency rates
    double usd = 0.012; // 💵 US Dollar
    double eur = 0.011; // 💶 Euro
    double gbp = 0.0095; // 💷 British Pound
    double jpy = 1.70;   // 💴 Japanese Yen

    cout << "🌟 Welcome to Simple Currency Converter 🌟" << endl;
    cout << "------------------------------------------" << endl;

    cout << "Please choose a currency to convert your INR 💰 into:\n";
    cout << "1️⃣ USD (United States Dollar)\n";
    cout << "2️⃣ EUR (Euro)\n";
    cout << "3️⃣ GBP (British Pound)\n";
    cout << "4️⃣ JPY (Japanese Yen)\n";
    cout << "5️⃣ Exit ❌\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 5) {
        cout << "🙏 Thank you for using the converter. Goodbye! 👋\n";
        return 0;
    }

    cout << "Enter the amount in INR ₹: ";
    cin >> amount;

    switch (choice) {
        case 1:
            converted = amount * usd;
            cout << "💱 " << amount << " INR = " << converted << " USD 💵" << endl;
            break;
        case 2:
            converted = amount * eur;
            cout << "💱 " << amount << " INR = " << converted << " EUR 💶" << endl;
            break;
        case 3:
            converted = amount * gbp;
            cout << "💱 " << amount << " INR = " << converted << " GBP 💷" << endl;
            break;
        case 4:
            converted = amount * jpy;
            cout << "💱 " << amount << " INR = " << converted << " JPY 💴" << endl;
            break;
        default:
            cout << "⚠️ Invalid choice. Please try again!" << endl;
            break;
    }

    cout << "✅ Conversion complete. Have a great day! ☀️\n";

    return 0;
}

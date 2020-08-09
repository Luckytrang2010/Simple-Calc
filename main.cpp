#include <iostream>
#include <string>
using namespace std;

int main()
{
    int op = 0;
    cout << "Welcome to the simple calculator coded in C++ made by Luckytrang2010/Tangly/4Bytes,\nDiscord: 4Bytes#9688 Choose an option:\n1 - Add\n2 - Subtract\n3 - Multiply\n4 - Divide\nOption: ";
    cin >> op;
    static double result = 0;
    if (op == 1) {
        int a = 0;
        cout << "How many times are you gonna add?: ";
        cin >> a;
        double values[a];
        for (int num = 0; num < a; num++) {
            int b;
            cout << "Enter a value: ";
            cin >> b;
            values[num] = b;
            result = result + b;
        }
        for (int num = 0; num < a; num++) {
            if (num != a-1) {
                cout << values[num] << " + ";
            } else if (num == a-1) {
                cout << values[num];
            }
        }
    } else if (op == 2) {
        int a = 0;
        cout << "How many times are you gonna subtract?: ";
        cin >> a;
        double values[a];
        for (int num = 0; num < a; num++) {
            int ma;
            int b;
            cout << "Enter a value: ";
            if (num != 0) {
                cin >> b;
                values[num] = b;
                result = result - b;
            } else if (num == 0) {
                cin >> ma;
                values[num] = ma;
                result = ma;
            }
        }
        for (int num = 0; num < a; num++) {
            if (num != a-1) {
                cout << values[num] << " - ";
            } else if (num == a-1) {
                cout << values[num];
            }
        }
    } else if (op == 3) {
        int a = 0;
        cout << "How many times are you gonna multiply?: ";
        cin >> a;
        double values[a];
        for (int num = 0; num < a; num++) {
            int b;
            cout << "Enter a value: ";
            if (num == 0) {
                cin >> b;
                values[num] = b;
                result = b;
            } else {
                cin >> b;
                values[num] = b;
                result = result * b;
            }
        }
        for (int num = 0; num < a; num++) {
            if (num != a-1) {
                cout << values[num] << " x ";
            } else if (num == a-1) {
                cout << values[num];
            }
        }
    } else if (op == 4) {
        int a = 0;
        cout << "How many times are you gonna divide?: ";
        cin >> a;
        double values[a];
        for (int num = 0; num < a; num++) {
            int b;
            cout << "Enter a value: ";
            if (num == 0) {
                cin >> b;
                values[num] = b;
                result = b;
            } else {
                cin >> b;
                values[num] = b;
                result = result / b;
            }
        }
        for (int num = 0; num < a; num++) {
            if (num != a-1) {
                cout << values[num] << " / ";
            } else if (num == a-1) {
                cout << values[num];
            }
        }
    }
    int op1 = 0;
    cout << " = " << result;
    cout << "\nWould you like to run calculator again?\n0 - No\n1 - Yes\nOption: ";
    cin >> op1;
    if (op1 == 1) {
        main();
    }
}

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n; 
    cin >> n;

    while (n--) {
        int p; 
        cin >> p;

        string most_expensive_player; 
        int max_price = 0; 

        for (int i = 0; i < p; i++) {
            int price;
            string name;

            cin >> price >> name;

            if (price > max_price) {
                max_price = price;
                most_expensive_player = name;
            }
        }

        cout << most_expensive_player << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <unistd.h>

using namespace std;

int main() {
    const int width = 80;
    const int height = 25;

    vector<int> drops(width, 0);

    srand(time(0));

    while (true) {
        cout << "\033[2J\033[1;1H"; // Clear screen

        for (int i = 0; i < width; i++) {
            if (rand() % 20 == 0) {
                drops[i] = 0;
            }
        }

        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                if (drops[x] == y) {
                    cout << "\033[1;32m" << (char)(33 + rand() % 94) << "\033[0m";
                } else if (drops[x] > y && drops[x] - y < 5) {
                    cout << "\033[0;32m" << (char)(33 + rand() % 94) << "\033[0m";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }

        for (int i = 0; i < width; i++) {
            drops[i]++;
            if (drops[i] > height) {
                drops[i] = 0;
            }
        }

        usleep(50000);
    }

    return 0;
}
#include <iostream>
#include <string>
#include <algorithm> // For std::next_permutation

using namespace std;

bool check(int order[], string blocks[]) {
    int g = 0;
    string leters[8] = { "a", "b", "c", "d", "e", "f", "g", "h" };
    while (g < 8) {
        if (blocks[order[g]].find(leters[g]) == -1) {
            return false;
        }
        g++;
    }
    return true;
}

int main() {
    int i = 0;
    string le[8] = { "a", "b", "c", "d", "e", "f", "g", "h" };
    string classes[8];
    string blocks[8];
    int order[8] = { 0, 1, 2, 3, 4, 5, 6, 7 };
    int combos[8][100] = { 0 };  // Initialize with zero
    string letcom[8][100];  // Increase size if more combinations are expected

    // Input loop
    while (i < 8) {
        cout << "Enter the name of your class: ";
        cin >> classes[i];
        cout << "Enter the blocks the class is offered (separated by commas): ";
        cin >> blocks[i];
        i++;
    }

    // Generate permutations and check for valid combinations
    int com = 0;
    do {
        if (check(order, blocks)) {
            for (int b = 0; b < 8; ++b) {
                combos[b][com] = order[b];
                letcom[b][com] = classes[order[b]];
            }
            com++;
        }
    } while (next_permutation(order, order + 8));  // Generate next permutation

    cout << endl << endl;
    if (com == 0) {
        cout << "No viable options" << endl;
    } else {
        // Output the valid combinations
        for (int g = 0; g < com; ++g) {
            cout << "Option " << g + 1 << ": ";
            for (int f = 0; f < 8; ++f) {
                cout << letcom[f][g] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
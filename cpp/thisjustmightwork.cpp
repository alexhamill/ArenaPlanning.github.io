#include <iostream>
#include <string>
using namespace std;

// testing: a a,b,c b b,c,d c f,g,h d a,b,c e d,e,f f a,g,h g c,e,g h a,e,g
// more testing: a d b b c c d a e e f f g g h h
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
    int combos[8][8] = { 0 };  // Initialize with zero
    string letcom[8][8] = {"z"};
    

    // Input loop (fix: increment `i` after both inputs)
    while (i < 8) {
        cout << "enter the name or your class: ";
        cin >> classes[i];
        cout << "enter the blocks the class is offered separated by commas: ";
        cin >> blocks[i];
        i++;
    }

    // Generates combinations
    i = 0;
    int c = 0, com = 0, b = 0;
    while (i < 8) {
        c = 0;  // Reset c for inner loop
        while (c < 8) {
            order[i] = c;
            order[c] = i;
            if (check(order, blocks)) {
                b = 0;  // Reset b for the inner loop
                while (b < 8) {
                    combos[b][com] = order[b];
                    b++;
                }
                com++;
            }
            order[c] = c;  // Reset to original values
            order[i] = i;
            c++;
        }
        i++;
    }

    // Output the combinations 
    int g = 0, f = 0;
    while (g < com) {
        f = 0;  // Reset f for inner loop
        while (f < 8) {
            //cout << combos[f][g] << " ";
            letcom[f][g]=le[combos[f][g]];
            //cout << letcom[f][g] << " ";
            f++;
        }
        cout << endl;
        g++;
    }
    g=0, f=0;
    while (g < com) {
        f = 0;  // Reset f for inner loop
        while (f < 8) {
            cout << letcom[f][g];
            f++;
        }
        cout << endl;
        g++;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int i=1;
    string classes[9];
    char blocks[9];
    string numbl[9];
    while (i<9){
        cout << "enter the name or your class :";
        cin >> classes[i];
        i++;
        cout << "enter the blocks the class is offered seperated by commas:";
        cin >> blocks[i];
    }
    i=1;
    while(i<9){
        tolower(blocks[i]);
        i++;
    }
    i=1;
    while (i<9){
        cout << classes[i] << " " << blocks[i] << endl;
        cout << classes[0];
        i++;
    }
    return 0;
}
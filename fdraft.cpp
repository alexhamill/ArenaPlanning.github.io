#include <iostream>
#include <string>
using namespace std;

int main() {
    int i=1;
    string classes[9];
    string blocks[9];
    int nocma[9];
    int order[9];
    while (i<9){
        cout << "enter the name or your class :";
        cin >> classes[i];
        i++;
        cout << "enter the blocks the class is offered seperated by commas:";
        cin >> blocks[i];
    }
    i=1;
    int c=0;
    int len=0;
    while(i<9){
        tolower(blocks[i]);
        len=length(blocks[i])
        while(c<len){
            numbl[i]=numbl[i]+blocks[i].substr(i,1)
            cout << blocks[i].substr(i,1) << endl;
            cout << nocma[i];
            c++;
            c++;
        }
        i++;
    }
    i=1;
    while (i<9){
        cout << classes[i] << " " << blocks[i] << endl;
        i++;
    }
    return 0;
}

bool check(order[],blocks[]){
    return true;

}

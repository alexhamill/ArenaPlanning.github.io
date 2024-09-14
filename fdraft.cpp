#include <iostream>
#include <string>
using namespace std;
// a a,b,c b b,c,d c f,g,h d a,b,c e d,e,f f a,g,h g c,e,g h a,e,g
int main() {
    int i=0;
    string classes[8];
    string blocks[8];
    string nocma[8];
    int order[8];

    while (i<8){
        cout << "enter the name or your class :";
        cin >> classes[i];
        i++;
        cout << "enter the blocks the class is offered seperated by commas:";
        cin >> blocks[i];
    }
    i=0;
    int c=0;
    int len=0;
    while(i<8){
        //tolower(blocks[i]);
        len=blocks[i].length();
        while(c<len){
            nocma[i]=nocma[i]+blocks[i].substr(c,1);
            cout << nocma[i] << endl;
            c++;
            c++;
        }
        c=0;
        i++;
    }
    i=0;
    // while (i<8){
    //     cout << classes[i] << " " << blocks[i] << endl;
    //     i++;
    // }
    return 0;
}

// bool check(order[],blocks[]){
//     return true;

// }

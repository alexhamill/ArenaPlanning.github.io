#include <iostream>
#include <string>
using namespace std;
//testing: a a,b,c b b,c,d c f,g,h d a,b,c e d,e,f f a,g,h g c,e,g h a,e,g
//moretesting: a d b b c c d a e e f f g g h h
bool check(int order[], string blocks[]){
     int g=0;
     string leters[8]={"a","b","c","d","e","f","g","h"};
     while (g<8){
        if (blocks[order[g]].find(leters[g]) == -1){
            return false;
        }
        g++;
     }
     return true;
 }

int main() {
    int i=0;
    string classes[8];
    string blocks[8];
    string nocma[8];
    int order[8]={0,1,2,3,4,5,6,7};
    int combos[8][8];

    while (i<8){
        cout << "enter the name or your class :";
        cin >> classes[i];
        i++;
        cout << "enter the blocks the class is offered seperated by commas:";
        cin >> blocks[i];
    }
    i=0;
    int c=0;

    //makesallcombinations
    i=0;
    c=0;
    int com=0;
    int b=0;
    while(i<8){
        while(c<8){
            order[i]=c;
            order[c]=i;
            if (check(order,classes)){
                while (b<8){
                    combos[b][com] = order[b];
                    b++;
                }
                com++;
            }
            order[c]=c;
            order[i]=i;
            c++;
        }
        i++;
    }
    cout <<endl;
    //PRINTS
        int g=0;
        int f=0;
        while (g<sizeof(combos[0]) / sizeof (combos[0][0])){
            while(f<8){
                cout <<combos[f][g];
                f++;
            }
            cout <<" "<< endl;
         g++;
        }
    return 0;
}
     
     













    // while (i<8){
    //     cout << classes[i] << " " << blocks[i] << endl;
    //     i++;
    // }
        // int len=0;
    //removes the commas not needed but its here
    // while(i<8){
    //     //tolower(blocks[i]);
    //     len=blocks[i].length();
    //     while(c<len){
    //         nocma[i]=nocma[i]+blocks[i].substr(c,1);
    //         c++;
    //         c++;
    //     }
    //     c=0;
    //     i++;
    // }
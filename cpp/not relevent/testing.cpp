#include <iostream>
#include <string>
using namespace std;
// a a,b,c b b,c,d d a,b,c e d,e,f f a,g,h g c,e,g h a,e,g

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
 int main(){
    string z[8] = {"g,a","d,a","a","h,d","b,c","c","e","f"};
    int o[8] = {2,4,5,1,6,7,0,3};
    int combos [10][8];
    
    int i=0;
    int c=0;
    int com=0;
    int bo=0;
    while(i<8){
        while(c<8){
            o[i]=c;
            o[c]=i;
            if (check(o,z)){
                while (bo<8){
                    combos[bo][com] = o[bo];
                    bo++;
                }
                com++;
            }
            c++;
        }
        i++;
    }
    int g=0;
    int f=0;
    while (g<sizeof(combos[0]) / sizeof (combos[0][0])){
        while(f<8){
            cout <<combos[f][g];
            f++;
        }
        g++;
    }
}
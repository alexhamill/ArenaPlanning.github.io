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
    string b[8] = {"g,a","d,a","a","h,d","b,c","c","e","f"};
    int o[8] = {2,4,5,1,6,7,0,3};
    bool plzwork = check(o,b);
    cout << plzwork;
    
}
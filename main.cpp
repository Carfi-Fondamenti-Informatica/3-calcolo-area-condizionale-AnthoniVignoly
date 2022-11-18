#include <iostream>
using namespace std;

int main() {
    float a;
    float b;
    int opzione=0;

    cin >> a >> b ;
   
       switch(opzione){
        case 0:
            cout << ((a*b)/2) ;
            break;
        case 1:
            cout << (a*a);
            break;
        case 2:
            cout << (a*b);
            break;
        default:
            cout << "opzione non valida";
            break;
    }

   return 0;
}

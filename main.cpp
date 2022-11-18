#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int area=0;

    cin >> area >> a >> b;
   
       switch(area){
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
            cout << "Opzione non valida";
            break;
    }

   return 0;
}

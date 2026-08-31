#include <iostream>
using namespace std; 

int main(){
    int Numevent;
    cin >> Numevent;
    int police=0 ;
    int crime=0 ;
        
    for(int i=0; i<Numevent; i++){
        int event ;
        cin >> event;
        if(event>0){
            police += event;
        }else{
            if(police<1){
                crime++;
            }else{
                police--;
            }
        }
    }
    cout<< crime;
    return 0;
}
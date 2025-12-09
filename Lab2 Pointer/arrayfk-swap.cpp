#include <iostream>
using namespace std;
void charSwap(char* ptrA, char* ptrB) {
    char temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main() {
    
    char A[6] = {'a','b','c','d','e','f'};
    char B[6] = {'A','B','C','D','E','F'};

    char msg[6];  
    
    
    cout << "กรอกข้อความ 5 ตัว (a-f หรือ A-F): ";
    cin >> msg;

     
    for(int i=0; i<5; i++){
        bool valid = false;
        for(int j=0;j<6;j++){
            if(msg[i]==A[j] || msg[i]==B[j]){
                valid = true;
                break;
            }
        }
        if(!valid){
            cout << "ตัวอักษรที่ " << i+1 << " ไม่ถูกต้อง!\n";
            return 0;  
    }

   
    for(int i=0;i<5;i++){
        for(int j=0;j<6;j++){
            if(msg[i]==A[j]){
                 
                charSwap(&msg[i], &B[j]);
            } else if(msg[i]==B[j]){
              
                charSwap(&msg[i], &A[j]);
            }
        }
    }

     
    cout << "ผลลัพธ์หลัง swap: " << msg << endl;

    return 0;
}
}
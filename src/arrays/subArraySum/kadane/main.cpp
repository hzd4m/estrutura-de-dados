#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int kadane(vector<int>& arr, int n){
    int maior = arr[0];
    int soma_atual = 0;
    for(int i = 0; i < n; i++){
        soma_atual = soma_atual + arr[i];
        maior = max(soma_atual, maior); 
        if(soma_atual < 0){ 
            soma_atual = 0;
            
        }
       
        
        
        
    }
    
    return maior;
} 

int main(){
    vector<int> array = {-2,3,4,-1,5,-12,6,1,3}; 
    int n = array.size(); 
    
    cout << kadane(array,n) << endl; 
    
    return 0;
}
/* 
Maior soma de subArray utilizando soma de prefixos 
O(Nˆ2) 
*/

#include <iostream>
#include <vector>
using namespace std; 


void entrada(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
} 

vector<int> criarArray(int n){
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    return v;
} 

void mostrarArray(vector<int> v){
    for(auto i : v){
        cout << i << " ";
    }
}

int prefixSum(vector<int> v, int n ){
    vector<int> prefixSum(v.size()); 
    prefixSum[0] = v[0];
    for(int i = 1; i < v.size(); i++){
        prefixSum[i] = prefixSum[i - 1] + v[i]; 
    }; 
    int maior = 0;
    for(int i = 0; i < v.size(); i++){
        for(int j = i; j < n; j++){
            int subarraySum = i > 0 ? prefixSum[j] - prefixSum[i - 1] : prefixSum[j]; 
            maior = max(maior, subarraySum); 
        }
    } 

    return maior; 
}



int main(){
    entrada();
    int n;
    cout << "Digite o tamanho do array: ";
    cin >> n;
    vector<int> array = criarArray(n);
    mostrarArray(array); 
    int resultado = prefixSum(array, n);   
    
    cout << "\nA maior soma de subarray é: " << resultado << endl;  





    


}
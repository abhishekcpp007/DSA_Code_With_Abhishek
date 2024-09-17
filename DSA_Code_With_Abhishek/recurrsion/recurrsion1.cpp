// it is code to calculate the factroil of number using the recurresion 



#include<iostream>
using namespace std;
int factorial(int n){
    // base case writting
    if(n==1){
        return 1;
    }
    // self work
    int ans = n * factorial(n-1);


}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}
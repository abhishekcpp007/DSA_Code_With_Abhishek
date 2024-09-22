#include<iostream>
#include<vector>
#include<string>
using namespace std;

// 1->  given an integer find out the sum of its digits using recurion..../
/*
int sumOfDigit(int n){
    if(n==0|| n<=9) return n;
    return n%10 + sumOfDigit(n/10);
}

int main(){
    int n;
    cout<<"enter the integer";
    cin>>n;
    int res = sumOfDigit(n);
    cout<<res;
    return 0;
}


// f2-> unction to print the all element of the array

void printArray(int *arr, int idx, int n){
    if(idx==n) return;
    cout<<arr[idx]<<"";
    printArray(arr, idx+1,n);
    }

    int main(){
        int arr[] ={2,5,6,4,9,3,1,7,8,5,45,1};
       int n=12;
       // int size= sizeof(arr);
        printArray(arr,0,12);
    }

   
   // 3-> wap to print the sum of the values of an array using recurssion

   int sumofArray(int *arr, int idx , int n){
    if(idx==n) return 0;
    return arr[idx]+sumofArray(arr, idx+1,n);
    

   }
   int main(){
    int arr[] = {1,2,3,4,5};
    int n=5;
    cout<<sumofArray(arr,0,n);
    
    return 0;
   }

 

// 4-> wap to find the factorial of a number using recurssion

int factroial(int n){
    if(n==0) return 1;
    return n*factroial(n-1);
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<factroial(n);
}


// 5-> wap to find the fibonacci series using recursion
int fibonacci(int n){
    if(n==0)return 0;
    if(n==1)return 1;
    
    return fibonacci(n-1)+fibonacci(n-2);
    }

    int main(){
        int n;
        cout<<"enter the number";
        cin>>n;
        cout<<fibonacci(n);
    }

    
   // 6-> wap to find the sum of the first n natural number using recurssion
   int sumofNatural(int n){
    if(n==0)return 0;
    return n+sumofNatural(n-1);

   }
   int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<sumofNatural(n);
    return 0;
   }

   
    // 7-> wap to find the power of a number using recurssion

    int power(int a, int b){
        if(b==0) return 1;
        return a*power(a,b-1);
    }

    int main(){
        int a,b;
        cout<<"enter the numbers";
        cin>>a>>b;
        cout<<power(a,b);
    }

    // 8-> wap to find the gcd of two number using recurssion
    int gcd(int a, int b){
        if(b>a) return gcd(b,a);
        if(b==0) return a;
        return gcd(b,a%b);
        
    }
    int main(){
        int a,b;
        cout<<"enter the numbers";
        cin>>a>>b;
        cout<<gcd(a,b);
        return 0;
    }
    

   // 9-  wap to check weather it is amstrong or not
    int power(int a, int b){
        if(b==0) return 1;
        return a*power(a,b-1);
    }
    int amstrong(int n , int idx ){
        if(n==0) return 0;
        return power(n%10,idx)+amstrong(n/10, idx);

    } 
 int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int c=0;
    while(n >=9){
        c++;
        n=n/10;
    }
    int res = amstrong(n,c);
    if(res==n) cout<<"it is amstrong";
    else cout<<"it is not amstrong";
    return 0;
 }

 
//******************level up now *****************************
// 10->wap to print the sum of all subsets in an array using recurssion




void sumOfSubset(int *arr, int idx, int n, int sum, vector<int>& res) {
    if (idx == n) {
        res.push_back(sum);
        return; // base case, return to backtrack
    }
    // include current element in subset
    sumOfSubset(arr, idx + 1, n, sum + arr[idx], res);
    // exclude current element from subset
    sumOfSubset(arr, idx + 1, n, sum, res);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    vector<int> res;
    sumOfSubset(arr, 0, n, 0, res);

    for (auto it : res) {
        cout << it << " ";
    }
    return 0;
}


// 11-> The problem is to count all the possible paths on an m x n grid from top left grid[0][0] to bottom right grid[n-1][m-1]
int pathfinder(int i, int j, int m, int n ){
    if(i==n-1 && j==m-1) return 1;
    if(i>n || j>m) return 0;
    return pathfinder(i+1,j,m,n)+ pathfinder(i,j+1,m,n);

}

int main(){
    int m,n;
    cout<<"enter the number";
    cin>>m>>n;
    cout<<pathfinder(0,0,m,n);
    return 0;

}

// 12-> wap to find the all its subsequence of given string
void subsequence(string &str, int idx, string result, vector<string> &li){
    if(idx == str.size()){
        li.push_back(result);
        return;
    }
    subsequence(str, idx+1, result+str[idx], li);
    subsequence(str, idx+1, result, li);
}

int main(){
    string str = "abc";
    vector<string> li;
    subsequence(str, 0, "", li);
    for(auto it:li){
        cout<<it<<",";
    }
    return 0;

}
*/
//13-> given a string containing digits from2-0 return all possible combination that the number could represent

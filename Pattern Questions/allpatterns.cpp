#include<iostream>
using namespace std;
void printpattern(int n){
    for(int i = 0;i<n;i++){
        // space
        for(int j = 0;j<n-i-1;j++){
            cout<<" ";
        }

        // star
        for(int j = 0;j<2*i+1;j++){
            cout<<"*";
        }

        // space
         for(int j = 0;j<n-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
        
    }
}

void printpatternreverse(int n){

    for(int i = 0;i<n;i++){
        // space
        for(int j = 0;j<i;j++){
            cout<<" ";
        }

        // star
        for(int j = 0;j<2*(n)-(2*i+1);j++){
            cout<<"*";
        }

        // space
         for(int j = 0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}


void printpattern1(int n){
    for(int i = 1;i<=2*n-1;i++){
        int stars = i;

        if(i>n){
            stars = 2*n-i;

        }

        for(int j = 1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void printpattern2(int n){
    int start=1;
    for(int i=1;i<=n;i++){
        if(i%2==0) start=1;
        else start = 0;

        for(int j = 1;j<i;j++){
            cout<<start;
            start = 1 - start;
        }
        cout<<endl;

    }
    
}

void printpattern3(int n){

    for(int i = 1;i<=n;i++){
        // print
        for(int j =1;j<=i;j++){
            cout<<j;
        }

        // space

        for(int j = 1;j<=2*(n-i);j++){
            cout<<" ";
        }


        // print
        for(int j = i;j>=1;j--){
            cout<<j;
        }

        cout<<endl;
    }

    
}

void printpattern4(int n){
    
}
int main(){
    printpattern3(5);
    return 0;
}
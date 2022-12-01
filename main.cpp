#include "iostream"
#include "string"
using namespace std;

void symbol(int num,string &a){
    if (num == 0){
        a = "48";
    }else if(num == 1){
        a = "49";
    }else if(num == 2){
        a = "50";
    }else if(num == 3){
        a = "51";
    }
}

int main(){
    string a;
    string b;
    int num;
    cin >> num;
    b += num + 48;
    symbol(num,a);
    cout << a;
    return 0;
}
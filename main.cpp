#include<iostream>
using namespace std;
bool work(){
    bool completed;
    cout << "是否完成作业？（1代表是，0代表否）";
    cin >> completed;
    if (completed){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    cout << work() << endl;
    return 0;
}

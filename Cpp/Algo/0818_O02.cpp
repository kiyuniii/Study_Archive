#include <iostream>
#include <string>
using namespace std;

int main() { 
    string romeo;
    string juliet;

    cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요." << endl;
    cout << "로미오>>"; cin >> romeo;
    cout << "줄리엣>>"; cin >> juliet;

    if(romeo == "가위" && juliet == "보") 
        cout << "로미오가 이겼습니다.";
    else if(romeo == "바위" && juliet == "가위")
        cout << "로미오가 이겼습니다.";
    else if(romeo == "보" && juliet == "바위")
        cout << "로미오가 이겼습니다.";

    else if(romeo == "보" && juliet == "가위")
        cout << "줄리엣이 이겼습니다.";
    else if(romeo == "가위" && juliet == "바위")
        cout << "줄리엣이 이겼습니다.";
    else if(romeo == "바위" && juliet == "보")
        cout << "줄리엣이 이겼습니다.";
    
    else
        cout << "비겼습니다.";
    
    return 0;
}

/* 
가위 : 1
바위 : 2
보 : 3 


가위 바위 보
로미오 줄리엣
*/
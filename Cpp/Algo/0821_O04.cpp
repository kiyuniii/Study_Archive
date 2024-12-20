#include <iostream>
#include <string>   
using namespace std;

/* 끝말잇기 게임
선수의 수를 입력받고 선수 각 사람의 이름을 입력받아 게임 시작 */
class Player;
class WordGame {
private:
    int number;
    string name[100];
    string start = "아버지";
    string answer;
public:
    WordGame();
    void setPlayer();
    void game();
};

WordGame::WordGame() { 
    number = 0;
}

void WordGame::setPlayer() {
    cout << "끝말 잇기 게임을 시작합니다" << endl;
    cout << "게임에 참가하는 인원은 몇명입니까?";
    cin >> number;
    
    for(int i=0; i<number; i++) {
        cout << "참가자의 이름을 입력하세요. 빈칸없이>>";
        cin >> name[i];
    }
    
    cout << "시작하는 단어는 " << start << "입니다." << endl;
}

void WordGame::game() {
    int count = 0;
    while(1) {
        if(count%number == 0) {
            cout << name[count] << ">>";
            cin >> answer;
            count++;
        }
    }
}

class Player : WordGame {
private:
    string name;
public:
    Player() { };
    void setName();
};

int main() {
    WordGame a;
    a.setPlayer();

}
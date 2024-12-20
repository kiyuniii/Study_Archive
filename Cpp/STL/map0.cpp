#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, string> dic;

    dic.insert(make_pair("soccer", "축구"));
    dic.insert(make_pair("baseball", "야구"));
    dic["basketball"] = "농구";

    string eng;

    while(true) {
        cout << "찾고싶은 영단어 >> ";
        getline(cin, eng);
        if(eng == "exit")
            break;

        if(dic.find(eng) == dic.end()) 
            "No Matches in dic";
        else
            cout << dic[eng] << endl;
    }
}
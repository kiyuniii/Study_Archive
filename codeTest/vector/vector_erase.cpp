#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    unordered_map<string, int> umap;  //KEY(String), VALUE(int)
    umap["peach"] = 32000;

    if(umap.find("apple") != umap.end()) {  
        cout << "\"apple\" FOUND" << endl;
    } else {
        cout << "\"apple\" NOT FOUND" << endl;
    }

    auto it_peach = umap.find("peach");
    auto key = it_peach->first;
    auto value = it_peach->second;
    
    cout << " KEY : " << key << endl;
    cout << "VALUE: " << value << endl;

    return 0;
}


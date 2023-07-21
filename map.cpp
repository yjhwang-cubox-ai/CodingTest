#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> mp;
    string a[] = {"주홍철", "양영주", "박종선"};
    
    for(int i = 0; i<3; i++){
        mp.insert({a[i], i+1});
        mp[a[i]] = i+1;
    }

    cout << mp["kundol"] << "\n";
    mp["kundol"] = 4;
    cout << mp.size() << endl;
    mp.erase("kundol");
    auto it = mp.find("kundol");
    mp["kundol"] = 100;
    it = mp.find("kundol");


    map<int, int> mp1;

    if (mp1.find(1)== mp1.end()){
        mp1[1] = 2;
    }
    for (auto i : mp1) cout << i.first  << " " << i.second << "\n";

    unordered_map<string, int> umap;
    umap["bcd"] = 1;
    umap["aaa"] = 1;
    umap["aba"] = 1;

    for (auto i : umap) cout << i.first << " " << i.second << "\n";

    return 0;
}
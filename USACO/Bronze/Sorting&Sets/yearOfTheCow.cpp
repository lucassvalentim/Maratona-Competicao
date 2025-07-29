#include <bits/stdc++.h>
using namespace std;

const vector<string> ZODIAC{"Ox",   "Tiger",  "Rabbit",  "Dragon", "Snake", "Horse",
                            "Goat", "Monkey", "Rooster", "Dog",    "Pig",   "Rat"};

struct Relation{
    string name;
    int prev;
    int year;
    string relative;
};

int mod(int n, int m){return ((n % m) + m) % m;}

int main() {
    
    int n; cin >> n;

    vector<Relation> relations(n);
    for(Relation &r : relations){
        string unused;
        string prev_str;
        string animal;

        cin >> r.name >> unused >> unused >> prev_str >> animal >> unused >> unused >> r.relative;
        r.prev = prev_str == "previous";
        r.year = find(ZODIAC.begin(), ZODIAC.end(), animal) - ZODIAC.begin();
    }

    map<string, int> birthYears{{"Bessie", 0}};
    for(Relation r : relations){
        int change = r.prev ? -1 : 1;
        int year = birthYears[r.relative] + change;

        while(mod(year, ZODIAC.size()) !=  r.year){year += change;}
        birthYears[r.name] = year;
    }

    int dist = abs(birthYears["Elsie"]);
    cout << dist << endl;
    return 0;
}
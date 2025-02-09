#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // Define an unordered_map to store pairs of strings and integers
    unordered_map<string, int> m;
 
    // Define and insert pairs into the unordered_map
    pair<string, int> p1;
    p1.first = "kaushal";
    p1.second = 8;
    m.insert(p1);

    pair<string, int> p2;
    p2.first = "ayush";
    p2.second = 1;
    m.insert(p2);

    pair<string, int> p3;
    p3.first = "riya";
    p3.second = 6;
    m.insert(p3);

    // Insert a pair directly using the subscript operator
    m["ankit"] = 19;
    m["riya"]=2;
    // for erase

    m.erase("ankit");

    // for size

    cout<<m.size()<<endl;

    // Iterate over the elements in the map and print them
    for (auto ele : m) {
        cout << ele.first << " " << ele.second << endl;
    }
    
    return 0;
}

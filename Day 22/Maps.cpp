// MAPS
// key value pair (each element consists of a key and a value)
// like a dictionary
// you might need to #include <map>
// syntax: 
// map<key_type, value_type> name;

// to add elements: name.insert(pair<key_type, value_type>(key,value))

// eg: creating a gibberish dictionary

#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	unordered_map<string, string> dictionary;
    dictionary.insert(pair<string, string>("hey","blublubla"));
    dictionary.insert(pair<string, string>("how","gjkso"));
    dictionary.insert(pair<string, string>("you","tuet"));
    dictionary.insert(pair<string, string>("doing","bupola"));
    dictionary.insert(pair<string, string>("?","$%"));

    // we loop through our map to print each pair
    // for(auto pair: name) -- for each pair in name
    for (auto pair: dictionary){
        cout<< pair.first << " - " << pair.second<<endl;
        // pair.first is the key, pair.second is the value
    }
    
	return 0;
}

// note: map prints out values in ascending order, otherwise, you use unordered_map
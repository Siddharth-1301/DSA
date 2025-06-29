#include <iostream>
#include<map>
using namespace std;


int main() {
    // Your code goes here
    map<string,int>m;
    pair<string,int>p=make_pair("sid",1);
    m.insert(p);

    pair<string,int> pair2("ajet",2);
    m.insert(pair2);


    m["mera"]=1;
    m["mera"]=2;


    cout<<m["mera"]<<endl;
    // cout<<m["sid"]<<endl;

    cout<<m.at("ajet")<<endl; // This will print 2

    cout<<m.size()<<endl; // This will print the size of the map

    cout<<m["notpresent"]<<endl; // This will create a new entry with key "notpresent" and value 0
    cout<<m.at("notpresent")<<endl; // This will throw an error because "notpresent" does not exist in the map


    cout<<m.size()<<endl;
    cout<<m.count("bro");


    // erase
    m.erase("sid");
    cout<<m.size()<<endl; // This will print the size of the map after erasing "sid"

    // // iterating through the map
    // for(auto i:m){
    //     cout<<i.first<<" "<<i.second<<endl; // This will print each key-value pair in the map

    // }
    map<string,int>::iterator it=m.begin();
    while (it!=m.end())
    {
       
        cout<<it->first<<" "<<it->second<<endl;
        it++;

        /* code */
    }
    

    return 0;
}
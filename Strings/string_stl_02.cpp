#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

//comparator function
bool compare(string a,string b){
    if(a.length()==b.length()){
        return a<b;//increasing order
    }
    return a.length()>b.length(); //decreasing order
}

int main() {
    int n;
    cin>>n;
    cin.get();

    string s[100]; //Vector could be used in place of this array
    
    for(int i=0;i<n;i++)
        getline(cin,s[i]); //this getline function comes in handy and should be preferred over cin>> in case of strings as with getline you can 
                           //specify the delimiter (default is '\n'),  cin >> uses any whitespace character as a delimiter this includes spaces, newlines, tabs etc.
    

    sort(s,s+n,compare);

    for(int i=0;i<n;i++)
        cout<<s[i]<<endl;

}

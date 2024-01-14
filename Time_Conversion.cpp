#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
 string r=s.substr(8,2);
 string h=s.substr(0,2);
 int ho=stoi(h);
 if (r=="PM" && ho!=12){
     ho+=12;
     }
 else if (r=="AM" && ho==12) {
     ho=00;
 }    
   s.erase(8,2);
    if (ho < 10) {
        s.replace(0, 2, "0" + to_string(ho));  
    } else {
        s.replace(0, 2, to_string(ho)); 
    }

 return s;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

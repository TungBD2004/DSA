#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	deque<int> dq;
	while(t--){
		string s;
		cin>>s;
		int x;
		if (s == "PUSHBACK") {
            cin >> x;
            dq.push_back(x);
        }
        else if (s == "PUSHFRONT") {
            cin >> x;
            dq.push_front(x);
        }
        else if (s == "POPBACK") {
            if (!dq.empty())
                dq.pop_back();
        }
        else if (s == "POPFRONT") {
            if (!dq.empty())
                dq.pop_front();
        }
        else if (s == "PRINTFRONT") {
            if (!dq.empty())
                cout << dq.front();
            else
                cout << "NONE";
            cout << endl;
        }
        else if (s == "PRINTBACK") {
            if (!dq.empty())
                cout << dq.back();
            else
                cout << "NONE";
            cout << endl;
        }
	}
}

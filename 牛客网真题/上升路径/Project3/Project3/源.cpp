#include<iostream>
#include<string>
#include<set>
#include<vector>
using namespace std;
int main() {
	int n;
	while (cin >> n){
		set<char>s;         
		for (int i = 0; i<26; i++){ 
			s.insert('a' + i);             
			s.insert('A' + i); 
		 }         
		// for(int i=0;i<=9;i++)         
		// s.insert('0'+i);         
		// s.insert('_');         
		vector<string> v;         
		for(int i=0;i<n;i++)         
		{             
			string temp;             
			cin >> temp;             
			v.push_back(temp);         
		}         
		int count=0;         
		for(int i=0;i<n;i++)         
		{             
			if(v[i].size()<=10)             
			{                 
				int flag=1;
				for(int index=0;index<v[i].size();index++)
				{                     
					if(s.find(v[i][index])==s.end())
						flag=0;
				}
				if(flag==1)
					count++;
			}
		}
		cout<<count<<endl;
	}
}
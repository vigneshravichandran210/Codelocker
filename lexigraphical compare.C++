#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<string> s(n);
	for(int i=0;i<n;i++)
	cin>>s[i];
	sort(s.begin(),s.end());
	/*for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(s[i].at(i)>s[i].at(j))
			{
				string temp = s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}*/
	for(int i=0;i<s.size();i++)
	{
		for(int j=0;j<s[i].size();j++)
		{
			printf("%c",toupper(s[i].at(j)));
		}
		cout<<endl;
	}
	return 0;
}

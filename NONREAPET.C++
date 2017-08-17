#include <bits/stdc++.h>
#define MAX 12345678
using namespace std;

int main() {
    for(int i=1;i<MAX;i++)
    {
    	   int a[10]={0};
    	int t=i;
    	while(t>0)
    	{
    		a[t%10]++;
    		t=t/10;
    	}
    	bool b=true;
      for(int j=0;j<10;j++)
      {
      	if(a[j]>1)
      	{
      	b=false;
      	break;
      	}
      }
      if(b)
      cout<<i;
    }
	return 0;
}

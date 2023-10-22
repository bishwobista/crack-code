//Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.
#include <bits/stdc++.h>
using namespace std;
vector<string> paren;
    void parengen(string curparen,int i, int val, int n)
    {
       if(i==n)
       {
           for(int j=val;j>0;j--)
           curparen+=")";
           paren.push_back(curparen);
           return;
       }
       if(val-1>=0)
       {
           string newc=curparen+")";
           parengen(newc, i, val-1, n);

       }
       string newc=curparen+"(";
       parengen(newc, i+1, val+1, n);
       
    }
    vector<string> generateParenthesis(int n) {
        parengen("",0,0,n);
        return paren;
    }
int main()
{
	int n;
	cin>>n;
	vector<string> soln=generateParenthesis(n);
	for (auto s: soln)
	{
		cout<<s<<endl;
	}
	return 0;
}
//Roman to Integer Conversion
#include <bits/stdc++.h>
using namespace std;
int romanToInt(string s) {
        int sizes=s.size();
        int count=0, num=0;
        while(count<sizes)
        {
            if(s[count]=='I')
            {
                if(count+1<sizes)
                {
                    if(s[count+1]=='V')
                    {
                        num+=4;
                        count+=2;
                    }
                        
                    else if(s[count+1]=='X')
                    {num+=9;
                    count+=2;
                    }
                 else {num+=1;
                       count++;
                 }
                }
                else {num+=1;
                       count++;
                 }
                
            }
            else if(s[count]=='X')
            {
                if(count+1<sizes)
                {
                    if(s[count+1]=='L')
                    {
                        num+=40;
                        count+=2;
                    }
                        
                    else if(s[count+1]=='C')
                    {num+=90;
                    count+=2;
                    }
                 else {num+=10;
                       count++;
                 }
                }
                else {num+=10;
                       count++;
                 }
                
            }
            else if(s[count]=='C')
            {
                if(count+1<sizes)
                {
                    if(s[count+1]=='D')
                    {
                        num+=400;
                        count+=2;
                    }
                        
                    else if(s[count+1]=='M')
                    {num+=900;
                    count+=2;
                    }
                  else {num+=100;
                       count++;
                 }
                }
                else {num+=100;
                       count++;
                 }
            }
            else if(s[count]=='V')
            {
                num+=5;
                count++;
            }
            else if(s[count]=='L')
            {
                num+=50; count++;
            }
            else if(s[count]=='D')
            {
                num+=500; count++;
            }
            else if(s[count]=='M')
            {
             num+=1000; count++;
            }
        }
    return num;
    }
    
int main()
{
	string s;
	cin>>s;
	cout<<romanToInt(s)<<endl;
}
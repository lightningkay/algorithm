/*
 * Chapter 6
 *
 */

#define BOOST_TEST_MAIN
#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>

#include<iostream>
#include<deque>
#include<cstring>

using namespace std;

deque<int> ready, block;
int var[26], id[1024], st[5], program, q, t, i;
string code[1024];
bool locked;


void run(int i)
{
    int time = q;
    while (time > 0)
    {
        string now = code[id[i]];
        if(now[2] == '=')
        {
            var[now[0] - 'a'] = isdigit(now[5]) ? (now[4] - '0')*10 + (now[5] - '0') : now[4] - '0';
            time -= st[0];
        }
        else if(now[2] == 'i')
        {
            cout<<i+1<<": "<<var[now[6]-'a']<<endl;
            time -= st[1];
        }
        else if(now[2] == 'c')
        {
            if(locked)
            {
                block.push_back(i);
                return;
            }
            locked = true;
            time -= st[2];
        }
        else if(now[2] == 'l')
        {
            if(!block.empty())
            {
                ready.push_front(block.front()); 
                block.pop_front();
            }
            time -= st[3];
            locked = false;
        }
        else if(now[2] == 'd')
            return;

        id[i]++;
    }
    ready.push_back(i);
}

BOOST_AUTO_TEST_CASE( page139 )
{
    cin >> t;
    while(t--)
    {
        cin >> program >> st[0] >> st[1] >> st[2] >> st[3] >> st[4] >> q;
        memset(var, 0, sizeof(var));
        ready.clear();
        block.clear();
        int line_num = 0;
        for(i = 0; i < program; i++)
        {
            ready.push_back(i);
            getline(cin, code[line_num++]);
            id[i] = line_num - 1;
            while(code[line_num - 1] != "end")
            {
                getline(cin, code[line_num++]);
            }
        }
        locked = false;
        while(!ready.empty())
        {
            int now = ready.front();
            ready.pop_front();
            run(now);
        }
        if(t)
            cout << endl;
    }
}

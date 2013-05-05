#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

class Solution
{
    private:
        int tid;
        int status;
        string res[2];
    public:
        Solution(int ttid)
        {
            tid = ttid;
            res[0] = "YES";
            res[1] = "NO";
        }

        void input()
        {
        }
        
        void solve()
        {
        }

        string getres()
        {
            return res[status];
        }

        void output()
        {
            cout<<"Case #"<<tid<<": "<<getres()<<endl;
        }
};

int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    int T;
    Solution *sl;
    cin>>T;
    for (int tid = 1; tid <= T; ++tid)
    {
        sl = new Solution(tid); 
        sl->input();
        sl->solve();
        sl->output();
    }

    return 0;
}


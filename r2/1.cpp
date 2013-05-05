#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

#define LL long long

class Solution
{
    private:
        int tid;
        LL A;
        vector<LL> ms;
        int n;
        int ans;
    public:
        Solution(int ttid)
        {
            ans = 0;
            tid = ttid;
            ms.clear();
        }

        void input()
        {
            cin>>A>>n;
            LL tmp;
            for (int i = 0; i < n; ++i)
            {
                cin>>tmp;
                ms.push_back(tmp);
            }
            sort(ms.begin(), ms.end());
        }
        
        void solve()
        {
            ans = n;
            int cur = 0; 
            for (int i = 0; i < n; ++i)
            {
                if ((cur+n-i) < ans)
                {
                    ans = cur + n - i;
                }

                while (cur<ans && A<=ms[i])
                {
                    A += (A-1);
                    ++cur;
                }

                if (cur >= ans)
                {
                    break;
                }
                A += ms[i];
            }

            if (cur < ans)
            {
                ans = cur;
            }
        }

        int getres()
        {
            return ans;
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


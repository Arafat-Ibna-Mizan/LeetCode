class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int task_size=tasks.size();
        vector<int>freq(26);
        for(auto c: tasks){
            freq[c-'A']++;
        }
        sort(freq.begin(),freq.end(),greater<int>());
        int maxx=freq[0];

        int cnt=0;
        for(int i=0; i<26; i++){
            if (freq[i]==maxx){
                cnt++;
            }
        }

        return max((maxx-1)*(n+1) +cnt, task_size);
    }
};
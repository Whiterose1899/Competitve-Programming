class Solution {
public:
    const int nums = 1337;
        int powering(int a, int k)
        {
            a = a%nums;
            int key = 1;
            for(int i =0; i<k; i++)
            {
                key = (key * a) % nums;
            }
            return key;
        }
    int superPow(int a, vector<int>& b) {
        while( b.size()!=0 )
        {
            int c = b.back();
            b.pop_back();
            return (powering(superPow(a,b),10)*powering(a,c))%nums;
        }
        return -1;
        // long long  tens = 1;
        // long long results = 1;
        // while(b.size()!=0)
        // {
        //     for(int i =0; i<b.back()*tens; i++)
        //     {
        //         results = (results * a) % 1337;
        //     }
        //     b.pop_back();
        //     tens = tens *10;
        // }
        // return results;
    }
};

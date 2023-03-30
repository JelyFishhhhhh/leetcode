class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> results;
        results.assign(n, "");
        for(int i = 1;i <= n;i++){
            if(!(i%3)){
                if(!(i%5)){
                    results[i-1] = "FizzBuzz";
                    continue;
                }
                results[i-1] = "Fizz";
                continue;
            }
            else if(!(i%5)){
                results[i-1] = "Buzz";
                continue;
            }
            
            results[i-1] = to_string(i);
        }
        return results;
    }
};
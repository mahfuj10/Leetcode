class Solution {
    public:
        int numberOfMatches(int n) {
            int matches = 0;
    
            while(n != 1){
                if(n % 2 == 0){
                    int r = n / 2;
                    n = r;
                    matches += r;
                }else {
                    int a = (n - 1) / 2;
                    int b = a + 1;
                    n = b;
                    matches += a;
                }
            }
    
            return matches;
        }
    };
int fib(int n) {
        
        if (n == 0 || n == 1 ){
            return  n ; 
        }
        
        return fib(n-1) + fib(n-2) ; 
        
    }



// Method 2 -> Memoization

int  Helper (int n  , int *dp ){
        if (n == 0 || n == 1 ){
            return  n ; 
        }
        if(dp[n] != -1){
            return dp[n] ; 
        }
        int answer1  = Helper(n-1 , dp) ; 
        int answer2  = Helper(n-2 , dp) ; 
        dp[n] = answer1 + answer2 ; 
        return dp[n] ; 
        
    }
    int fib (int n ){
        
        int *dp = new int[n+1] ; 
        for(int i=0 ; i<=n ; i++){
            dp[i] = -1 ; 
        }
        
        int answer = Helper (n , dp) ; 
        return answer ; 
        
    }

// Method 3 -> DP Approach 
int fib (int n ){
        
        int a = 0 ; 
        int b = 1 ; 
        int c ; 
        if(n == 0 || n == 1){
            return n ;
        }
        for(int i=2 ; i<=n ; i++){
            c = a+b ; 
            a = b ;
            b = c ; 
        }
        return c ;

    }
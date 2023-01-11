ll power(long long x,long long y){
        long long res=1;
        x=x%p;
        if(x==0) return 0;
        while(y>0){
            if(y&1){
                res=(res*x)%p;
            }
                y=y>>1;
                x=(x*x)%p;
        }
        return res;
    }

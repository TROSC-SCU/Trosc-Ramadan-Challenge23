/**
* count_primes - a function that returns the number of prime numbers that are strictly less than n.
* @n : that number to be compared
* 0 <= n <= 5 * 106
*/

// write your algorithms here
int countPrimes(int n) {
        int counter=0;
        bool prime[n+1];
        memset(prime,true,sizeof(prime));
        for(int p=2;p*p<=n;p++){
            if(prime[p]==true){
                for(int i=p*p;i<=n;i+=p)
                    prime[i]=false;
            }
        }for(int p=2;p<n;p++)
            if(prime[p])
                counter++;
        return counter;
}

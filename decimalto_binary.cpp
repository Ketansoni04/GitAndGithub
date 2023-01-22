#include<bits/stdc++.h>

int decimaltobinary(int n){
    int x=1;
    int ans=0;
    while(x<=n){
        x*=8; 
    }
    x/=8;
    while(x>0){
        int lastdigit = n/x;
        n-=x*lastdigit;
        ans=ans*10 + lastdigit;
        x/=8;

        
    }
    return ans;


}
int32_t main(){

    int n;
    std::cin>>n;                                                                         
    std::cout << decimaltobinary(n);

}
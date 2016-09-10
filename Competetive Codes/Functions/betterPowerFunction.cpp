ll power(ll a,ll b){
    printf("power(%lld,%lld) called\n ",a,b);
   if(b==0)
    return 1;
   ll ans=power(a,b/2);
   if(b&1)
       ans=ans*ans*a;
    else
        ans=ans*ans;
  return ans;
}

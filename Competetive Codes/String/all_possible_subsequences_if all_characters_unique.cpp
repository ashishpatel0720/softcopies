for(i=1;i<1<<n;i++)
{
  for(j=1;j<=n;j++)
   {
       if((1<<j)&i) 
       {
         printf("%d\n",a[j]);
        }
 }
}
int main(){
   
   int i,n,digit,sum=0,fact=1;
    
    scanf("%d",&n);
    
    while(n>=1){
        
        digit=n%10;    
        for(i=1;i<=digit;i++){
            fact*=i;
        }
        sum+=fact;
        fact=1;
        
        n=n/10;
        
    }
    printf("%d",sum);

    return 0;
}

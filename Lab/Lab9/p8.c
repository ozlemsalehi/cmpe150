void sort(int n1,int n2,int n3,int *minPtr,int *maxPtr){
    
    if(n3>=n2 && n3>=n1 ){
    *maxPtr=n3;
      if(n2>=n1){
      *minPtr=n1;   
      }   
      else if(n1>=n2){
      *minPtr=n2; 
      }
    }
    else if(n1>=n2 && n1>=n3){
    *maxPtr=n1;
      if(n2>=n3){
      *minPtr=n3;   
      }   
      else if(n3>=n2){
      *minPtr=n2; 
      }
    }
    else if(n2>=n3 && n2>=n1){
     *maxPtr=n2;
      if(n3>=n1){
      *minPtr=n1;   
      }   
      else if(n1>=n3){
      *minPtr=n3; 
      }
    }
 } 
  
  
int main(){
    
    int a1,a2,a3;
    int min,max;
    
    scanf("%d%d%d",&a1,&a2,&a3);
    
    sort(a1,a2,a3,&min,&max);
    printf("min:%d max:%d",min,max);
    
    return 0;
}

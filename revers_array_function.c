int* reverseArray(int a_count, int* a, int* result_count) {
    
  //  int j=0;
   // int* result_pointer;
    *result_count=a_count; 
      
        if(!(a_count%2))
        {
            //even size,so we make swape between i,N-1-i
            for(int i=0;i<=((a_count/2)-1);i++)
            {
                //swap
                a[i]=a[i]^a[a_count-1-i];
                a[a_count-1-i]=a[i]^a[a_count-1-i];
                a[i]=a[i]^a[a_count-1-i];
            }
            
        }else
        {
         //odd size
            for(int i=0;i<((a_count-1)/2);i++)
            {
                //swap
                a[i]=a[i]^a[a_count-2-i];
                a[a_count-1-i]=a[i]^a[a_count-2-i];
                a[i]=a[i]^a[a_count-2-i];
            }
            
        }
    

return a ;
}

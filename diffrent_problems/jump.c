int jumpingOnClouds(int c_count, int* c)
{
    int i=0;
    int min_jump=0;
    int flag_clear_1;
    int flag_clear_2;
    
    while((i+1<c_count || i+2<c_count))
    {  
        
            flag_clear_1=(c[i+1]==0)?1:0;
            flag_clear_2=(c[i+2]==0)?1:0;
            if( flag_clear_2)
            {
                min_jump++;
                i+=2;
            }
            else if(flag_clear_1)
            {   min_jump++;
                i++;
            }  
         


    }   
    return min_jump;
}

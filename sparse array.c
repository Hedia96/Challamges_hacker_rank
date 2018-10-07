sparse array

int* matchingStrings(int strings_count, char** strings, int queries_count, char** queries, int* result_count) {
   static  int  no_exsist[1000]={0};
    int ii=0;
    
    for(int i=0;i<queries_count;i++)
    {
        for(int j=0;j<strings_count;j++)
        {
             if(strcmp(strings[j],queries[i])==0)
                 (no_exsist[ii])++;
            
        }
        
        ii++;       
     
    }
    *result_count=queries_count;
    return no_exsist;

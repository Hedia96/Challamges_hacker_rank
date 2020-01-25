	// Add your code here
//constructor 's function to initalze sometimes '
Difference(vector <int >a)
{
 elements=a;   
 maximumDifference=0;
}

//function member  computeDifference 
void computeDifference()
{
    // by make 2 for loops to get difference between all elements
    int N=elements.size();
    for(int i=0;i<N;i++)
{
        for(int j=i;j<N;j++)
        {
            if(maximumDifference<=abs(elements[i]-elements[j]))
                maximumDifference=abs(elements[i]-elements[j]);
        }
}
    
}

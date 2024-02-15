#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main ()

{
    srand(time(NULL));
    int N, i=0;
    
    cout<<"inserire grandezza array"<<endl;
    cin>>N;
    
    int a[N], conta=0, appoggio=0;
    
    for(i=0; i<N; i++)
    {
        a[i]= rand () % 2;
        
        if(i>0 && a[i] != a[i-1])
        {
            appoggio++;
        }
    }
    
    cout<<"la sequenza: " <<appoggio<<endl;
    
    system("PAUSE");
}
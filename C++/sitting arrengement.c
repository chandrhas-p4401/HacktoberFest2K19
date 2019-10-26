
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
 int a[6],b[6],in,f;
 int t;
 int key;
 cin>>t;
 while(t)
 {   f=0;

    cin>>key;
    int j=1,k=12;

    for(int p=1;p<=9;p++)
	{
    	for(int i=0;i<=5;i++)
        {
             a[i]=j++;

             b[i]=k--;
           //cout<< a[i]<<" "<<b[i]<<endl;
          // i++;
         //  j++;
        }
        for(int i=0;i<=5;i++)
        {
            if(key==a[i])
            {
                cout<<b[i]<<" ";
                f=1;
                in=i;
            }
            if(key==b[i])
            {
                cout<<a[i]<<" ";
                f=1;
                in=i;
            }

        }
        if(f==1)
        {
            break;
        }
            else

        {
             j=j+6;
             k=k+18;
        }
    }

     t--;

        if(in==0||in==5)
          cout<<"WS";
        if(in==1||in==4)
             cout<<"MS";
        if(in==2||in==3)
             cout<<"AS";
    cout<<"\n";
 }

 // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here

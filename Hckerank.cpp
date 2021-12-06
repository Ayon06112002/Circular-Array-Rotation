//hackerank question : rotation of arrays 
#include <iostream>
using namespace std;
int main(){
    int n,k,q,in;
    int ind[q];
    cout<<"Enter Array\n";
    cout<<"enter rotation count\n";
    cout<<"number of quesries";
    cin>>n>>k>>q;
    int arr[n]{0};
    // int k=arr[n];
    //taking array 
    for (int i=0;i<n;i++){
        int val;
        cin>>val;
        arr[i]=val;
    }
    
    for( int m=0;m<k;m++){
            // for rotation
        int p=arr[n-1];
        for (int r=0;r<n;r++){
            arr[n-r-1]=arr[n-r-2];
        }
        arr[0]=p;
    }
    // int p=arr[n-1];
    // for (int r=0;r<n;r++){
    //     arr[n-r-1]=arr[n-r-2];
    // }
    // arr[0]=p;

    for(int l=0;l<q;l++){
        cout<<"Enter indexes : ";
        cin>>in;
        ind[l]=in;
    
    }
    for ( int s=0;s<q;s++){
        cout<<arr[ind[s]]<<endl;
    }
    return 0;
    
}

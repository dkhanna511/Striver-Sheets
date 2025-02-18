#include<iostream>
using namespace std;

/*

*****
*****
*****
*****
*****

*/


int main(){
    int n;

    cin>>n;



/*

*****
*****
*****
*****
*****

*/


    for(int i = 1; i <=n; i++){
        for(int j = 1; j <=n; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"\n\n";
    /*
    *
    **
    ***
    ****
    *****
    */
    for (int i = 1; i <=n; i++){
        for (int j = 1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"\n\n";
    /*
    1
    12
    123
    1234
    12345
    */

    for(int i = 1; i<=n; i++){
        for(int j = 1; j <=i; j++){
            cout<<j;
        }
        cout<<endl;
    }

    cout<<"\n\n";
    /*
    1
    22
    333
    4444
    55555
    
    */

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }
    cout<<"\n\n\n";

    /*
    *****
    ****
    ***
    **
    *
    
    */


    for(int i  = n; i>=1; i--){
        for(int j = 1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<"\n\n";
    /*
    12345
    1234
    123
    12
    1
    */

    for (int i = n; i>=1; i--){
        for(int j = 1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }


    cout<<"\n\n";

    /*
    
    *
   ***
  *****
 *******
*********
    */

    for(int i = 1; i <=n; i++){
        for (int j = n; j>i; j--){
            cout<<" ";
        }

        for(int k = 1; k<=2*i-1; k++){
            // if (k%2 != 0){
                cout<<"*";
            // }
        }
        cout<<endl;
    }


    cout <<"\n\n";

    /*
    *********
     *******
      *****
       ***
        *
    
    */

    for(int i = n; i >=1; i--){
        for(int j = n; j>i;j--){
            cout<<" ";
        }

        for(int k = 1; k <=2*i-1; k++){
            cout<<"*";
        }
        cout<<endl;
        
    }

    cout<<"\n\n\n";


}

    






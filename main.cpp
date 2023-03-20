#include <iostream>

using namespace std;

int main()
{
    int i,n,j;
    cout<<"Cate elemente se doresc"<<endl;
    cin>>n;
    int v[n][n],s[n],k=0;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cin>>v[i][j];
        }
    }
    cout<<"Se face afisarea"<<endl;
     for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Se face procesarea"<<endl;
    for(i=2;i>=0;i--){
        for(j=0;j<=i;j++){
            //trebuie facut maximul
            if((v[i][j]+v[i+1][j])>(v[i][j]+v[i+1][j+1])){
                    s[k++]=v[i+1][j];
                    v[i][j]=v[i][j]+v[i+1][j];
            }else{
                     s[k++]=v[i+1][j+1];
                     v[i][j]=v[i][j]+v[i+1][j+1];
            }
        }
    }


    cout<<v[0][0]<<endl;

    return 0;
}

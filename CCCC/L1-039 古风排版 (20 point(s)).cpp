#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char a[1001];
    getchar();
    cin.getline(a,1001);
    //cout<<a;
    int length = 0;
    //计算得到列数
    if(strlen(a)%n == 0){
        length = strlen(a)/n;
    }else{
        length = strlen(a)/n+1;
    }
    int k = 0;
    int flag = 0;
    char temp[1001][1001];//得到每行的数据
    for(int j = 0; j < length; j++){
        for(int i = 0; i < n; i++){
            temp[i][j] = a[k];//列赋值
            k++;
            if(k > strlen(a) && k <= length * n){//把最后剩余的的字符用空格代替
                temp[i][j] = ' ';
            }
            else if( k > length * n){
                flag = 1;
                break;
            }
        }
        if(flag == 1)
            break;
    }
   for(int i = 0; i < n; i++){//行
        for(int j = length-1; j >=0; j--){//列
            cout<<temp[i][j];
        }
        cout<<endl;
    }
    return 0;
}

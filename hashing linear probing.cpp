#include<iostream>
using namespace std;
class probing
{
public:
    int key,n,arr[100],temp=0,k;
    void probing1()
    {
        cout<<"Enter the value of n"<<endl;
        cin>>n;
        cout<<"Enter the number of keys"<<endl;
        cin>>k;
        for(int i=0;i<n;i++)
        {
            arr[i]=0;
        }
        for(int i=0;i<k;i++)
        {
            cout<<"enter the value of key:-"<<" ";
            cin>>key;
            int w=key%n;
            for(int i=w;i<n;i++)
            {
                if(arr[w]!=0)
                    w=w+1;
            }
//                if(arr[w]!=0)
//                {
//                    w=w+1;
//                    arr[w]=key;
//                }
//                else
//                {
                    arr[w]=key;
//                }
        }
        }
        void display()
        {
            cout<<"ANSWER"<<endl<<endl;
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<endl;
            }
        }
};
int main()
{
    probing p;
    p.probing1();
    p.display();
}

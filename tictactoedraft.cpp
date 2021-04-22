#include<iostream>
using namespace std;
int x=0;
int checkwin(int a[])
{
    //horizontal check
    int n=0;
    int sum=0;
    int flag=0;
    for(int i=0;i<3;i++)
    {
        
        if((a[n]==a[n+1])&&(a[n+1]==a[n+2])&&(a[n]==a[n+2]))
        {flag++;return true;break;}
    }
    
    //vertical check
    n=0;
    for(int i=0;i<3;i++)
    {
         if((a[n]==a[n+3])&&(a[n+3]==a[n+6])&&(a[n]==a[n+6]))
        {flag++;return true;break;}
    }
    
    
    //diagonal check
    if(((a[0]==a[4])&&(a[4]==a[8])&&(a[0]==a[8]))||((a[2]==a[4])&&(a[4]==a[6])&&(a[2]==a[6])))
    {
        return true;
        flag++;
    }
    
    if(flag==0){return false;}
}



int main()
{
    int a[9],input,playernum;
    int win=false;
    int count=0;
    for(int i=1;i<10;i++)
    {
        a[i-1]=i;
    }
    while(win==false)
    {
        system("cls");
        cout<<a[0]<<" | "<<a[1]<<" | "<<a[2]<<"\n";
        cout<<a[3]<<" | "<<a[4]<<" | "<<a[5]<<"\n";
        cout<<a[6]<<" | "<<a[7]<<" | "<<a[8]<<"\n";
        
        if(count%2==0){playernum=1;x=00;}
        else{playernum=2;x=11;}
        
        cout<<"player "<<playernum<<" Choose a number between 1 and 9"<<"   ";
        cin>>input;
        cout<<"\n";
        if(input<10&&input>0){a[input-1]=x;}
        else{cout<<"enter valid number"<<endl;}
        count++;
        win=checkwin(a);        //check if win==true
        if(win==true){cout<<"player "<<playernum<<" wins"<<endl;}
    }
    
}

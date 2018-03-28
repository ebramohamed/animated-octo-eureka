#include <iostream>

using namespace std;

int main()
{
    string message;
    string result;
    int choice;

    cout << " Enter your massage :" << endl;
    getline(cin,message);
    cout<<"1-Encrypt""\n""2-Decrypt""\n""3-End Program""\n\n";
    cin>>choice;

    if(choice==1)
    {

        for(int i=0; i<=message.size(); i++)
        {
            if((char)message[i]>='a' && (char)message[i]<='m')
            {
                result+=(int)message[i]+13;
            }

            else if((char)message[i]>='A' && (char)message[i]<='M')
            {
                result+=(int)message[i]+13;
            }

            if((char)message[i]>'m' && (char)message[i]<='z')
            {
                result+=(int)message[i]-13;
            }

            else if((char)message[i]>'M' && (char)message[i]<='Z')
            {
                result+=(int)message[i]-13;
            }




        }
        cout<<"\n"<<result;
    }

    if(choice==2)
    {
        for(int i=0; i<=message.size(); i++)
        {
            if((char)message[i]>='a' & (char)message[i]<='m')
            {
                result+=(int)message[i]+13;
            }

            else if((char)message[i]>='A' && (char)message[i]<='M')
            {
                result+=(int)message[i]+13;
            }

            if((char)message[i]>'m' && (char)message[i]<='z')
            {
                result+=(int)message[i]-13;
            }

            else if((char)message[i]>'M' && (char)message[i]<='Z')
            {
                result+=(int)message[i]-13;
            }
        }
        cout<<result;
    }

    return 0;
}







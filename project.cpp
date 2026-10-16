//WAP to demonstrate banking management system where 
//main branch will act as a parent class and other branches behave like child class
//variables :branch city head manager main helpline num Transaction
//sub child  :
//city inherit 
//branch pin code , ifsc code 
//branch name

#include<iostream>
#include<string>
using namespace std;

class MainBranch{
    protected :
    string Bank;
    string City;
    string HeadManager;
    int HelplineNum;
    int Transaction;

    public :
    MainBranch(string B,string C, string H, int Help, int T){
        Bank = B;
        City = C;
        HeadManager = H;
        HelplineNum = Help;
        Transaction = T;
    }
    void getinfo(){
        cout<<"Bank            :"<<Bank<<endl;
        cout<<"City            :"<<City<<endl;
        cout<<"Head Manager    :"<<HeadManager<<endl;
        cout<<"Helpline Number :"<<HelplineNum<<endl;
        cout<<"Transaction     :"<<Transaction<<endl;
    }
};
class city : public MainBranch{
    protected :
    string Branchname;
    int Pincode;
    int IFSCcode;
    
    public  :
    city(string B,string C, string H, string Branch, int p, int IFSC, int Help, int T):MainBranch(B,C,H,Help,T){
        Branchname = Branch;
        Pincode = p;
        IFSCcode = IFSC;
    }
    void getinfo(){
        cout<<"Bank            : "<<Bank<<endl;
        cout<<"City            : "<<City<<endl;
        cout<<"Head Manager    : "<<HeadManager<<endl;
        cout<<"Branch          : "<<Branchname<<endl;
        cout<<"Pincode         : "<<Pincode<<endl;
        cout<<"IFSC Code       : "<<IFSCcode<<endl;
        cout<<"Helpline Number : "<<HelplineNum<<endl;
        cout<<"Transaction     : "<<Transaction<<endl;
        
    }
};
int main(){
    city c1("HDFC","Varanasi", "Himanshu Upadhyay","Jalalpur",222136,893748,0112553,10000);
    city c2("HDFC","Varanasi", "Himanshu Upadhyay","Jaunpur",222126,8924458,0112553,50000);
    city c3("HDFC","Varanasi", "Himanshu Upadhyay","Badalapur",222626,8934358,0112553,50000);
    city c4("HDFC","Varanasi", "Himanshu Upadhyay","Bhadohi",222166,8934458,0112553,50000);
    city c5("HDFC","Varanasi", "Himanshu Upadhyay","Mariahu",222236,89234458,0112553,50000);
    cout<<endl; 
    cout<<endl;
    cout<<"========== BANKING MANAGEMENT SYSTEM =========="<<endl;
    cout<<endl;
    cout<<endl;

    c1.getinfo();
    cout<<endl;
    cout<<endl;
    c2.getinfo();
    cout<<endl;
    cout<<endl;
    c3.getinfo();
    cout<<endl;
    cout<<endl;
    c4.getinfo();
    cout<<endl;
    cout<<endl;
    c5.getinfo();
    cout<<endl;
    
    return 0;
}
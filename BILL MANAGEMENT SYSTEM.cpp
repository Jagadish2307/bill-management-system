#include<iostream>

using namespace std;

int main() {
    
    int qI=0,qD=0,qB=0,qCR=0,qC=0;
    
    int pI=100,pD=200,pB=300,pCR=250,pC=75;
    
    cout<<"\n\n\n\n\n\t\t\tWelcome to Food Center ! ";
    cout<<"\n\t\t\t --------------- MENU----------------";
    cout<<"\n";
    cout<<"\n\t\t\t IDLY--------------------------PK 100";
    cout<<"\n\t\t\t DOSA--------------------------PK 200";
    cout<<"\n\t\t\t BRIYANI-----------------------PK 300";
    cout<<"\n\t\t\t CURD RICE---------------------PK 250";
    cout<<"\n\t\t\t CHAPATHI----------------------PK  75";
    
    cout<<"\n\t\t\t -------------------------------------";
    cout<<"\n\n\t\t\t ENTER QUANTITY OF EACH ITEM TO BUY ";
    cout<<"\n\t\t\t NUMBER OF IDLY: ";
    cin>>qI;
    cout<<"\n\t\t\t NUMBER OF DOSA: ";
    cin>>qD;
    cout<<"\n\t\t\t NUMBER OF BRIYANI: ";
    cin>>qB;
    cout<<"\n\t\t\t NUMBER OF CURD RICE: ";
    cin>>qCR;
    cout<<"\n\t\t\t NUMBER OF CHAPATHI: ";
    cin>>qC;
    
    int tI=qI * pI;
    int tD=qD * pD;
    int tB=qB * pB;
    int tCR=qCR * pCR;
    int tC=qC * pC;
    
    system("cls");
    cout<<"\n\n\n\n\t\t************************************";
    cout<<"\n\t\t\t\t\tCUSTOMER's BILL";
    cout<<"\n\n\n\n\t\t************************************";
    
    
    cout<<"\n\t\tQUANTITY\t\tDESCRIPTION\t\tUNIT PRICE\t\tFINAL PRICE";
    cout<<"\n\t\t"<<qI<<"\t\t\tIDLY\t\t\t     100\t\t"<<"\t "<<tI;
    cout<<"\n\t\t"<<qD<<"\t\t\tDOSA\t\t\t     200\t\t"<<"\t "<<tD;
    cout<<"\n\t\t"<<qB<<"\t\t\tBRIYANI\t\t\t  300\t\t"<<"\t "<<tB;
    cout<<"\n\t\t"<<qCR<<"\t\t\tCURD RICE\t\t 250\t\t"<<"\t "<<tCR;
    cout<<"\n\t\t"<<qC<<"\t\t\tCHAPATHI\t\t\t  75\t\t"<<"\t "<<tC;
    
    int totalPrice= tI+tD+tB+tCR+tC;
    float discount=10.0*totalPrice/100;
    float netBill=totalPrice - discount;
    
    cout<<"\n\n\n\n\t\t\t\t\tTOTAL BILL: "<<totalPrice;
    cout<<"\n\n\n\n\t\t\tDISCOUNT (10%): "<<discount;
    cout<<"\n\n\n\n\t\t\t\t\t\tNET BILL: "<<netBill;
    
    return 0;
}
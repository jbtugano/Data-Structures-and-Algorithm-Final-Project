#include <iostream>
#include <string> 
#include <cstdlib>
#include <ctime>
#include <string.h>
#include <stdio.h>
using namespace std;

class DigiGuess
{
public:
    void showCentralMsg(const char* txtMsg);
    void msgHeader(const char *txtMsg);
    void welcomeRemark();
    void drawLine(int v, char token);
    void gameGuidelines();
};
void DigiGuess::drawLine(int v, char token)
{
    for(int i=0; i<v; i++)
        cout << token;
    cout << "\n" ;
}
void DigiGuess::gameGuidelines()
{
    msgHeader("Mahalagang mga panuto sa laro (Tignan muna bago mag-umpisa!)");
    cout << "\n\n\n\n";
    drawLine(120,'_');
    cout << "\n\t ----------------------------------------> SIMPLE LANG NAMAN <------------------------------------------\n\n";
    cout << "\t UNA - Pumili ka lang ng angkop na numero mula 1-20\n\n";
    cout << "\t PANGALAWA - Kapag nakuha mo ang tamang numero, x20 ang mapapanalunan mong premyo sa iyong itinaya\n";
    cout << "\t  (Halimbawa: Tumaya ka ng 5 PESOS, pag nanalo ka, madaragdagan pa ng 50 PESOS ang balanseng pantaya mo.)\n\n";
    cout << "\t PANGATLO - Kapag mali naman ang hula mo, mababawasan ang halaga ng iyong balanseng itinaya\n\n";
    drawLine(120,'_');
    cout << "\n\n\t\t\t Pindutin kahit ano.....";
    getchar();
}
void DigiGuess::showCentralMsg(const char* txtMsg)
{
    int len = 0;
    int pos = 0;
    len = (78 - strlen(txtMsg))/2;
    cout << "\t\t\t";
    for(pos = 0 ; pos < len ; pos++)
    {
        cout <<" ";
    }
    cout << txtMsg;
}
void DigiGuess::msgHeader(const char *txtMsg)
{
    cout << "\t\t\tVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV\n";
    cout << "\t\t\tVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV";
    cout << "\n\t\t\t>>>>>>>>>>>                                                   <<<<<<<<<<<<<";
    cout << "\n\t\t\t>>>>>>>>>>>                  DigiGuessIt? (2.0)               <<<<<<<<<<<<<";
    cout << "\n\t\t\t>>>>>>>>>>>          (TUGAVEZ) MINI-LOTTO XPRESS (PH)         <<<<<<<<<<<<<";
    cout << "\n\t\t\t>>>>>>>>>>>                                                   <<<<<<<<<<<<<";
    cout << "\n\t\t\tVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV";
    cout << "\n\t\t\tVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV";
    cout << "\n\t\t\t---------------------------------------------------------------------------\n";
    showCentralMsg(txtMsg);
    cout << "\n\t\t\t---------------------------------------------------------------------------";
}

void DigiGuess::welcomeRemark()
{
    msgHeader("A mini-project designed by: JB Tugano and CJ Chavez (CPE 201)");
    cout << endl << endl;
    cout << "\t\t\tVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV\n";
    cout << "\t\t\tVVVVVV        VVV  VV  VV        VVVVVV    VV  VVVVVVVV  VV       VV         VVVVV\n";
    cout << "\t\t\tVVVVVVVVV  VVVVVV  VV  VV  VVVVVVVVVVV  VV  VV  VVVVVV  VVV  VVVVVVVVVVVVV  VVVVVV\n";
    cout << "\t\t\tVVVVVVVVV  VVVVVV  VV  VV  VV    VVVV  VVVV  VV  VVVV  VVVV       VVVVVVV  VVVVVVV\n";
    cout << "\t\t\tVVVVVVVVV  VVVVVV  VV  VV  VVVV  VVV          VV  VV  VVVVV  VVVVVVVVVVV  VVVVVVVV\n";
    cout << "\t\t\tVVVVVVVVV  VVVVVV      VV        VV  VVVVVVVV  VV    VVVVVV       VVVV        VVVV\n";
    cout << "\t\t\tVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV";
    cout << "\n\t\t\t         =========================================================\n";
    cout << "\n\t\t\t               ##############################################";
    cout << "\n\t\t\t               ##                                          ##";
    cout << "\n\t\t\t               ##       MALIGAYANG PAGLALARO SA ATING      ##";
    cout << "\n\t\t\t               ##       MINI-LOTTO Xpress EDITION - PH     ##";
    cout << "\n\t\t\t               ##                  ENJOY!!!                ##";
    cout << "\n\t\t\t               ##                                          ##";
    cout << "\n\t\t\t               ##############################################";
    cout << "\n\t\t\t         =========================================================\n";
    cout << "\n\n\n\t\t\t Pindutin kahit ano.....";
    getchar();
}
class player_data:public DigiGuess
{
public:
    int guessNum_get();
    void guessNum_set();
    void amt_set();
    float amt_get();
    int diceAcq();
    void amtUpdt(const bool win_gme);
    void amtSetBet();
    bool player_wingme();
    void init();
    void msgshow_gmeEnd(const bool isWin);
    player_data():amtBal(0.00),amtBet(0.00),guessNum(-1)
    {
    }
private:
    float amtBal;
    float amtBet; 
    int guessNum; 
};

void player_data::amt_set()
{
    msgHeader("PAYMENT SECTION");
    do
    {
        cout << "\n\nHalaga ng iyong perang itataya : Php. ";
        cin >> amtBal;
        if(amtBal < 0.01f)
        {
            cout << "\n\nIlagay kung magkano ang itatayo mo";
        }
    }
    while(amtBal < 0.01f);
}
float player_data::amt_get()
{
    return amtBal;
}
int player_data::guessNum_get()
{
    return guessNum;
}
void player_data::guessNum_set()
{
    msgHeader("GAME SECTION");
    do
    {
        cout << "\n\nPumili ka ng angkop na numero mula 1-20: ";
        cin >> guessNum;
        if(guessNum <= 0 || guessNum > 20)
            cout << "\n\nPakisuri nang mabuti ang iyong napiling numero! Dapat nasa pagitan lang ng 1-20\n"
                 <<"Paki-ulit!\n ";
    }
    while(guessNum <= 0 || guessNum > 20);
}

void player_data::amtUpdt(const bool win_gme)
{
    amtBal = win_gme? (amtBal + (amtBet *20)): (amtBal - amtBet);
}

void player_data::amtSetBet()
{
    msgHeader("BETTING SECTION");
    do
    {
        cout <<"\n\nHalaga ng itataya sa balanse mo: Php. ";
        cin >> amtBet;
        if(amtBet > amtBal)
        {
            cout << "\n\nAng natira sa'yo ay Php. " << amtBal << endl;
            cout << "Masyadong malaki ang iyong nakuhang halaga na ipangtataya\n";
            cout << "Pumili ng mas mababang halaga.\n";
        }
    }
    while(amtBet > amtBal);
}

bool player_data::player_wingme()
{
    const int dice = rand()%20 + 1;
    return ((dice == guessNum_get())? true:false);
}

void player_data::init()
{
    welcomeRemark();
    srand(time(0));
    gameGuidelines();
}
void player_data::msgshow_gmeEnd(const bool win_gme)
{
    if(win_gme)
    {
        cout << "\n\nMAHUSAY! ❤🙂  Nanalo ka ng Php. " << amtBet * 20;
        cout << "\n\nBagong halaga ng balanseng nasa sa'yo: Php. " << amtBal << endl;
    }
    else
    {
        cout << "\n\nSAYANG! 🙁  Nabawasan ka ng Php. "<< amtBet <<"\n";
        cout << "Sana makuha mo sa susunod." << endl;
        cout << "Bagong halaga ng balanse na nasa sa iyo: Php. " << amtBal << endl;
    }
}
int main()
{
    class player_data participantMain ;
    char opt;
    participantMain.init();
    participantMain.amt_set();
    do
    {
        cout << "Ang iyong kasalukuyang balanse ay Php. " << participantMain.amt_get() << "\n";
        participantMain.amtSetBet();
        participantMain.guessNum_set();
        const bool player_wingme = participantMain.player_wingme();
        participantMain.amtUpdt(player_wingme);
        participantMain.msgshow_gmeEnd(player_wingme);
        if(participantMain.amt_get() == 0.00f)
        {
            cout << "Pasensya na, wala ka ng balanseng natitira upang ipagpatuloy ang laro. Salamat sa paglalaro! ";
            break;
        }
        cout << "\n\n--> Gusto mo pa bang maglaro ( o ➡ oo | h ➡ hindi)? ";
        cin >> opt;
    }
    while(opt =='O'|| opt =='o');
    cout << "\n\n\n";
    participantMain.drawLine(77,'X');
    cout << "\n   Maraming Salamat sa paglalaro! ❤  Ang natitira mong balanse ay Php. " << participantMain.amt_get() << "\n\n";
    participantMain.drawLine(77,'X');
    return 0;
}

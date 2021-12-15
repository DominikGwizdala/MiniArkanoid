//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMiniArkanoid *MiniArkanoid;
  //prêkdosc pilki
  int x=-6,y=-6;
  int win=42;
  bool collision(TImage * ball, TImage * brick)
  {
     if(ball->Left >= brick->Left-ball->Width && ball->Left <= brick->Left+brick->Width &&
     ball->Top >= brick->Top-ball->Height && ball->Top <= brick->Top+brick->Height)
     {
       return true;
     }
     else return false;
  }
//---------------------------------------------------------------------------
__fastcall TMiniArkanoid::TMiniArkanoid(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMiniArkanoid::timer_ballTimer(TObject *Sender)
{
       ball->Left+=x;
       ball->Top+=y;

       //odbijanie od scian
       if(ball->Left-10 <= tlo->Left) x = -x;
       if(ball->Left+ball->Width+10 >= tlo->Width) x = -x;
       if(ball->Top-10 <= tlo->Top) y = -y;

       //przegrana
       if(ball->Top >= paddle->Top+paddle->Height+15)
       {
         timer_ball->Enabled = false;
         ball->Visible = false;
         Button1->Caption = "You lost, click to play again";
         Button1->Visible = true;
       } else if(ball->Left > paddle->Left-ball->Width/2 && ball->Left < paddle->Left+paddle->Width && ball->Top+ball->Height > paddle->Top)
       {
         if(y>0) y = -y;
       }
       //wygrana
       if(win <= 0)
       {
         timer_ball->Enabled = false;
         ball->Visible = false;
         Button1->Caption = "You won! Click to play again";
         Button1->Visible = true;
       }
       //cegly
       if(collision(ball,Image1) && Image1->Visible == true)
       {x = -x;y = -y;Image1->Visible = false;win--;}
       if(collision(ball,Image2) && Image2->Visible == true)
       {x = -x;y = -y;Image2->Visible = false;win--;}
       if(collision(ball,Image3) && Image3->Visible == true)
       {x = -x;y = -y;Image3->Visible = false;win--;}
       if(collision(ball,Image4) && Image4->Visible == true)
       {x = -x;y = -y;Image4->Visible = false;win--;}
       if(collision(ball,Image5) && Image5->Visible == true)
       {x = -x;y = -y;Image5->Visible = false;win--;}
       if(collision(ball,Image6) && Image6->Visible == true)
       {x = -x;y = -y;Image6->Visible = false;win--;}
       if(collision(ball,Image7) && Image7->Visible == true)
       {x = -x;y = -y;Image7->Visible = false;win--;}
       if(collision(ball,Image8) && Image8->Visible == true)
       {x = -x;y = -y;Image8->Visible = false;win--;}
       if(collision(ball,Image9) && Image9->Visible == true)
       {x = -x;y = -y;Image9->Visible = false;win--;}
       if(collision(ball,Image10) && Image10->Visible == true)
       {x = -x;y = -y;Image10->Visible = false;win--;}
       if(collision(ball,Image11) && Image11->Visible == true)
       {x = -x;y = -y;Image11->Visible = false;win--;}
       if(collision(ball,Image12) && Image12->Visible == true)
       {x = -x;y = -y;Image12->Visible = false;win--;}
       if(collision(ball,Image13) && Image13->Visible == true)
       {x = -x;y = -y;Image13->Visible = false;win--;}
       if(collision(ball,Image14) && Image14->Visible == true)
       {x = -x;y = -y;Image14->Visible = false;win--;}
       if(collision(ball,Image15) && Image15->Visible == true)
       {x = -x;y = -y;Image15->Visible = false;win--;}
       if(collision(ball,Image16) && Image16->Visible == true)
       {x = -x;y = -y;Image16->Visible = false;win--;}
       if(collision(ball,Image17) && Image17->Visible == true)
       {x = -x;y = -y;Image17->Visible = false;win--;}
       if(collision(ball,Image18) && Image18->Visible == true)
       {x = -x;y = -y;Image18->Visible = false;win--;}
       if(collision(ball,Image19) && Image19->Visible == true)
       {x = -x;y = -y;Image19->Visible = false;win--;}
       if(collision(ball,Image20) && Image20->Visible == true)
       {x = -x;y = -y;Image20->Visible = false;win--;}
       if(collision(ball,Image21) && Image21->Visible == true)
       {x = -x;y = -y;Image21->Visible = false;win--;}
       if(collision(ball,Image22) && Image22->Visible == true)
       {x = -x;y = -y;Image22->Visible = false;win--;}
       if(collision(ball,Image23) && Image23->Visible == true)
       {x = -x;y = -y;Image23->Visible = false;win--;}
       if(collision(ball,Image24) && Image24->Visible == true)
       {x = -x;y = -y;Image24->Visible = false;win--;}
       if(collision(ball,Image25) && Image25->Visible == true)
       {x = -x;y = -y;Image25->Visible = false;win--;}
       if(collision(ball,Image26) && Image26->Visible == true)
       {x = -x;y = -y;Image26->Visible = false;win--;}
       if(collision(ball,Image27) && Image27->Visible == true)
       {x = -x;y = -y;Image27->Visible = false;win--;}
       if(collision(ball,Image28) && Image28->Visible == true)
       {x = -x;y = -y;Image28->Visible = false;win--;}
       if(collision(ball,Image29) && Image29->Visible == true)
       {x = -x;y = -y;Image29->Visible = false;win--;}
       if(collision(ball,Image30) && Image30->Visible == true)
       {x = -x;y = -y;Image30->Visible = false;win--;}
       if(collision(ball,Image31) && Image31->Visible == true)
       {x = -x;y = -y;Image31->Visible = false;win--;}
       if(collision(ball,Image32) && Image32->Visible == true)
       {x = -x;y = -y;Image32->Visible = false;win--;}
       if(collision(ball,Image33) && Image33->Visible == true)
       {x = -x;y = -y;Image33->Visible = false;win--;}
       if(collision(ball,Image34) && Image34->Visible == true)
       {x = -x;y = -y;Image34->Visible = false;win--;}
       if(collision(ball,Image35) && Image35->Visible == true)
       {x = -x;y = -y;Image35->Visible = false;win--;}
       if(collision(ball,Image36) && Image36->Visible == true)
       {x = -x;y = -y;Image36->Visible = false;win--;}
       if(collision(ball,Image37) && Image37->Visible == true)
       {x = -x;y = -y;Image37->Visible = false;win--;}
       if(collision(ball,Image38) && Image38->Visible == true)
       {x = -x;y = -y;Image38->Visible = false;win--;}
       if(collision(ball,Image39) && Image39->Visible == true)
       {x = -x;y = -y;Image39->Visible = false;win--;}
       if(collision(ball,Image40) && Image40->Visible == true)
       {x = -x;y = -y;Image40->Visible = false;win--;}
       if(collision(ball,Image41) && Image41->Visible == true)
       {x = -x;y = -y;Image41->Visible = false;win--;}
       if(collision(ball,Image42) && Image42->Visible == true)
       {x = -x;y = -y;Image42->Visible = false;win--;}
}
//---------------------------------------------------------------------------
void __fastcall TMiniArkanoid::rightTimer(TObject *Sender)
{
     if(paddle->Left+paddle->Width < tlo->Width-10) paddle->Left += 10;
}
//---------------------------------------------------------------------------
void __fastcall TMiniArkanoid::leftTimer(TObject *Sender)
{
     if(paddle->Left > 10) paddle->Left -= 10;
}
//---------------------------------------------------------------------------
void __fastcall TMiniArkanoid::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
     if(Key == VK_LEFT || Key == 65) left->Enabled = true;
     if(Key == VK_RIGHT || Key == 68) right->Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TMiniArkanoid::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
     if(Key == VK_LEFT || Key == 65) left->Enabled = false;
     if(Key == VK_RIGHT || Key == 68) right->Enabled = false;
}
//---------------------------------------------------------------------------
void __fastcall TMiniArkanoid::Button1Click(TObject *Sender)
{
     ball->Left = 392;
     ball->Top = 368;
     ball->Visible = true;
     x=-6;
     y=-6;
     timer_ball->Enabled = true;
     Button1->Visible = false;
     win = 12;
     Image1->Visible = true;
     Image2->Visible = true;
     Image3->Visible = true;
     Image4->Visible = true;
     Image5->Visible = true;
     Image6->Visible = true;
     Image7->Visible = true;
     Image8->Visible = true;
     Image9->Visible = true;
     Image10->Visible = true;
     Image11->Visible = true;
     Image12->Visible = true;
     Image13->Visible = true;
     Image14->Visible = true;
     Image15->Visible = true;
     Image16->Visible = true;
     Image17->Visible = true;
     Image18->Visible = true;
     Image19->Visible = true;
     Image20->Visible = true;
     Image21->Visible = true;
     Image22->Visible = true;
     Image23->Visible = true;
     Image24->Visible = true;
     Image25->Visible = true;
     Image26->Visible = true;
     Image27->Visible = true;
     Image28->Visible = true;
     Image29->Visible = true;
     Image30->Visible = true;
     Image31->Visible = true;
     Image32->Visible = true;
     Image33->Visible = true;
     Image34->Visible = true;
     Image35->Visible = true;
     Image36->Visible = true;
     Image37->Visible = true;
     Image38->Visible = true;
     Image39->Visible = true;
     Image40->Visible = true;
     Image41->Visible = true;
     Image42->Visible = true;
}
//---------------------------------------------------------------------------

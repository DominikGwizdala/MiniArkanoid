//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Graphics.hpp>
//---------------------------------------------------------------------------
class TMiniArkanoid : public TForm
{
__published:	// IDE-managed Components
        TShape *tlo;
        TImage *ball;
        TTimer *timer_ball;
        TImage *paddle;
        TTimer *left;
        TTimer *right;
        TImage *Image1;
        TImage *Image2;
        TImage *Image3;
        TImage *Image4;
        TImage *Image5;
        TImage *Image6;
        TImage *Image7;
        TImage *Image8;
        TImage *Image9;
        TImage *Image10;
        TImage *Image11;
        TImage *Image12;
        TImage *Image13;
        TImage *Image14;
        TImage *Image15;
        TImage *Image16;
        TImage *Image17;
        TImage *Image18;
        TImage *Image19;
        TImage *Image20;
        TImage *Image21;
        TImage *Image22;
        TImage *Image23;
        TImage *Image24;
        TImage *Image25;
        TImage *Image26;
        TImage *Image27;
        TImage *Image28;
        TImage *Image29;
        TImage *Image30;
        TImage *Image31;
        TImage *Image32;
        TImage *Image33;
        TImage *Image34;
        TImage *Image35;
        TImage *Image36;
        TImage *Image37;
        TImage *Image38;
        TImage *Image39;
        TImage *Image40;
        TImage *Image41;
        TImage *Image42;
        TButton *Button1;
        void __fastcall timer_ballTimer(TObject *Sender);
        void __fastcall rightTimer(TObject *Sender);
        void __fastcall leftTimer(TObject *Sender);
        void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall FormKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TMiniArkanoid(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMiniArkanoid *MiniArkanoid;
//---------------------------------------------------------------------------
#endif

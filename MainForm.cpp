//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "MainForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	Client->Connect(L"192.168.144.102");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	unsigned char A[2] = {1, 0};
	A[0] = 1;
	A[1] = 0;
	Client->Socket->Write(A, 2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	unsigned char A[2];
	A[0] = 2;
	A[1] = (unsigned char) StrToInt(Edit1->Text);
	Client->Socket->Write(A, 2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	unsigned char A[2] = {3, 0};
	A[0] = 3;
	A[1] = 0;
	Client->Socket->Write(A, 2);
}
//---------------------------------------------------------------------------


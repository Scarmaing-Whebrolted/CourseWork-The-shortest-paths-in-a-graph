#include "Graph.h"
#include "MyForm.h"
#include "Data.h"
#include "DataForm.h"
#include "InputData.h"
#include "OutputData.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;


void MyProject::Graph::OnPaint()
{
	
	throw gcnew System::NotImplementedException();
}

System::Void MyProject::Graph::Graph_Load(System::Object^ sender, System::EventArgs^ e)
{
	//this->OnPaint();
	//Font = gcnew System::Drawing::Font("Times New Roman", (float)7 );

	//return System::Void();
}

System::Void MyProject::Graph::ShowGraph_Click(System::Object^ sender, System::EventArgs^ e)
{
	Graphics^ ������� = this->CreateGraphics();
	Pen^ ���� = gcnew Pen(Color::Red);
	����->Width = 1;
	Brush^ ����� = gcnew SolidBrush(Color::Red);
	�������->Clear(SystemColors::Control);
	//�������->DrawEllipse(����, 50, 50, 50, 50);
	�������->DrawString("������ �� ���-�� �����, ��\n" + "����� ����������� ��������.", Font, �����, 10, 100);
	�������->RotateTransform(90);
	�������->DrawString("������ �� ���-�� �����, ��\n" + "����� ����������� ��������.", Font, �����, 10, 100);
	return System::Void();
}

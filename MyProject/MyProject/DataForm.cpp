#include "MyForm.h"
#include "Data.h"
#include "DataForm.h"
#include "InputData.h"
#include "OutputData.h"
#include <iostream>

using namespace System::Drawing;
Data_ procession;


System::Void MyProject::DataForm::�������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyProject::DataForm::�������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyProject::DataForm::�����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (procession.tops == 0)
	{
		MessageBox::Show("������ �����������!", "��������!");
	}

	dataGridView1->Rows->Clear();
	dataGridView1->Rows->Clear();

	dataGridView1->RowCount = procession.tops;
	dataGridView1->ColumnCount = procession.tops;
	
	Show();
	dataGridView1->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView1->AutoResizeColumns();

	
	return System::Void();
}

System::Void MyProject::DataForm::�������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyProject::DataForm::��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyProject::DataForm::�������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyProject::DataForm::���������������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MyForm^ form = gcnew MyForm();
	//this->Hide();
	form->Show();
}

System::Void MyProject::DataForm::����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	ClearFile("reserved.txt");
	Application::Exit();
}

System::Void MyProject::DataForm::�����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("���������� ���������� ������-������� � �������", "����� ���������� �����");
}

System::Void MyProject::DataForm::DataForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void MyProject::DataForm::�������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	InputData^ form = gcnew InputData();
	//this->Hide();
	form->Show();
	
}

System::Void MyProject::DataForm::DataForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
	procession.Set_Data_Adjacency_Array_From_File("reserved.txt");
	if (procession.tops==0)
	{
		//MessageBox::Show("���������� ���������� ������-������� � �������", "����� ���������� �����");
	}
	return System::Void();
}

void MyProject::DataForm::Show()
{
	//dataGridView1->TopLeftHeaderCell->Value = "�";
	
	string inf = "INF";
	for (int i = 0; i < dataGridView1->RowCount; i++)
	{
		dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i+1);
		dataGridView1->Columns[i]->HeaderCell->Value = Convert::ToString(i + 1);
		for (int j = 0; j < dataGridView1->ColumnCount; j++)
		{
			if (!procession.is_INF(i, j))

				dataGridView1->Rows[i]->Cells[j]->Value= procession.Adjacency_Array[i][j];
			else
				dataGridView1->Rows[i]->Cells[j]->Value = Convert_string_to_String(inf);
		}
	}
}

System::Void MyProject::DataForm::dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
{
	return System::Void();
}

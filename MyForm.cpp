#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main() {
    // ��������� ����� ���������� (�� ��������� - Win98)
    Application::EnableVisualStyles();

    // ���������� ������������������� ������
    Application::SetCompatibleTextRenderingDefault(false);

    Interface::MyForm form;

    Application::Run(% form);
}

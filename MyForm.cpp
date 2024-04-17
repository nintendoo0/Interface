#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main() {
    // Установка стиля интерфейса (по умолчанию - Win98)
    Application::EnableVisualStyles();

    // Отключение пикселизированности шрифта
    Application::SetCompatibleTextRenderingDefault(false);

    Interface::MyForm form;

    Application::Run(% form);
}

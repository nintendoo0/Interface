#include "Calculator.h"
#include "math.h"
array<String^>^ Calculator::Calculate(double a, double b, double c)
{
    array<String^>^ arr = gcnew array<String^>(3);
    double Discriminant;
    if (a != 0)
    {
        Discriminant = b * b - 4 * a * c;
        if (Discriminant > 0)
        {
            arr[0] = Convert::ToString((-b + sqrt(Discriminant)) / (2 * a));
            arr[1] = Convert::ToString((-b - sqrt(Discriminant)) / (2 * a));
            arr[2] = "There are no errors";

            return arr;
        }
        else if (Discriminant == 0)
        {
            arr[0] = Convert::ToString((-b) / (2 * a));
            arr[1] = " ";
            arr[2] = "There are no errors";

            return arr;
        } 
        else
        {
            arr[0] = "There are no roots";
            arr[1] = "There are no roots";
            arr[2] = "Discriminant < 0";
            return arr;
        }
    }
    else
    {
        arr[0] = Convert::ToString((-c) / b);
        arr[1] = " ";
        arr[2] = "There are no errors";
        return arr;
    }
}

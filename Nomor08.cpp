#include <iostream>
using namespace std;
int main ()
{
    int angka_yang_dicari = 30;
    int array[] = {55,53,52,51,30,24,21,15,10,5};
    int min = 0;
    int max = (sizeof(array) / sizeof (*array) - 1);
    int nilai_perkalian;
    while (min<=max)
{
    nilai_perkiraan = (int) (((max+min) / 2));
    if (angka_yang_dicari == array [nilai_perkalian])
{
    cout<<"Angka  yang dicari berada pada index "<<nilai_perkiraan << endl;
    break;
}else if (array[nilai_perkiraan]) < angka_yang_dicari) {
    min = nilai_perkiraan + i;
}else {
    max = nilai_perkiraan - i;
}
cout <<nilai_perkiraan<<endl;
}
return 0;
}


/*1.	Описать процедуру ShiftRight3(A, B, C), выполняющую правый циклический сдвиг: значение A переходит в B, значение B — в C,
значение C — в A (A, B, C — вещественные параметры, являющиеся одновременно входными и выходными). С помощью этой процедуры выполнить
правый циклический сдвиг для двух данных наборов из трех чисел: (A1, B1, C1) и (A2, B2, C2).
2.	Описать процедуру ShiftLeft3(A, B, C), выполняющую левый циклический сдвиг: значение A переходит в C, значение C — в B,
значение B — в A (A, B, C — вещественные параметры, являющиеся одновременно входными и выходными). С помощью этой процедуры выполнить левый циклический сдвиг для
двух данных наборов из трех чисел: (A1, B1, C1) и (A2, B2, C2).
3.	Описать функцию IsLeapYear(Y) логического типа, которая возвращает True, если год Y (целое положительное число) является високосным, и False в противном случае.
Вывести значение функции IsLeapYear для пяти данных значений параметра Y. Високосным считается год, делящийся на 4, за исключением тех годов, которые делятся на 100 и не делятся на 400.
4.	Используя функцию IsLeapYear из задания 3, описать функцию MonthDays(M, Y) целого типа, которая возвращает количество дней для M-го месяца года Y (1 ≤ M ≤ 12, Y > 0 — целые числа).
Вывести значение функции MonthDays для данного года Y и месяцев M1, M2, M3.
5.	Используя функцию MonthDays из задания 4, описать процедуру PrevDate(D, M, Y), которая по информации о правильной дате, включаю- щей день D, номер месяца M и год Y,
определяет предыдущую дату (пара- метры целого типа D, M, Y являются одновременно входными и выходными). Применить процедуру PrevDate к трем исходным датам и вывести полученные значения предыдущих дат
*/

#include <windows.h>
#include <iostream>
#include <locale.h>

using namespace std;

void ShiftLeft3(double, double, double);
void ShiftLeft_3(double A, double B, double C);
int isLeapYear(int year);
int MonthDays(int M, int Y);
int MonthDays2(int M, int Y);
int DaysInMonth(int Day, int Month, int Year);

int main()
{
	setlocale(LC_ALL, "ru");

	int nz;
	cout << "Введите номер задания или 0 что бы выйти: ";
	cin >> nz;

	if (nz == 0)
		system("cls");

	else if (nz == 1)
	{
		/* Opisat' proceduru ShiftRight3(A, B, C), vypolnyayushchuyu pravyj ciklicheskij sdvig: znachenie A perekhodit v B, znachenie B — v C,
znachenie C — v A (A, B, C — veshchestvennye parametry, yavlyayushchiesya odnovremenno vhodnymi i vyhodnymi). S pomoshch'yu ehtoj procedury vypolnit'
pravyj ciklicheskij sdvig dlya dvuh dannyh naborov iz trekh chisel: (A1, B1, C1) i (A2, B2, C2).*/
		system("cls");
		double A, B, C;

		cout << "Введите три любых числа через пробел : ";
		cin >> A >> B >> C;
		ShiftLeft3(A, B, C);

		cout << "Введите еще три любых числа через пробел : ";
		cin >> A >> B >> C;
		ShiftLeft3(A, B, C);

		system("pause");
		return 0;
	}

	else if (nz == 2)
	{
		/*Opisat' proceduru ShiftLeft3(A, B, C), vypolnyayushchuyu levyj ciklicheskij sdvig: znachenie A perekhodit v C, znachenie C — v B,
znachenie B — v A (A, B, C — veshchestvennye parametry, yavlyayushchiesya odnovremenno vhodnymi i vyhodnymi). S pomoshch'yu ehtoj procedury vypolnit' levyj ciklicheskij sdvig dlya
dvuh dannyh naborov iz trekh chisel: (A1, B1, C1) i (A2, B2, C2).*/
		system("cls");
		double A, B, C;

		cout << "Введите три любых числа через пробел : ";
		cin >> A >> B >> C;
		ShiftLeft_3(A, B, C);

		cout << "Введите еще три любых числа через пробел : ";
		cin >> A >> B >> C;
		ShiftLeft_3(A, B, C);

		system("pause");
		return 0;
	}

	else if (nz == 3)
	{
		/*Opisat' funkciyu IsLeapYear(Y) logicheskogo tipa, kotoraya vozvrashchaet True, esli god Y (celoe polozhitel'noe chislo) yavlyaetsya visokosnym, i False v protivnom sluchae.
Vyvesti znachenie funkcii IsLeapYear dlya pyati dannyh znachenij parametra Y. Visokosnym schitaetsya god, delyashchijsya na 4, za isklyucheniem tekh godov, kotorye delyatsya na 100 i ne delyatsya na 400.*/
		system("cls");
		cout << "year 1900:" << isLeapYear(1900) << '\n';
		cout << "year 1990:" << isLeapYear(1990) << '\n';
		cout << "year 1992:" << isLeapYear(1992) << '\n';
		cout << "year 2000:" << isLeapYear(2000) << '\n';
		cout << "year 2002:" << isLeapYear(2002) << '\n';
		cout << "year 2004:" << isLeapYear(2004) << '\n';
		return 0;
	}
	else if (nz == 4)
	{
		/*Ispol'zuya funkciyu IsLeapYear iz zadaniya 3, opisat' funkciyu MonthDays(M, Y) celogo tipa, kotoraya vozvrashchaet kolichestvo dnej dlya M-go mesyaca goda Y (1 ≤ M ≤ 12, Y > 0 — celye chisla).
Vyvesti znachenie funkcii MonthDays dlya dannogo goda Y i mesyacev M1, M2, M3.*/
		system("cls");
		//vesokosnyj god - delitsya na 4,ne delitsya na 100,ne delitsya na 400 
		cout << 31 << " " << MonthDays(1, 2012) << " " << MonthDays2(1, 2012) << endl;
		cout << 29 << " " << MonthDays(2, 2012) << " " << MonthDays2(2, 2012) << endl;
		cout << 30 << " " << MonthDays(9, 2012) << " " << MonthDays2(9, 2012) << endl;

		//ne vesokosnyj god - ne delitsya na 4
		cout << 31 << " " << MonthDays(1, 2003) << " " << MonthDays2(1, 2003) << endl;
		cout << 28 << " " << MonthDays(2, 2003) << " " << MonthDays2(2, 2003) << endl;
		cout << 30 << " " << MonthDays(9, 2003) << " " << MonthDays2(9, 2003) << endl;

		//vesokosnyj god - delitsya na 4,delitsya na 100,delitsya na 400 
		cout << 31 << " " << MonthDays(1, 2000) << " " << MonthDays2(1, 2000) << endl;
		cout << 29 << " " << MonthDays(2, 2000) << " " << MonthDays2(2, 2000) << endl;
		cout << 30 << " " << MonthDays(9, 2000) << " " << MonthDays2(9, 2000) << endl;

		//ne vesokosnyj god - delitsya na 4,delitsya na 100,ne delitsya na 400 
		cout << 31 << " " << MonthDays(1, 1900) << " " << MonthDays2(1, 1900) << endl;
		cout << 28 << " " << MonthDays(2, 1900) << " " << MonthDays2(2, 1900) << endl;
		cout << 30 << " " << MonthDays(9, 1900) << " " << MonthDays2(9, 1900) << endl;
		return 0;
	}
	else if (nz == 5)
	{
		/*Ispol'zuya funkciyu MonthDays iz zadaniya 4, opisat' proceduru PrevDate(D, M, Y), kotoraya po informacii o pravil'noj date, vklyuchayu- shchej den' D, nomer mesyaca M i god Y,
opredelyaet predydushchuyu datu (para- metry celogo tipa D, M, Y yavlyayutsya odnovremenno vhodnymi i vyhodnymi).
Primenit' proceduru PrevDate k trem iskhodnym datam i vyvesti poluchennye znacheniya predydushchih dat*/
		system("cls");
		int day, month, year;
		

		cout << "Введите день: ";
		cin >> day;
		cout << "Введите месяц: ";
		cin >> month;
		cout << "Введите год: ";
		cin >> year;

		cout << DaysInMonth(day,month,year) << "." << DaysInMonth(day, month, year) << "." << DaysInMonth(day, month, year)  << endl;
		// Ya tut chtoto naputal i ppc zaputalcya))))

		system("pause");

		return 0;
	}
}

// Ciklicheskij sdvig v pravo znachenij dlya pervogo zadaniya
void ShiftLeft3(double A, double B, double C)
{
	cout << "После сдвига числа выглядят так: " << B << "  " << C << "  " << A << endl;
}

// Ciklicheskij sdvig v levo znachenij dlya pervogo zadaniya
void ShiftLeft_3(double A, double B, double C)
{
	cout << "После сдвига числа выглядят так: " << C << "  " << A << "  " << B << endl;
}

// Funkciya kotoraya vozvrashchaet True, esli god yavlyaetsya visokosnym, i False v protivnom sluchae
int isLeapYear(int Y)
{
	if (Y % 4 == 0 && Y % 100 != 0 || Y % 400 == 0)
	{
		return true;
	}
	return false;
}

//funkciya celogo tipa, kotoraya vozvrashchaet kolichestvo dnej dlya M-go mesyaca goda Y
int MonthDays(int M, int Y)
{
	if (M == 2)
	{
		if (isLeapYear(Y))
			return 29;
		return 28;
	}
	if (M >= 1 && M <= 7)return (M % 2) ? 31 : 30;
	return (M % 2) ? 30 : 31;
}
int MonthDays2(int M, int Y)
{
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	if (M == 2 && isLeapYear(Y))
		return month[M - 1] + 1;
	return month[M - 1];
}

//
int DaysInMonth(int Day, int Month, int Year)
{
	if (Month == 2)
	{
		if ((Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0)
			return 29;
		else return 28;
	}
	else
		if (Month < 8)
			return Month % 2 == 0 ? 30 : 31;
		else return Month % 2 == 0 ? 31 : 30;

}


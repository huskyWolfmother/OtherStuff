//проверка ввода, один фиг принимает кусочек значения
std::cin >> dayNumber;
		while(std::cin.fail() || dayNumber <= 0 || dayNumber >= 366)
		{
			std::cout << "Неправильный ввод! Пожалуйста, введите заново (1 - 365): ";
			std::cin.clear();
			std::cin.sync();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cin >> dayNumber;
		}

// сниппет продолжить? y/a
void continue_yn()
{
	char yn;
	std::cout << "Продолжить? [Y/N] ";
	while (true)
	{
		yn = _getch();
		if (yn == 'N' || yn == 'n')
		{
			std::cout << yn << std::endl;
			exit(0);
		}
		else
			if (yn == 'Y' || yn == 'y')
			{
				std::cout << yn << std::endl;
				break;
			}
	};
}

//выход по нажатию Esc
void gtfo_esc()
{
	char c = _getch();
	if (c == 27)
		exit(0);
}
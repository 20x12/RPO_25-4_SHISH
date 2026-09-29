#include <iostream>
#include <Windows.h>

int main() 
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8); //		1251
	srand(time(NULL));

	int choose = 0, randomNumber = 0, hp = 0, number = 0;
	int maxHp = 25, maxHPHard = 25, chacne = 30;

	while (true)
	{
		system("cls");
		std::cout << "\n\n\n Игра \"Угадай Число\"\n\n\n";
		std::cout << " 1 - Начать игру\n";
		std::cout << " 2 - Настройки\n";
		std::cout << " 0 - Выход\n\n";
		std::cout << " Ввод: ";
		std::cin >> choose;

		if (choose == 1)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n Выберите уровень сложности\n\n\n";
				std::cout << " 1 - Легкий (1 - 500)\n";
				std::cout << " 2 - Сложный (1 - 5000)\n";
				std::cout << " 0 - Выход в гланое меню\n\n";
				std::cout << " Ввод: ";
				std::cin >> choose;

				if (choose == 1)
				{
					randomNumber = rand() % 500 + 1;
					hp = maxHp;

					while (true)
					{
						std::cout << " Кол-во жизней: " << hp << "\n";
						std::cout << " Введите число от 1 до 500: ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << " Вы угадали! Поздравляем!\n";

							system("pause");
							break;
						}
						else if (number < 1 || number > 500)
						{
							std::cout << " Вы вышли за лимиты.\n";
							Sleep(2000);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << " Вы проиграли!\n" << " Число компьютера было: " << randomNumber << "\n\n";
								system("pause");
								break;
							}

							std::cout << "\n Не верно.\n";
							std::cout << " Кол-во жизней: " << hp << "\n\n";
							std::cout << " Взять подсказку за 1 жизнь?\n";
							std::cout << " 1 - Да\n Любое число - Нет\n Ввод: ";
							std::cin >> choose;
							if (choose == 1)
							{

								hp--;
								if (hp <= 0)
								{
									std::cout << " Вы проиграли!\n" << " Число компьютера было: " << randomNumber << "\n\n";
									system("pause");
									break;
								}

								if (number < randomNumber)
								{
									std::cout << " Ваше число меньше числа компьютера.\n\n";
								}
								else
								{
									std::cout << " Ваше число больше числа компьютера.\n\n";
								}
								Sleep(2000);
							}
							else
							{
								std::cout << " Отказ от подсказки\n";
								Sleep(750);
							}

						}

					}
				}
				else if (choose == 2)
				{
					while (true)
					{
						std::cout << " Кол-во жизней: " << hp << "\n";
						std::cout << " Введите число от 1 до 5000: ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << " Вы угадали! Поздравляем!\n";

							system("pause");
							break;
						}
						else if (number < 1 || number > 5000)
						{
							std::cout << " Вы вышли за лимиты.\n";
							Sleep(2000);
						}
						else
						{
							hp--;
							if (hp <= 0)
							{
								std::cout << " Вы проиграли!\n" << " Число компьютера было: " << randomNumber << "\n\n";
								system("pause");
								break;
							}

							std::cout << "\n Не верно.\n";
							std::cout << " Кол-во жизней: " << hp << "\n\n";
							std::cout << " Взять подсказку за 1 жизнь?\n";
							std::cout << " 1 - Да\n Любое число - Нет\n Ввод: ";
							std::cin >> choose;
							if (choose == 1)
							{
								if (rand() % 101 <= chacne)
								{
									std::cout << " Бесплатная подсказка!\n";
									Sleep(1333);
								}
								else
								{
									hp--;
									if (hp <= 0)
									{
										std::cout << " Вы проиграли!\n" << " Число компьютера было: " << randomNumber << "\n\n";
										system("pause");
										break;
									}
								}

								if (number < randomNumber)
								{
									std::cout << " Ваше число меньше числа компьютера.\n\n";
								}
								else
								{
									std::cout << " Ваше число больше числа компьютера.\n\n";
								}
								Sleep(2000);
							}
							else
							{
								std::cout << " Отказ от подсказки\n";
								Sleep(750);
							}

						}

					}
				}

				else if (choose == 0)
				{
					break;
				}
				else
				{
					std::cout << "\n Некоректный ввод!\n";
					Sleep(2500);
				}
			}

		}
		else if (choose == 2)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n Настройки игры\n\n\n";
				std::cout << " 1 - Изменить кол-во жизней для легкой игры\n";
				std::cout << " 2 - Изменить кол-во жизней для сложной игры\n";
				std::cout << " 3 - Изменить шанс бесплатной подсказки для сожной игры\n";
				std::cout << " 0 - Выход\n\n";
				std::cout << " Ввод: ";
				std::cin >> choose;

				if (choose == 1)
				{
					while (true)
					{
						std::cout << " Введите кол-во жизней для легкой игры: ";
						std::cin >> choose;
						if (choose < 1 || choose > 100)
						{
							std::cout << " Допустимые значения от 1 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << " Успешно\n";
							maxHp = choose;
							Sleep(1500);
							break;
						}
					}
				}
				else if (choose == 2)
				{
					while (true)
					{
						std::cout << " Введите кол-во жизней для сложной игры: ";
						std::cin >> choose;
						if (choose < 1 || choose > 100)
						{
							std::cout << " Допустимые значения от 1 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << " Успешно\n";
							maxHp = choose;
							Sleep(1500);
							break;
						}
					}
				}
				else if (choose == 3)
				{
					while (true)
					{
						std::cout << " Введите шанс бесплатной подсказки для сложной игры: ";
						std::cin >> choose;
						if (choose < 0 || choose > 100)
						{
							std::cout << " Допустимые значения от 0 до 100\n";
							Sleep(1500);
						}
						else
						{
							std::cout << " Успешно\n";
							maxHp = choose;
							Sleep(1500);
							break;
						}
					}
				}
				else if (choose == 0)
				{

				}
				else
				{

				}
			}
		}

		else if (choose == 0)
		{
			system("cls");
			std::cout << "\n\n\n Спасибо за игру\n\n\n";
			break;
		}

		else
		{
			std::cout << "\n Некоректный ввод!\n";
			Sleep(2500);
		}
	}

	return 0;
}


/*
	
	Типы данных: 
	  1. bool						false/true		(0 -- fasle | все кроме ноля, даже -X -- true)
	  2. char						'X'				-- Любой вводимый с клавиатуры символ ('+' - 43 | char X = '+'; | числа от -128 до 127)
	  3. unsigned char				'#'				(числа 0 - 255)
	 
	  4. short						123				-32768 -- 32767
	  5. unsigned short				123				0 -- 65535

	  6. int							456326			-2147483648 -- 2147483648
	  7. long long int				12345678		-9223372036854775808 -- 9223372036854775807
	  8. unsigned long long int		12345678		0 -- 18446744073709551615

	  9. float						12345.4561		+- 3.4E+-38
	 10. double						12345678.10536  1.7E+-308

	Операторы:
	
	 Математические: + - * / = % | ++ -- += -= инкремент 1 | *= /= инкремент со значением | ()  приоритет
	 Сравнительные: > < >= <= != == <=>
	 Логические: && - (и)		|| - (или)		! - (не)

	 ТАБУ: goto		and or not		int имяПеременной 
*/
#include <iostream>
#define MODE 1
#ifndef MODE
//#  define MSG "Необходимо определить константу MODE!\n"
#  define MSG ""
#  error Необходимо определить константу MODE needs to be defined for the program to compile
#elif MODE==0
#  define MSG "Работаю в режиме тренировки\n"
#elif MODE==1
#  define MSG "Работаю в боевом режиме\n"
  void add(){
    double a,b;
    std::cout<<"Введите число 1: ";
    std::cin>>a;
    std::cout<<"Введите число 2: ";
    std::cin>>b;
    std::cout<<"Результат сложения: "<< a+b<<"\n";
  }
#else
#  define MSG "Неизвестный режим. Завершение работы\n"
//#  error Неизвестный режим Завершение работы
#endif

int main() {
  std::cout<<MSG;
# if MODE==1
    add();
# endif
  return 0;
}

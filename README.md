# OTUS C++ Basic курс

## Задание "Инженерный калькулятор"

В даннмо репозитории реализован лексер для построения калькулятора

## Инструкция по сборке

Требуется компиялтор с поддержкой C++17

Для сборки проекта необходимы выполнить следующие команды
```
mkdir build && cd build
cmake ..
cmake --build .
```

Примеры работы:
```bash
$echo "3 + 12 * 4" | ./calc
Number: 3
Operator: +
Number: 12
Operator: *
Number: 4
$echo "a*a + 2*a*b + b*b" | ./calc
Name: a
Operator: *
Name: a
Operator: +
Number: 2
Operator: *
Name: a
Operator: *
Name: b
Operator: +
Name: b
Operator: *
Name: b
```
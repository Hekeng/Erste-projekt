function sum_funk() {
    var a = "a"; // <<< Переменная 'a' объявлена ЛОКАЛЬНО внутри sum_funk
    print();     // <<< Вызов функции print()
}

// Функция print объявляется в глобальной области
function print() {
    console.log(a); // <<< Пытаемся получить доступ к 'a'
}

sum_funk(); // Запуск
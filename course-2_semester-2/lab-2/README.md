# Вариант 15

## [![Typing SVG](https://readme-typing-svg.herokuapp.com?font=Fira+Code&size=32&pause=1000&color=DAF745&width=435&lines=%D0%9E%D0%BF%D0%B8%D1%81%D0%B0%D0%BD%D0%B8%D0%B5+%D0%B2%D0%B0%D1%80%D0%B8%D0%B0%D0%BD%D1%82%D0%B0)](https://git.io/typing-svg)
| Название книги | ФИО автора | Издательство | Число томов | тираж | итого томов |
|----------------|------------|--------------|-------------|-------|--------------|
|                |            |              |             |       | (не вводится руками, а вычисляется автоматически) |

**Условия поиска и удаления:**

- по ФИО автора;
- по издательству и ФИО автора;
- по числу томов (задается верхний и нижний предел);
- по названию книги;
- тираж больше/меньше заданной границы;
- итого томов больше/меньше заданной границы.

---

## [![Typing SVG](https://readme-typing-svg.herokuapp.com?font=Fira+Code&size=32&pause=1000&color=DAF745&width=435&lines=%D0%A1%D1%82%D1%80%D1%83%D0%BA%D1%82%D1%83%D1%80%D0%B0+XML-%D1%84%D0%B0%D0%B9%D0%BB%D0%B0)](https://git.io/typing-svg)

### Корневой элемент (`<books>`)

Содержит список всех книг.

Каждая книга представлена элементом `<book>`.

---

### Элемент книги (`<book>`)

Содержит информацию о конкретной книге.

Включает следующие дочерние элементы:

- `<title>`: Название книги.
- `<author>`: ФИО автора книги.
- `<publisher>`: Название издательства.
- `<volumes>`: Количество томов в книге.
- `<copies>`: Тираж книги.
- `<totalVolumes>`: Итоговое количество томов.

---

---

## [![Typing SVG](https://readme-typing-svg.herokuapp.com?font=Fira+Code&size=32&pause=1000&color=DAF745&width=435&lines=%D0%A1%D1%86%D0%B5%D0%BD%D0%B0%D1%80%D0%B8%D0%B9+%D0%B8+%D1%81%D1%82%D1%80%D1%83%D0%BA%D1%82%D1%83%D1%80%D0%B0+%D0%9F%D0%9E)](https://git.io/typing-svg)

### Header

<span style="font-size: 32px; font-weight: bold;">Общий вид</span>

![image](https://github.com/user-attachments/assets/28d86c8f-5cc0-4c75-b5d5-ddef27a568a1)

<span style="font-size: 32px; font-weight: bold;">Панель навигации</span>

![image](https://github.com/user-attachments/assets/d1f0f398-9935-4176-8149-831e6456d139)


---

---

## [![Typing SVG](https://readme-typing-svg.herokuapp.com?font=Fira+Code&size=32&pause=1000&color=DAF745&width=435&lines=%D0%9A%D0%BB%D0%B0%D1%81%D1%81%D1%8B)](https://git.io/typing-svg)

### HighlightedBooks
Класс, описывающий книги подходящие по критериям отбора.
* **Атрибуты**:
  * `__books`: Все книги
  * `__title`: Название
  * `__author_first_name`: Имя
  * `__author_last_name`: Фамилия
  * `__publisher`: Издательство
  * `__min_volumes`: Минимальный тираж
  * `__max_volumes`: Максимальный тираж
  * `__min_copies`: Минимальное количество глав
  * `__max_copies`: Максимальное количество глав
  * `__min_total_volumes`: Минимальный итоговый тираж
  * `__min_total_volumes`: Максимальный итоговый тираж
* **Методы**:
  * `get_books()`: Передает книги подходящие по критериям отбора.

---

### CreatedBooks
Класс, описывающий создаваемую книгу
* **Атрибуты**:
  * `__title`: Название
  * `__author_first_name`: Имя
  * `__author_last_name`: Фамилия
  * `__publisher`: Издательство
  * `__volumes`: Тираж
  * `__copies`: Количество глав
  * `__total_volumes`: Итоговый тираж
* **Методы**:
  * `get_books()`: Передает создаваемую книгу

---

### Debouncer
Класс, создающий задержку перед применением функции
* **Атрибуты**:
  * `delay`: Время задержки
  * `timer`: Таймер

* **Методы**:
  * `debounce()`: Производит задержку перед выполением

---

---

---
  

# Model of preparation for the defense of the diploma project

## [![Typing SVG](https://readme-typing-svg.herokuapp.com?font=Fira+Code&pause=1000&color=FED967&width=435&lines=%D0%9E%D0%BF%D0%B8%D1%81%D0%B0%D0%BD%D0%B8%D0%B5)](https://git.io/typing-svg)
Система сдачи дипломного проекта, позволяет проводить операции:
* операция подготовки презентации и доклада
* операция рецензирования и корректировки работы 
* операция проведения репетиций защиты
* операция ответов на вопросы комиссии
* операция аттестации и выставления оценок


## [![Typing SVG](https://readme-typing-svg.herokuapp.com?font=Fira+Code&pause=1000&color=FED967&width=435&lines=%D0%9A%D0%BB%D0%B0%D1%81%D1%81%D1%8B)](https://git.io/typing-svg)
### Commission
Класс, описывающий комиссию.
* **Атрибуты**:
  * `__commission`: Члены комиссии.
  * `__max_difficulty`: Максимальная сложность для проверки работы.
  * `__upcoming_before_max_difficulty`: Предмаксимальная сложность для проверки работы.
* **Методы**:
  * `add_committeeman()`: Добавление члена комиссии.
  * `commission_is()`: Состоит ли комиссия хотя бы из 3 членов.
  * `rehearsal_diploma_project()`: Проверка дипломной работы.

---

### Committeeman
Класс, описывающий члена комиссии.
* **Атрибуты**:
  * `__profession`: Профессия члена комиссии.
  * `__difficulty_to_pass`: Сложность с которой член комиссии анализирует дипломную работу.
* **Методы**:
  * `add_committeeman()`: Добавление информации о члене комиссии.

---

### DiplomaProject
Класс, описывающий дипломный объект.
* **Атрибуты**:
  * `__presentation`: Процент покрытия темы проект в презинтации.
  * `__report`: Процент покрытия темы проект в докладе.
  * `__mark`: Отметка за проект.
* **Методы**:
  * `presentation_create()`: Создать презинтацию.
  * `report_create()`: Создать доклад.
  * `presentation_revision()`: Отладка презинтации.
  * `report_revision()`: Отладка доклада.
  * `set_mark()`: Запись отметки.

---

### Commission
Класс, описывающий комиссию.
* **Атрибуты**:
  * `__commission`: Члены комиссии.
  * `__difficulty_to_pass`: Предмаксимальная сложность для проверки работы.
* **Методы**:
  * `add_committeeman()`: Добавление члена комиссии.
  * `commission_is()`: Состоит ли комиссия хотя бы из 3 членов.
  * `rehearsal_diploma_project()`: Проверка дипломной работы.

---

### Commission
Класс, описывающий комиссию.
* **Атрибуты**:
  * `__commission`: Члены комиссии.
  * `__max_difficulty`: Максимальная сложность для проверки работы.
  * `__upcoming_before_max_difficulty`: Предмаксимальная сложность для проверки работы.
* **Методы**:
  * `add_committeeman()`: Добавление члена комиссии.
  * `commission_is()`: Состоит ли комиссия хотя бы из 3 членов.
  * `rehearsal_diploma_project()`: Проверка дипломной работы.

---
    
---

---
  

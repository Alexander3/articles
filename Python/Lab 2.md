<img src="http://starecat.com/content/wp-content/uploads/programming-languages-as-guns-assembler-c-cpp-python.jpg" height="400px"/>

<h1 align="center"><a href="First steps.md"> << </a>Warsztat 2</h1>
## Pomoc w konsoli
W konsolę pythona wbudowane są 2 narzędzia umożliwiające przeszukiwanie metod dowolnego obiektu.
```python
a = [1,2,3]
dir(a)          # Wypisuje metody obiektu
help(a.append)  # Wyświetla dokumentację
```
Pozwala to dowiedzieć się co można zrobić np. z listą.
Rzeczy zaczynające się od `__` (np. `__add__`) przeważnie nas nie interesują, są to wewnętrzne mechanizmy.

## Struktury Danych
```python
lista = [1, 2, 'c', 4, 5, 6]
krotka = (1, 2, 'e') #immutable - to znaczy, że nie można edytować raz stworzonej krotki
slownik = { # tablica asocjacyjna, czyli indeksowana dowolnymi obiektami
#   klucz: wartość
    "a" : 123,
    "b" : "c",
    5 : "d"
}
```
#### Odwołania do elementów
```python
lista[0]		# Pierwszy element
lista[4] 		# Piąty element
lista[-1]		# Ostatni element
```
##### Slicing
```python
a = [1, 2, 3, 4, 5]
a[0:2]				# Pierwsze dwa elementy
a[-3:]				# Od trzeciego od końca
a[1:4:2]			# [start:stop:step]
a[::2]				# Co drugi element z listy
```

Analogicznie dla słowników:
```python
d = {} # pusty słownik

# Wstawianie elementów
d['a'] = 5
d[1] = 12
```

#### Operacje na listach
```python
a.append('abc')  	# Dodawanie elementów
a.pop()				# Usunięcie ostatniego elementu
a = a + [3, 4, 5]	# Dodawanie list
b = ['a']*5			# Oznacza to samo co ['a','a','a','a','a']
'a' in b			# Sprawdza czy 'a' należy do b - zwraca wartość logiczną
```

## Zadania robione na zajęciach
1. Na podstawie listy liczb całkowitych stwórz drugą, która zwiera tylko elementy parzyste
2. Znajdź metody listy, które pozwolą:
	* Usunąć element o danej wartości
    * Zwrócą indeks danego elementu
    * Usunąć element o danym indeksie
3. ```python
    a = list(range(10))
    b = list(range(5,15))
    c = []
    ```
    Dodaj do `c` częsć wspólną `a` i `b` (nie zastanawiaj się na razie dlaczego musimy rzurować na listę, o generatorach będzie później)
4. Wyrzuć z listy `a` elementy znajdujące się też w `b`.
5. ```python
	s="abcabcabaaasasda"
    ```
    Znajdź 2 sposoby na zamienienie wszystkich `'a'` na `'$'`
 
## Inne zadania
1. Funkcja przyjmująca listę, zwracająca nową krotkę złożoną z jej pierwszego i ostatniego elementu. np. [5, 10, 15, 20, 25] --> (5, 25).
    
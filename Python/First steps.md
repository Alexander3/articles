<img src="http://testhuddle.com/wp-content/uploads/2014/05/python-programming.jpg" style="width: 300px;"/>

Instalacja Pythona pod [Windows](https://www.python.org/ftp/python/3.5.0/python-3.5.0.exe "Python 3.5 for Windows"), dla Debiana/Ubuntu `sudo apt-get install python3`


[Konsola Ipython 3 online](https://console.python.org/python-dot-org-console/console_frame/), jeśli nie działa to kliknij [tutaj](https://www.python.org/shell/)

Ipython to nakładka na konsolę pythona dająca podpowiadanie składni

- Tab - podpowiada możliwe zakończenia
- `_` - wartość ostatniego wyrażenia
- `?` - wyświetla dokumentację np. `> print?`

#Typy proste:
```python
    calkowita = 7
    rzeczywista = 7.5
    rzeczywista = float(38)
    napis = 'witaj'
    napis = "witaj"
    napis = "Nie martw sie o 'pojedyncze' cudzyslowy."
```
#Pomoc w konsoli
```python
dir(napis)          # Wypisuje metody obiektu 
help(type(napis))   # Wyświetla dokumentację
```
#Struktury Danych
```python
lista = [1, 2, 'c']
krotka = (1, 2, 'e') #immutable
slownik = { # tablica asocjacyjna indeksowana dowolnymi obiektami
    "a" : 123,
    "b" : "c",
    5 : "d"
}
```
## Przypisywanie elementów
```python
d = {}
d['a'] = 5
d[1] = 12
print(d)
```
analogicznie dla list
### Odwołania do elementów
```python
print("{} + {} = {}".format(d['a'], d[1], d['a'] + d[1]))  # String.format wstawia swoje argumnty w {}
print("Pierwszy: {}, ostatni: {}".format(lista[0], lista[-1])
```
### Operacje na listach
```python
a=[]
a.append(1)
a.append('a')
a.append('b')
print(a)
a.pop()
print(a)
a = a + [3, 4, 5]
print(a)
```
#Funkcje
```python
def square(x):
    return x*x 
```
#Zadania
1. Funkcja przyjmująca listę, zwracająca nową krotkę złożoną z jej pierwszego i ostatniego elementu. np. [5, 10, 15, 20, 25] --> (5, 25)


#See Also
- [learnpython.org](http://www.learnpython.org/pl/Welcome "learnpython.org")
- [Zanurkuj w Pythonie](https://pl.wikibooks.org/wiki/Zanurkuj_w_Pythonie "Zanurkuj w Pythonie")
- [practicepython.org](http://www.practicepython.org/)


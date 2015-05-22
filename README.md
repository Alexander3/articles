# Narzędzia do debugowania w środowiskach Windows i Linux #
Wykład dla KNI [KERNEL](kernel.fis.agh.edu.pl) (WFiS AGH) <img src="/res/logo.jpg" alt="Kernel Logo" style="width: 200px;"/>
## Linux ##
### GDB ###
Debugger na którym opiera się wiele graficznych narzędzi. Np. Clion udostępnia konsolę GDB. Poza podstawowymi funkcjonalnościami (*break,
run, continue*) pozwala na wyświetlenie asemblera (*disass <function name>*, *layout asm*).

[Podstawowe komendy GDB](http://www.ftj.agh.edu.pl/~Bold/content.php?name=cppstart)

[Ciekawy przykład użycia GDB do generowania shellcode](http://jroweboy.github.io/c/asm/2015/01/26/when-is-main-not-a-function.html)

### Strace ###
Umożliwia zobaczenie co dzieje się pomiędzy programem a kernelem Linuxa. Możemy zobaczyć wywołania systemowe (ang. syscalls) jakich użył program z argumentami i wartością zwracaną. Strace może selektywnie śledzić: 

- operacjie na plikach (*open,write,stat,chmod,unlink*)
- procesy (*fork, wait, exec*)
- sieć
- sygnały (*SIGSEGV,SIGINT,SIGTERM,SIGKILL*)

Przykład: ([src](/src/strace_example.c))

![](/res/strace.png)

Możemy też sprawdzić z jakimi argumentami został wywołany program.
Używając strace możemy zobaczyć co tak naprawdę oznacza gwiazdka – krótko mówiąc, zamieniła się w listę wszystkich plików w danym katalogu, a plik o nazwie *–rf* spowodował włączenie opcji *recursive* oraz *force* w *rm*.

![](/res/rm3.png)


Więcej tego typu rzeczy na "[Unix wildcards gone wild](http://www.defensecode.com/public/DefenseCode_Unix_WildCards_Gone_Wild.txt)"

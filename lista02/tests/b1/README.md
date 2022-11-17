Nessa questão, o teste era com a função juntamente com entradas padrões:

Para o STDIN:
```bash
10 3 3 2
```

Quando chamada dessa forma:
```c
int n = faz_conta_direito(4, '-');
```
Era esperado que n fosse igual a 2

Já quando chamada dessa forma:
```c
int n = faz_conta_direito(4, '+');
```
Era esperado que n fosse igual a 18

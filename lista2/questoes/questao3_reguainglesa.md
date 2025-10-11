# Régua inglesa
Uma régua inglesa de ordem *n* tem *2^n−1* pontos. O ponto médio contém *n* traços e divide a régua em dois subintervalos. O ponto médio de cada um dos subintervalos deve ter *n−1* traços, e assim por diante. Por exemplo, uma régua inglesa de ordem 3 seria:
```
.-
.--
.-
.---
.-
.--
.-
```
Dado um inteiro não negativo *n*, sua tarefa é desenhar na tela uma régua inglesa de ordem *n*.

**Atenção:** Use uma solução recursiva.

## Entrada
A entrada é composta por uma única linha contendo um inteiro não negativo *n*.

## Saída
A saída deve ser a régua inglesa de ordem *n*.

### Exemplo de Entrada 1
```2```

### Exemplo de Saída 1
```
.-
.--
.-
```

### Exemplo de Entrada 2
```4```

### Exemplo de Saída 2
```
.-
.--
.-
.---
.-
.--
.-
.----
.-
.--
.-
.---
.-
.--
.-
```

***Author: John L. Gardenghi (adaptado do problema apresentado no livro R. Sedgewick, Algorithms in C, Parts 1-4, 3 ed, na seção 5.2)***
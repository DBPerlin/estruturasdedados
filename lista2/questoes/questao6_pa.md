# Progressão aritmética
Uma sequência de *n* elementos *Vi* ordenados é dita progressão aritmética (PA) quando a soma do primeiro elemento com o último elemento for igual à soma do segundo com o penúltimo e essa soma for igual à soma do terceiro com o antepenúltimo, e assim por diante, para *n* par.

Sua tarefa nesse exercício é escrever uma função recursiva

```int pa_recursiva (int *v, int primeiro, int ultimo)```

que recebe um vetor *v* com *n* elementos (n par e maior ou igual a 4), cujas posições do primeiro e último elementos estão respectivamente em primeiro e ultimo, e retorne 1, caso a sequência contida em *v* seja uma PA, ou 0 caso contrário.

**Atenção:**
Sua solução deve ser recursiva e não pode usar laços.

Sua função será chamada de uma *main* com *primeiro = 0* e *ultimo = n-1*.

Submeta um arquivo **apenas** com a função pedida (rigorosamente com a mesma declaração), os include necessários ao seu código, mais alguma função auxiliar que possa achar necessário. Não submeta a função main.

***Author: John L. Gardenghi***
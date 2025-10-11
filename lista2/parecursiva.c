int pa_recursiva(int *v, int primeiro, int ultimo) {
    static int soma_ref = 0;
    static int inicializado = 0;

    if (primeiro >= ultimo) {
        inicializado = 0;
        return 1;
    }

    if (!inicializado) {
        soma_ref = v[primeiro] + v[ultimo];
        inicializado = 1;
    }

    if (v[primeiro] + v[ultimo] != soma_ref) {
        inicializado = 0;
        return 0;
    }

    return pa_recursiva(v, primeiro + 1, ultimo - 1);
}
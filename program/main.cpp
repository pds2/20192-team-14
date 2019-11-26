#include <iostream>
#include "string.h"
#include "../include/pessoa.h"
#include "../include/aluno.h"
#include "../include/professor.h"
#include "../include/tecnico.h"

using namespace std;

int main() {
    Aluno p1 = Aluno("Rainer","126.551.596-40","50.815.224.0","04/06/1998","2017068785");
    p1.cadastrar();
    return 0;
}
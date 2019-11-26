#ifndef CEU_EXCECOES_H
#define CEU_EXCECEOS_H

#include <stdexcept>

using namespace std;

class InvalidCPFException : public  exception{};
class InvalidNomeException: public exception{};
class InvalidRGException : public exception{};
class InvalidDataNascimentoException : public exception{};
class InvalidMatriculaException : public exception{};
class AssociadoInvalidoException: public exception{};
class SemAcessoAConviteException: public exception{};
class PosicaoInexistente: public exception{};

#endif
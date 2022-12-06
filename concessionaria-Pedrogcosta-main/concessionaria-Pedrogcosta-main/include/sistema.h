#ifndef SISTEMA_H
#define SISTEMA_H
#include "concessionaria.h"
#include "veiculos.h"
#include "automoveis.h"
#include "caminhoes.h"
#include "motos.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;

// Sistema deve concentrar todas as operações
class Sistema {
  private:
		//std::vector<Concessionaria> concessionarias; //um vetor com todos as concessionarias
		vector <Concessionaria> concessionarias;
  public:

		/*Encerra o funcionamento do programa.
			@return uma string com a mensagem "Saindo.."
		*/
		std::string quit();

		/* Cria uma concessionaria e retorna uma string de erro/sucesso 
			@param nome o nome da concessionaria
			@return uma string contendo uma mensagem de erro ou "Concessionaria Criada"
		*/
		std::string create_concessionaria (const std::string nome, const std::string cnpj, const int estoque){
			string mensagem;			


			return mensagem;
		};

		/*
			Supostamente adicionará um carro a concessionaria
		*/
		std::string add_car (const std::string marca, const int preco, const std::string chassi, const int ano, const std::string motor){
			string mensagem;

			return mensagem;
		}

		
};

#endif

# 📇 Agenda de Contatos em C++

Um programa simples em C++ para gerenciar contatos, com armazenamento de dados pessoais e cálculo automático de idade.

## 🚀 Funcionalidades

- Cadastro de 5 contatos
- Armazenamento de:
  - Nome
  - E-mail
  - Telefone
  - Data de nascimento
- Cálculo automático da idade baseado na data atual do sistema
- Exibição organizada de todos os contatos cadastrados

## 🛠️ Tecnologias

- C++ (padrão C++11 ou superior)
- Biblioteca padrão: iostream, string, ctime

## 📦 Estrutura das Classes

- **Data**: dia, mês, ano (com getters/setters)
- **Contato**: nome, email, telefone, data de nascimento (com getters/setters e método idade())

## ▶️ Como executar

```bash
g++ contatos.cpp -o contatos
./contatos

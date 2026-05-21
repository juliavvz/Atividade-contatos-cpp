# 📇 Sistema de Contatos em C++

## 📌 Descrição
Este projeto em C++ implementa um sistema simples de cadastro de contatos utilizando Programação Orientada a Objetos (POO).

O programa permite:
- cadastrar até 5 contatos;
- armazenar nome, email, telefone e data de nascimento;
- calcular automaticamente a idade de cada contato;
- exibir a lista completa de contatos cadastrados.

---

## 🛠️ Tecnologias utilizadas
- C++
- Biblioteca `<iostream>`
- Biblioteca `<string>`
- Biblioteca `<ctime>`

---

## 📂 Estrutura do projeto

```text
Atividade-contatos-cpp/
├── src/
│   └── main.cpp
├── README.md
```

---

## 🧩 Classes utilizadas

### 📅 Classe `Data`
Responsável por armazenar:
- dia
- mês
- ano

Possui:
- construtor
- getters
- setters

---

### 👤 Classe `Contato`
Responsável por armazenar:
- nome
- email
- telefone
- data de nascimento

Possui:
- construtor
- getters
- setters
- método `idade()` para calcular a idade automaticamente

---

## ▶️ Como compilar e executar

### 🔹 Compilando

```bash
g++ src/main.cpp -o contatos
```

### 🔹 Executando

#### Windows
```bash
contatos.exe
```

#### Linux / MacOS
```bash
./contatos
```

---

## ▶️ Funcionamento
1. O usuário cadastra 5 contatos;
2. O sistema solicita:
   - nome
   - email
   - telefone
   - data de nascimento
3. Ao final, todos os contatos são exibidos juntamente com suas idades.

---

## 💻 Exemplo de execução

```text
--- Contato 1 ---
Nome: Julia
Email: julia@email.com
Telefone: 13999999999
Data de nascimento (dia mes ano): 10 5 2005

=== LISTA DE CONTATOS ===

Contato 1:
Nome: Julia
Email: julia@email.com
Telefone: 13999999999
Idade: 20 anos
```

---

## 📚 Conceitos aplicados
- Programação Orientada a Objetos
- Classes e Objetos
- Encapsulamento
- Construtores
- Vetores de objetos
- Manipulação de datas
- Entrada e saída de dados

---

## 👩‍💻 Autora
Júlia Vitória - @juliavvz

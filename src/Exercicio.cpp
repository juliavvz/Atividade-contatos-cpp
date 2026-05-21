#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Data {
private:
    int dia;
    int mes;
    int ano;
    
public:
    Data(int d = 1, int m = 1, int a = 2000) : dia(d), mes(m), ano(a) {}
    
    int getDia() { return dia; }
    int getMes() { return mes; }
    int getAno() { return ano; }
    
    void setDia(int d) { dia = d; }
    void setMes(int m) { mes = m; }
    void setAno(int a) { ano = a; }
};

class Contato {
private:
    string email;
    string nome;
    string telefone;
    Data dtnasc;
    
public:
    Contato(string e = "", string n = "", string t = "", Data d = Data()) 
        : email(e), nome(n), telefone(t), dtnasc(d) {}
    
    string getEmail() { return email; }
    string getNome() { return nome; }
    string getTelefone() { return telefone; }
    Data getDtnasc() { return dtnasc; }
    
    void setEmail(string e) { email = e; }
    void setNome(string n) { nome = n; }
    void setTelefone(string t) { telefone = t; }
    void setDtnasc(Data d) { dtnasc = d; }
    
    int idade() {
        time_t t = time(NULL);
        tm* now = localtime(&t);
        int anoAtual = now->tm_year + 1900;
        int mesAtual = now->tm_mon + 1;
        int diaAtual = now->tm_mday;
        
        int idade = anoAtual - dtnasc.getAno();
        
        if (mesAtual < dtnasc.getMes() || 
            (mesAtual == dtnasc.getMes() && diaAtual < dtnasc.getDia())) {
            idade--;
        }
        
        return idade;
    }
};

int main() {
    Contato contatos[5];
    
    for(int i = 0; i < 5; i++) {
        string nome, email, telefone;
        int dia, mes, ano;
        
        cout << "\n--- Contato " << i+1 << " ---" << endl;
        cout << "Nome: ";
        cin.ignore();
        getline(cin, nome);
        cout << "Email: ";
        getline(cin, email);
        cout << "Telefone: ";
        getline(cin, telefone);
        cout << "Data de nascimento (dia mes ano): ";
        cin >> dia >> mes >> ano;
        
        Data dataNasc(dia, mes, ano);
        contatos[i] = Contato(email, nome, telefone, dataNasc);
    }
    
    cout << "\n=== LISTA DE CONTATOS ===" << endl;
    for(int i = 0; i < 5; i++) {
        cout << "\nContato " << i+1 << ":" << endl;
        cout << "Nome: " << contatos[i].getNome() << endl;
        cout << "Email: " << contatos[i].getEmail() << endl;
        cout << "Telefone: " << contatos[i].getTelefone() << endl;
        cout << "Idade: " << contatos[i].idade() << " anos" << endl;
    }
    
    return 0;
}

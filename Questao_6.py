import random

# Classe base Funcionario
class Funcionario:
    def __init__(self, nome, idade, salario):
        # Construtor para inicializar o nome, idade e salário
        self.nome = nome
        self.idade = idade
        self.salario = salario
    
    def calcular_salario(self):
        # Método para retornar o salário
        return self.salario

# Classe FuncionarioPJ (herda de Funcionario)
class FuncionarioPJ(Funcionario):
    def __init__(self, nome, idade, horas_trabalhadas, valor_hora):
        # Chama o construtor da classe base (Funcionario)
        super().__init__(nome, idade, 0)
        self.horas_trabalhadas = horas_trabalhadas
        self.valor_hora = valor_hora
    
    def calcular_salario(self):
        return self.horas_trabalhadas * self.valor_hora

# Classe FuncionarioPF (herda de Funcionario)
class FuncionarioPF(Funcionario):
    def __init__(self, nome, idade, salario_fixo):
        # Inicializa os atributos da classe pai (Funcionario)
        super().__init__(nome, idade, salario_fixo)
    
    def calcular_salario(self):
        # O salário do PF é fixo
        return self.salario

# Função principal para testar o código
def main():
  
    nomes = ["Ana", "Carlos", "José", "Maria", "Lucia", "Paulo", "Fernanda"]
    
    # Funcionário PJ
    nome_pj = random.choice(nomes)
    idade_pj = random.randint(25, 45)
    horas_trabalhadas_pj = random.randint(100, 200)  # Horas de trabalho entre 100 e 200
    valor_hora_pj = random.randint(20, 50)  # Valor por hora entre 20 e 50
    funcionario_pj = FuncionarioPJ(nome_pj, idade_pj, horas_trabalhadas_pj, valor_hora_pj)
    
    # Funcionário PF
    nome_pf = random.choice(nomes)
    idade_pf = random.randint(25, 45)
    salario_fixo_pf = random.randint(2000, 5000)  # Salário fixo entre 2000 e 5000
    funcionario_pf = FuncionarioPF(nome_pf, idade_pf, salario_fixo_pf)

    print(f"Funcionário PJ: {funcionario_pj.nome}, Idade: {funcionario_pj.idade}, Salário: {funcionario_pj.calcular_salario()}")
    print(f"Funcionário PF: {funcionario_pf.nome}, Idade: {funcionario_pf.idade}, Salário: {funcionario_pf.calcular_salario()}")

main()

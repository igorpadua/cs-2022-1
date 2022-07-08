# Tarefa 011 - Padrões de Codificação (Leiaute e estilo), Reflexão e Programação defensiva - 08/07/2022

1. Fazer uma pesquisa sobre os três temas componentes do temas: **Padrões de Codificação**, **Reflexão** e **Programação Defensiva**:

  1.1. Sugestão de links para a pesquisa sobre Padrões de Codificação:

    1.1.1 [Link 1](https://www.devmedia.com.br/padroes-de-codificacao/16529);

    1.1.2 [Link 2](https://www.cin.ufpe.br/~rls2/processo_tg/Metodologia%20S&B/guidances/concepts/coding_standard_C98B0B0.html)

    1.1.3 [Link 3](https://micreiros.com/padroes-de-codificacao-no-desenvolvimento-de-sistemas/)

    1.1.4 [Link 4](https://tableless.com.br/introducao-a-padroes-de-codificacao/)

  1.2 Sugestão de links para a pesquisa sobre Reflexão:

    1.2.1 (Link 1)[https://www.howtogeek.com/devops/what-is-reflection-in-programming/]

    1.2.2 (Link 2)[https://dev.to/chris_bertrand/coding-concepts---reflection-4d2c]

    1.2.3 (Link 3)[https://docs.microsoft.com/pt-br/dotnet/csharp/programming-guide/concepts/reflection]

    1.2.4 (Link 4)[https://www.geeksforgeeks.org/reflection-in-java/]

  1.3. Sugestão de links para a pesquisa sobre programação defensiva:

    1.3.1 (Link 1)[https://medium.com/mindminerstechblog/protegendo-seu-c%C3%B3digo-dos-usu%C3%A1rios-e-de-voc%C3%AA-mesmo-com-programa%C3%A7%C3%A3o-defensiva-e-ofensiva-8b7218a8b975]

    1.3.2 (Link 2)[https://oque-e.com/o-que-e-programacao-defensiva/]

    1.3.3 (Link 3)[https://www.youtube.com/watch?v=Fd1XrX5hFD0]

2. Ao final da pesquisa, um texto deverá ser elaborado (no formato _markdown (md)_). Deste texto deverá constar:

  2.1 - A definição de cada um destes conceitos;

  2.1.1 **Padrões de Codificação**

  Padrão de codificação são referências de boas práticas de como se escrever um código de forma mais colobarativa.

  2.1.2 **Reflexão**

  A reflexão permite que seja obtido os tipos de dados em tempo de execução.

  2.1.3 **Programação defensiva**

  A programação defensiva é um conjunto de praticas que garantem que o código gerencia situações não esperadas.

  2.2 - Um descrição de quando, onde e porque utilizá-lo e

  2.2.1 **Padrões de Codificação**

  Os padrões de codificação está presente em muitas partes do desenvolvimento como, por exemplo, na forma como é comentado o código, para que assim tenha mais fácil entedimento para a equipe; na forma como é organizado os arquivos, para que existia uma estrutura de fácil entedimento; o nome de métodos, classes, variáveis e etc, utilizado para se ter uma maior compreensão do código. Além desses padrões existe muitos outras para se ter um código mais légivel.

  2.2.2 **Reflexão**

  A reflexão pode ser utilizada para se criar novos tipos em tempo de execução, para obter atributos públicos de um objeto, invocar um método em tempo de execução, obter informações sobre classe e etc.

  A partir da reflexão é possível criar códigos mais dinâmicos e se beneficiar do aumento de automação.

  2.2.3 **Programação defensiva**

  Um bom exemplo de programação defensiva é quando, por exemplo, o usuário coloca entradas inesperadas podendo dar erro no programa. Pode ser feitos teste para comprovar a integridade do sistema.

  2.3 - Um exemplo de utilização.

  2.3.1 **Padrões de Codificação**

  ``` c++
  class Animal {}
  ```
  A primeira letra da classe sempre é maiúscula.

  2.3.2 **Reflexão**

  ``` c++
  using namespace System;
  int main() {
    Int32 i = 100;
    Object ^ o = i;
    Console::WriteLine("type of i = '{0}'", o->GetType());
  }
  ```
  Neste programa é possível descobrir qual o tipo do i.

  2.3.3 **Programação defensiva**

  ```c++
  class UserDomain{
    public:
      void CreateUser(std::string name, std::string email, std::string cpf);
  }
  ```
  Neste exemplo, por exemplo, é preciso validar o email e o cpf.

* * *

# Bibliografia

Bertrand, Chris. Coding Concepts - Reflection, disponível em: [Dev](https://dev.to/chris_bertrand/coding-concepts---reflection-4d2c), acessado 08 julho de 2022.

Micosoft. Reflexão (C++/CLI), disponível em: [Microsoft](https://docs.microsoft.com/pt-br/cpp/dotnet/reflection-cpp-cli?view=msvc-170), acessado 08 julho de 2022.

Benini, Matheus. Protegendo seu código dos usuários (e de você mesmo) com Programação Defensiva e Ofensiva
, disponível em: [Medium](https://medium.com/mindminerstechblog/protegendo-seu-código-dos-usuários-e-de-você-mesmo-com-programação-defensiva-e-ofensiva-8b7218a8b975), acessado 08 julho de 2022.

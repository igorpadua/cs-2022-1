### Tarefa 003: Git Exercícios - 03/06/2021.

Responda as questões abaixo (exercite os comandos do git correspondentes). Lembre-se de que o “interessante” não é exatamente o conjunto de respostas, mas o processo de obtê-las e a experiência obtida com a execução dos comandos.


1. Qual o comando para obter a versão instalada do Git?
  *git --version*
2. Qual o efeito da execução de cada um dos comandos abaixo?
  a. git help
    *Quando utilizado o "git help" e mostrando os comandos mais comuns usados em diversas situações.*
  b. git help checkout
    *A partir desse comando é possível ver como funciona o git checkout, suas opções e exemplos.*
  c. git help merge
    *A partir desse comando é possível ver como funciona o git merge,suas opções e exemplos.*
  d. git init
    *Esté comando cria um repositório git vazio.*
  e. git add --all
    *Adiciona todos os arquivos novos, adicionados e removidos.*
  f. git add -u
    *Adiciona apenas os arquivos modificados e removidos ignorando os novos.*
  g. git config -l
    *Com esse comando ele lista todas as varáveis definidas no arquivo de configuração.*
  h. git mv a.txt b.txt
    *Esté comando renomeia o arquivo "a.txt" para "b.txt"*
  i. git reset --hard
    *Ele redefine o HEAD atual para o estado especificado excluindo todas as alterações recentes, comitados ou não.*
  j. git log -27
    *Mostra os últimos 27 commits.*
3. O fluxo “clássico” de interação com o Git é algo como “alterar um ou mais arquivos”, “acrescentar essas mudanças para serem contemplados no próximo commit” e, finalmente, executar um “commit”. Quais os comandos necessários para realizar os dois últimos “passos” desse fluxo?
  **git add .** e **git commit -m "Commit"**.
4. Qual o comando deve ser executado para identificar o que foi alterado desde o último “commit”?
  **git diff**.
5. Em um dado repositório, arquivos simplesmente copiados para lá, ou seja, _untracked_, podem ser exibidos/identificados com que comando?
  **git status**.
6. Qual o comando para efetuar um _commit_?
  **git commit**.
7. Qual o comando que devemos empregar para descartar mudanças ocorridas no arquivo teste.txt, por exemplo?
  **git restore teste.txt**.
8. O que deve ser feito para que um determinado diretório do seu repositório seja ignorado pelo Git? Faça uma busca por **.gitignore**.
 *Basta adicionar o nome do diretório do .gitignore.*
9. O que acontece se o seu repositório local for acidentalmente removido?
  *Se o repositório estiver disponível em alguma plataforma podemos clonar o repositório, caso não esteja será perdido todo o repositório.*
10. Como clonar um repositório remoto?
  ***git clone** repositório*
11. Em alguns cenários **git log** pode produzir extensos resultados. Se houver interesse em visualizar o histórico de um repositório, onde cada mudança é fornecida exatamente em uma única linha, qual o comando que deve ser empregado?
  **git log --pretty=oneline**.
12. Em qual arquivo o Git armazena informações de configuração empregadas por usuário?
  *Ele armazena no arquivo **.gitconfig**.*
13. Qual o comando para criar um repositório local?
  **git init**.
14. Qual o nome do diretório criado pelo Git quando se executa o comando **git init**?
  **.git**.
15. Qual o comando para adicionar todos os arquivos modificados? (Aqueles para os quais **git status** identificam como **modified**?)
  **git add -u**.
16. O Git faz uso do valor de hash conhecido por SHA1. O que isto significa? Qual o propósito? O que é SHA1?
  *O git utiliza has por questões de segurança e para a indeficação de alterações nos arquivos. O SHA1 é um tipo de criptografia que utiliza o método hash.*
17. Qual a palavra para indicar o último _commit_ em vez do valor de hash SHA1 correspondente?
  *HEAD.*
18. Quando se cria dois arquivos usando um editor de texto qualquer e, na sequência, executamos o comando **git add -u**, os dois arquivos criados passam de _untracked_ para _new file_?
  *Não.*
19. Qual o efeito da execução dos dois comandos abaixo, nesta ordem, em um dado repositório?
**git reset --soft HEAD~1**
**git reset --hard**
  *O primeiro comando irá mudar o HEAD para o commit determidodo e todos os arquivos modificados vão ficar em estado de serem comitados. Já o segundo comando descartara todos as mudanças até o commit indicado.*
20. Após o emprego de um ambiente integrado de desenvolvimento (IDE), é comum a criação de arquivos e diretórios. Qual o comando que podemos empregar para remover arquivos e diretórios _untracked_?
 ***git clean -fd**.*
21. Qual o nome do arquivo no qual podemos inserir a indicação para o Git de arquivos e diretórios a serem ignorados?
  *.gitignore.*
22. Quando se cria o arquivo _MinhaClasse.class_ em um dado diretório e desejamos que arquivos com a extensão .class, como neste caso, sejam ignorados por todos os membros de uma equipe que estão contribuindo com um dado projeto, como devemos proceder?
  *Adicionamos no .gitgnore: \*.class.*
23. jQuery é uma famosa biblioteca em JavaScript. Consulte detalhes em [jQuery](http://jquery.com). O repositório correspondente encontra-se em [gitRep](https://github.com/jquery/jquery.git). Faça o clone deste repositório.
  *Feito.*
24. No repositório **jqueryrepo**, criado no passo anterior, qual o efeito do comando
**git shortlog -sne**?
  *Mostra quem já fez commit e quantos commits foram feitos. Ordenados de forma descrescente de commits.*
25. No repositório **jqueryrepo**, qual o efeito de **git remote -v**?
  *Mostra o endereço do repositório remoto.*
26. Um repositório Git pode ser etiquetado ao longo do tempo. Ou seja, _commits_ específicos podem ser “marcados” ou “etiquetados” para facilitar referências posteriores. Para listar todas as “etiquetas” (_tags_) estabelecidas para um dado repositório, qual comando deve ser executado?
  **git tag**.
27. Caso um dato repositório retorne muitas “marcas” ou “etiquetas” para o comando **git tag**, como retornar apenas aquelas que atendem a determinado padrão, por exemplo, iniciadas por 2.0?
  *git tag -l "2.0*".*
28. Qual o efeito do comando **git tag -a 3.4-gold -m “minha versão ouro”**?
  *Cria uma tag chamada **3.4-gold** com a descrição **minha versão ouro**.*
29. Após executado o comando acima, qual o efeito de **git show 3.4-gold**?
  *É possível ver os dados da tag.*
30. O que o comando **git push origin 3.4-gold** teria como efeito?
  *O repositório remoto como o repositório local iria atualizar para a tag 3.4-gold.*
31. Após executar um commit, qual o efeito de **git commit --amend**?
  *Esté comando adiciona as últimas alterações no último commit caso tenha esquecido por exemplo.*
32. Após executar **git add x.txt**, qual o efeito de **git reset HEAD x.txt**?
  *O que foi adicionado e modificado no arquivo não será comitados.*
33. Após alterar o conteúdo de um arquivo committed em passo anterior, qual o efeito do comando **git checkout -- a.txt**?
  *Nenhum efeito já que o mesmo já foi comitado.*
34. Qual a diferença entre os comandos **git reset HEAD a.txt** e **git checkout -- a.txt**?
  *O primeiro reseta o arquivo a.txt para o HEAD, já o segundo restaura o arquivo da árvore.*
35. Veja como interpretar o resultado de git diff [aqui](https://medium.com/therobinkim/how-to-read-a-git-diff-6c87a9dc47c5). Execute, em um dos seus projetos, o comando **git diff HEAD~1 HEAD** e certifique-se de que entende o resultado apresentado.
  *Ele compara o HEAD com o commit anterios a ele.*

</DIV/>

# Sistema de Cartório - EBAC

Este é um projeto de gerenciamento de registros de usuários desenvolvido em **Linguagem C** como parte do aprendizado prático na **Escola Britânica de Artes Criativas e Tecnologia (EBAC)**.

## Funcionalidades
* **Sistema de Login**: Acesso restrito via senha de administrador ("admin") para garantir a segurança dos dados.
* **Registro de Usuários**: Coleta de CPF, Nome, Sobrenome e Cargo, salvando as informações em arquivos individuais nomeados pelo CPF.
* **Consulta de Dados**: Localização e leitura de arquivos existentes para exibição das informações cadastradas.
* **Exclusão de Registros**: Remoção física dos arquivos do sistema através do CPF.

## Tecnologias e Conceitos Aplicados
* **Linguagem C**: Uso de bibliotecas padrão como `stdio.h`, `stdlib.h` e `string.h`.
* **Persistência de Dados**: Manipulação de arquivos com as funções `fopen`, `fprintf`, `fgets` e `remove`.
* **Lógica de Programação**: Estruturas de repetição (`while`, `for`) e seleção (`if`, `switch case`) para controle do fluxo e menus.
* **Localização**: Configuração de caracteres para o português com a biblioteca `locale.h`.

## Como Executar
1. Certifique-se de ter um compilador C instalado (como GCC ou Dev-C++).
2. Baixe o arquivo `cartório.c`.
3. Compile e execute o programa.
4. Utilize a senha **admin** para acessar o menu principal.

---
Desenvolvido por Gabriel como projeto de aprendizado em TI.

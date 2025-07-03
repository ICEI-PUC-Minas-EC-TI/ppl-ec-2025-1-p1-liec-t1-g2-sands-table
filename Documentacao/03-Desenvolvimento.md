
# Materiais

Os materiais utilizados no projeto foram:

ESP32

Motor de passo NEMA 17

Driver de motor A4988

Fonte de Alimentação 12V

Jumpers (fios de conexão)

Ímã de neodímio

Areia fina

# Desenvolvimento

Desenvolvimento

O desenvolvimento da Mesa de Areia foi um processo colaborativo, realizado em várias etapas que foram essenciais para a construção e o funcionamento do dispositivo. Cada membro do grupo desempenhou um papel fundamental para o sucesso do projeto, conforme detalhado a seguir.


1. Definição de Requisitos

O primeiro passo foi a definição clara dos requisitos do projeto. O objetivo era criar uma Mesa de Areia automatizada, de baixo custo, que pudesse desenhar padrões pré-definidos e ser controlada por um aplicativo de celular via Bluetooth. Esta fase envolveu a colaboração de todos para garantir que as funcionalidades e os objetivos acadêmicos fossem bem estabelecidos.
Responsáveis: Todos os membros participaram desta etapa inicial.

2. Design

A fase de design foi crucial para planejar tanto a estrutura física da mesa quanto o funcionamento do software.
Design do Hardware: Arthur Bernardes foi o responsável por projetar a estrutura física da mesa, o mecanismo de movimentação do ímã e a disposição dos componentes eletrônicos.
Design do Aplicativo: Eduardo Frederico ficou responsável pelo design e desenvolvimento do aplicativo no MIT App Inventor.

3. Implementação

Montagem do Hardware: Arthur Bernardes liderou a montagem dos componentes eletrônicos e do mecanismo. 
Programação do ESP32: Bruno Rios e Eduardo Frederico trabalharam em conjunto na programação do microcontrolador ESP32.

Desenvolvimento do Aplicativo: Eduardo Frederico programou o aplicativo, criando as funcionalidades planejadas na fase de design e preparando a base para a comunicação com o hardware.
Gestão do Projeto: Arthur Bernardes e Vitor Martinotto Mazzonetto atuaram na gestão e coordenação geral do projeto.

4. Integração

A fase de integração foi essencial para unir as partes de hardware e software em um sistema coeso.

5. Testes

Testes foram realizados para garantir que a Mesa de Areia operasse conforme o esperado.
Testes de Funcionalidade: Foram realizados testes práticos para verificar se os padrões eram desenhados corretamente e se a comunicação via Bluetooth era estável.

6. Finalização e Documentação

Após a conclusão dos testes, o projeto foi finalizado e documentado.
Montagem Final e Acabamento: Arthur Bernardes, com o auxílio de seu pai (Expedito), construiu a base final da mesa em MDF e realizou a pintura dos pilares, dando um acabamento estético ao projeto.

Documentação e Registros: Vitor Martinotto Mazzonetto ficou responsável por gerenciar o repositório do projeto no GitHub e por realizar as filmagens e registros visuais de todo o processo e do produto final.

Desenvolvimento do Aplicativo
Responsável: Eduardo Frederico Alencar Sanches Novais

Interface
O desenvolvimento da interface do aplicativo foi focado na simplicidade e na facilidade de uso. Foi criada uma única tela no MIT App Inventor para centralizar todas as funcionalidades. Esta tela contém:

Um conjunto de botões direcionais para o controle manual do mecanismo.

Um menu ou lista para a seleção de padrões pré-definidos, que a mesa desenha automaticamente.

Código
O código do aplicativo foi desenvolvido na plataforma MIT App Inventor, que utiliza programação em blocos. A lógica do código é responsável por:

Estabelecer e gerenciar a conexão Bluetooth com o ESP32.

Associar cada botão da interface a um comando de texto específico (ex: "FRENTE", "PADRAO1").

Enviar o comando de texto correspondente via Bluetooth quando um botão é pressionado.

Desenvolvimento do Hardware

Montagem
Responsável: Arthur Bernardes Almeida Diniz

O processo de montagem foi uma das etapas mais desafiadoras e práticas do projeto. O motor de passo NEMA 17 foi fixado sob a base de MDF da mesa. A principal dificuldade encontrada foi na peça que acopla o ímã ao eixo do motor. A tentativa inicial de usar um palito de sorvete fixado com super bonder falhou, pois a cola fazia com que a peça perdesse atrito com o eixo do motor, impedindo a rotação correta.

A solução foi substituir o palito por uma peça de bambu mais resistente, que foi cortada e encaixada sob pressão diretamente no eixo do motor, garantindo a transferência de movimento sem deslizamentos.

Desenvolvimento do Código

Responsáveis: Bruno Rios de Andrade Sousa e Eduardo Frederico Alencar Sanches Novais

O código do hardware foi desenvolvido na Arduino IDE, utilizando a linguagem C++ para o microcontrolador ESP32. O desenvolvimento do código consistiu em:

Configurar a biblioteca Bluetooth para que o ESP32 pudesse receber dados.

Criar uma estrutura de lógica (como if/else ou switch/case) para interpretar as strings de texto recebidas do aplicativo.

Programar as funções que controlam o driver de motor A4988, traduzindo os comandos recebidos em movimentos precisos do motor de passo (direção, velocidade e número de passos).

Comunicação entre App e Hardware
O processo de comunicação entre o aplicativo e o ESP32 é a espinha dorsal do projeto e funciona da seguinte maneira:

Conexão: O usuário, através do aplicativo, seleciona o dispositivo Bluetooth da Mesa de Areia e estabelece uma conexão.

Envio de Comando: Ao pressionar um botão no app (ex: "Desenhar Círculo"), o aplicativo envia uma string de texto pré-definida (ex: "CIRCULO") para o ESP32.

Recepção e Interpretação: O ESP32, que está constantemente "ouvindo" a porta serial Bluetooth, recebe essa string.

Execução: O código no ESP32 lê a string recebida e a compara com os comandos programados. Ao encontrar uma correspondência, ele aciona a função específica para aquele comando, que por sua vez, controla o motor de passo para executar o movimento desejado.
Descreva como foi o processo de comunicação entre App e arduino/ESP.

# Testes do Projeto


-Teste de Construção

Durante a fase de construção, foram testadas diferentes abordagens para o mecanismo de movimento. A escolha da tecnologia foi definida no início: usar um ESP32 pela facilidade de já possuir Bluetooth integrado, simplificando a comunicação com o aplicativo. O principal desafio técnico surgiu no acoplamento do ímã ao eixo do motor de passo. A ideia inicial de usar uma haste simples (um palito de sorvete) fixada com super bonder foi testada e falhou, pois a cola criava uma superfície lisa que não transferia o torque do motor para a haste. Após identificar o problema, essa abordagem foi descartada. A solução foi criar e testar uma nova peça customizada, feita de bambu, que se encaixava sob pressão no eixo, garantindo o atrito necessário para o funcionamento.

-Teste Montado

Com o hardware e o software integrados, os testes finais foram realizados diretamente pelo aplicativo, via Bluetooth. 

-Limitações do Projeto

Apesar de funcional, o projeto possui algumas limitações inerentes ao seu design atual:

Complexidade dos Desenhos: O uso de um único motor restringe os desenhos a padrões de linha contínua, impossibilitando que a esfera "salte" para iniciar um novo desenho em outra parte da mesa.

Adição de Padrões: Para adicionar novos desenhos, é necessário alterar o código-fonte do ESP32 e carregá-lo novamente, não sendo possível enviar um arquivo de imagem ou um novo padrão diretamente pelo aplicativo.

Alcance: O controle via Bluetooth limita a operação a uma curta distância (aproximadamente 10 metros).

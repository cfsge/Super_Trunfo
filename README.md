# Super Trunfo 

Bem-vindo ao "Super Trunfo - Países"! No jogo Super Trunfo, os jogadores comparam os atributos das cartas para determinar a mais forte. O tema deste Super Trunfo é "Países", onde serão comparados os dados das cidades.

O código foi dividido em três níveis: Novato, Aventureiro e Mestre, com cada nível adicionando mais complexidade ao anterior. Durante a leitura do código, esses níveis serão mencionados. 

## 🎮 Nível Novato: Cadastro Básico

No nível Novato, serão cadastradas duas cartas via terminal e após o cadastro todas as informações preenchidas serão exibidas. 
Sem uso de laços (`for`, `while`) ou condicionais (`if`, `else`).

⚙️ **Funcionalidades do Sistema:**

*   O sistema permitirá ao usuário cadastrar os dados de **duas** cartas manualmente via terminal.
*   Após o cadastro, o sistema exibirá os dados de cada cidade de forma organizada.

📥 **Entrada** e 📤 **Saída de Dados:**

*   O usuário insere os dados de cada carta interativamente via `scanf`.
*   O programa exibe os dados cadastrados usando `printf`, com cada atributo em uma nova linha.

## 🛡️ Nível Aventureiro: Cálculo de Atributos

No nível Aventureiro, foi incluído o cálculo de dois novos atributos: Densidade Populacional e PIB per Capita.
Sem uso de laços (`for`, `while`) ou condicionais (`if`, `else`).

*   **Novos Atributos:**
    *   Densidade Populacional: População / Área (`float`)
    *   PIB per Capita: PIB / População (`float`)

⚙️ **Funcionalidades do Sistema:**

*   O sistema calculará automaticamente a Densidade Populacional e o PIB per Capita.
*   Os novos atributos serão exibidos junto com os demais.

📥 **Entrada** e 📤 **Saída de Dados:**

*   Mesma entrada do nível Novato.
*   A saída exibirá também os atributos calculados.

## 🏆 Nível Mestre: Comparação e Super Poder

No nível Mestre, foi implementado a comparação entre duas cartas e o cálculo do "Super Poder".

🆕 **Diferença em relação ao Nível Aventureiro:**

*   **Comparação de Cartas:** O usuário poderá comparar as duas cartas.
*   **Super Poder:** Soma de todos os atributos (inclusive os calculados), com a densidade populacional *invertida* antes da soma.

⚙️ **Funcionalidades do Sistema:**

*   Comparação atributo a atributo, mostrando qual carta venceu (1 se a Carta 1 vence, 0 se a Carta 2 vence).
*   Para Densidade Populacional, vence a carta com o *menor* valor.
*   Para os demais atributos (e o Super Poder), vence a carta com o *maior* valor.

📥 **Entrada** e 📤 **Saída de Dados:**

*   Mesma entrada dos níveis anteriores, mas a População agora é `unsigned long int`.
*   A saída mostrará o resultado da comparação para cada atributo e o Super Poder.


## 🏁 Conclusão

 Boa sorte e divirta-se!

-cfsg.

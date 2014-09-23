HelloWorld no FRDM-KL25Z com PE
==

Meu primeiro HelloWorld na plataforma FREEDOM KL25Z utilizando o Processor Expert para geracao do codigo e configuracoes.

Neste exemplo tudo acontece sem programacao em C, simplesmente com a geracao de um evento de interrupcao, que ira disparar os metodos de "NegVal" dos 3 leds.

A unica programacao manual acontece dentro do evento  TI1_OnInterrupt() onde faco a mistura das 3 cores RGB, uma de cada vez, gerando o Ciano, Amarelo e Magenta.

Para utilizar a rotina de WAIT1_Waitms(...) fiz a importacao dos componentes do site MCUONECLIPSE.com que tambem fornece os componentes via https://github.com/ErichStyger/mcuoneclipse.

Simples e rapido para ser construido.

Utilizando KDS 1.1.1 no Win7.

23SET2014 - checkout no Git View do KDS 1.1.1 - Win7 - Sao Paulo

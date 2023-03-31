
Projeto Módulo 6

HEALTH INSURANCE - BASE ANALYSES

Contexto de negócio
Indian Not Indigene Insurance Company é uma companhia indiana especializada na oferta de seguros de saúde e automóveis, sendo a maior player do mercado na megalopole de Mumbai. Com o intuito de aumentar suas erceitas anuais e criar um ecossiema maior de clientes, a diretoria passou a seguinte tarefa para o seu time de cientista de dados: Identificar clientes que já possuem o seguro de saúde da companhia e indicar quais deles teriam uma maior chance de aderirem ao seguro veicular visto que os recursos para a realização de contato e oferta sao limitados. Para auxliar a execução de tal projeto, previamente foi enviado junto com a renovação anual do seguro uma guia a qual os clientes responderam se no momento gostariam de adquirir algum seguro veicular e se ja posuiam algum.

Dados
O conjunto de dados utilizado nesse projeto estão disponíveis na plataforma do Kaggle no endereço: https://www.kaggle.com/datasets/anmolkumar/health-insurance-cross-sell-prediction. O dataset possui os seguintes atributos:

O DataSet possui as seguintes informações.

Id - numero de identificação (ID) unico de cada estabelecimento

Gender -Genero do clientr.

Age - Idade do cliente.

Driving_License - 0: Clientes que não possuem CNH. 1: clientes que possuem CNH

Region_Code - Código unico da região do cliente.

Previously_Insured - 0: Clientes que não possuem seguro veicular. 1: clientes que possuem seguro veicular

Vehicle_Age -Idade do veiculo

Vehicle_Damage - 0: Clientes que não tiveram o veiculo danificado. 1: clientes que tiveram seus veiculos danificados

Annual_Premium - A taxa anual que o cliente terá que desembolçar

PolicySalesChannel - Código anonimo referente ao canal de contato e seus diferentes agentes

Vintage - Número de dias desde que o cliente contratou a empresa

Response - 0: Clientes que não possuem interesse em contratar seguro veicular. 1: clientes que possuem interesse em contratar seguro veicular

Planejamento da solução baseado na metodologia CRISP
Entendimento do negócio* - Busca entender de forma mais profunda o real problema do negócio e definir os objetivos para a resolução do negócio. Neste caso especifico, foi decidido que o objetivo será a realização de um modelo de machine learning para a predição das vendas como as métricas afetam o fluxo de vendas e consequentemente a predição. Além disto, também foi definida hipóteses iniciais que deverão ser validadas através da exploração de dados.

Coleta de dados - Acesso a plataforma do Kaggle para download dos arquivos que serão usados.

3.Limpeza dos dados - Os dados são rigorosamente analisados para se verificar dados nulos (NA), outliers, transformação de tipo de variável e qualquer outra irregularidade visando assim criar um dataset mais coeso para a análise na próxima etapa.

Exploração dos dados - Nessa etapa os dados são analisados de forma isolada (univariada) e em conjunto (valoradas) buscando achar as variáveis que melhor se relacionam e causam maior impacto nas vendas. O uso de bibliotecas de Python que criam gráficos, como a Seaborn, auxilia na criação de um maior conhecimento e entendimento do comportamento dos dados. Nessa parte as hipoteses inicias tambem sao analisadas e ao somar o resultado de tal processo e o da analise das relaçoes das variaveis se é possivel gerar insights que axuliaram tanto nas seguintes etapas do projeto quanto para dar uma nova perspectiva da empresa para o time de negocios.

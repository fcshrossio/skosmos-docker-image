{# This is the template for the about page. You can enter any html here and show different language versions by using the lang value in a twig conditional as demonstrated below. #}
{% if request.lang == 'fi' %}

<h4>Tietoja sanastoselaimesta</h4>
<p>Skosmos on web-pohjainen sanasto ja ontologiaselain.</p>
<a href="http://github.com/NatLibFi/Skosmos">Skosmos GitHub-repositorio</a>
{% elseif request.lang == 'sv' %}

<h4>Information</h4>
<p>Skosmos är en ontologibrowser.</p>
<a href="http://github.com/NatLibFi/Skosmos">Skosmos på GitHub</a>

{% elseif request.lang == 'pt' %}

<h4>Serviços para vocabulários controlados</h4>

<p>A Infraestrutura ROSSIO inclui serviços para a construção e publicação de vocabulários 
controlados em ciências sociais, artes e humanidades. Estes serviços são 
geridos pelo Núcleo de Desenvolvimento Digital da Investigação da NOVA FCSH, estando disponíveis à sua comunidade académica e aos parceiros da Infraestrutura ROSSIO.</p>
<p>O Vocabs ROSSIO permite aos utilizadores navegar e pesquisar conceitos e termos nos vocabulários, estando também
acessíveis às máquinas como dados interligados (<i>Linked Data</i>). Este serviço tem por base o <span><a target="_blank" href="http://skosmos.org/">Skosmos</a></span>, o
qual permite a estruturação de vocabulários em <span><a target="_blank" href="https://www.w3.org/TR/skos-primer/">SKOS</a></span>, um dos modelos mais utilizados na Web semântica.</p>
<p>Para os utilizadores mais avançados, está ainda disponível uma
instalação do <span><a target="_blank" href="http://vocbench.uniroma2.it/">VocBench 3</a></span>, uma plataforma de construção e gestão de vocabulários 
em SKOS (disponível <span><a target="_blank" href="http://vocbench.rossio.fcsh.unl.pt">aqui</a></span>).</p>

<h4>O que são vocabulários controlados?</h4>

<p>Um vocabulário controlado é uma lista autorizada de
conceitos numa disciplina ou assunto designados por termos em línguas naturais e/ou
códigos alfanuméricos. Os conceitos num vocabulário controlado são muitas vezes
colocados em hierarquias e redes associativas. No âmbito da Web semântica e dos dados interligados, é fundamental
que cada conceito possua um identificador (URI) acessível
através da Web.</p>
<p>Tesauros, classificações, listas de autoridades de nomes e
índices de topónimos são tipos de vocabulários controlados. A sua função é
organizar conhecimento e providenciar meios para aceder aos conceitos de uma
disciplina ou assunto.</p>

<h4>Vocabulários controlados para a investigação em
humanidades</h4>

<p>Os vocabulários controlados são muito utilizados em projetos
de investigação em humanidades digitais que envolvam a construção de bases ou
conjuntos de dados. Os vocabulários controlados permitem normalizar os valores em
campos fundamentais para a organização e recuperação de informação, como “tipo
de documento”, “tipo de artefacto”, “idioma”, “autor” ou “assunto”.</p>
<p>O ROSSIO Vocabs permite que os
vocabulários controlados utilizados na descrição de conjuntos de dados sejam
publicados em acesso aberto, em linha com os <span><a target="_blank"
href="https://www.go-fair.org/fair-principles/">princípios FAIR</a></span>, que prevêem o uso de vocabulários
documentados e acessíveis através de identificadores unívocos e persistentes,
de forma a permitir a interoperabilidade com outros conjuntos de dados
publicados na Web.</p>

<h4>Vocabulários ROSSIO</h4>
<p>Os Vocabulários ROSSIO (Tesauro, Agentes, Lugares e Períodos) são um conjunto 
de vocabulários em ciências sociais, artes e humanidades desenvolvidos pela equipa 
de investigação da Infraestrutura ROSSIO 
para enriquecimento da informação e organização do conhecimento no Portal ROSSIO.</p>

{% elseif request.lang == 'en' %}

<h4>Controlled vocabulary services</h4>

<p>ROSSIO
Infrastructure includes services for the construction and publication of
controlled vocabularies in social sciences, arts, and humanities. These
services are managed by the Centre for Digital Development of Research of NOVA
FCSH and are made available to its academic community and the partners of
ROSSIO Infrastructure.</p>

<p>Vocabs
ROSSIO allows users to browse and search concepts and terms in the
vocabularies, which are also accessible to machines as linked data. This
service is based on <span><a target="_blank" href="http://skosmos.org/">Skosmos</a></span>, which allows the structuring of
vocabularies in <span><a target="_blank" href="https://www.w3.org/TR/skos-primer/">SKOS</a></span>, one of the most used models in the Semantic Web.</p>
<p>More
advanced users can have access to an installation of <span><a target="_blank"
href="http://vocbench.uniroma2.it/">VocBench 3</a></span>, a platform for constructing and managing SKOS vocabularies 
(available <span><a target="_blank" href="http://vocbench.rossio.fcsh.unl.pt">here</a></span>).</p>

<h4>What are controlled vocabularies?</h4>

<p>A controlled
vocabulary is an authorised list of concepts in a discipline or subject designated
by terms in natural languages or alphanumeric codes. The concepts in a
controlled vocabulary are often placed in hierarchies and associative networks. In the context of the Semantic Web
and Linked Data, it is fundamental for each concept to have an identifier (URI) accessible through the Web.</p>
<p>Thesauri,
classifications, name authority lists, and gazetteers are types of controlled
vocabularies. Their function is to organise knowledge and provide means of
accessing the concepts in a discipline or subject.</p>

<h4>Controlled vocabularies for humanities research</h4>

<p>Controlled
vocabularies are widely used in digital humanities research projects that
involve building databases or datasets. Controlled vocabularies allow the
normalisation of values in key fields for organising and retrieving information,
such as “document type”, “artefact type”, “language”, “author” or “subject”.</p>
<p>Vocabs
ROSSIO allows for controlled vocabularies describing datasets to be published
in open access, following the <span><a target="_blank"
href="https://www.go-fair.org/fair-principles/">FAIR principles</a></span>, which include the use of
documented and resolvable vocabularies accessible using unique and persistent
identifiers, to allow interoperability with other datasets published in the Web.</p>

<h4>ROSSIO Vocabularies</h4>
<p>The ROSSIO Vocabularies (Thesaurus, Agents, Places and Periods) are a set of 
vocabularies in the social sciences, arts and humanities developed by the ROSSIO 
Infrastructure's research team for information enrichment and knowledge organisation on the ROSSIO portal.</p>

{% endif %}

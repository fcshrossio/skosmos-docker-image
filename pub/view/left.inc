{# This is the template for the front page welcome box. You can enter any html here and show different language versions by using the lang value in a twig conditional as demonstrated below. #}
<div class="welcome-box">
  {% if request.lang == 'fi' %}
  <h1>Tervetuloa Skosmos -selaimeen!</h1>
  {% elseif request.lang == 'en' %}
  <h1>Presentation</h1>
  <p>ROSSIO Infrastructure includes services for the construction and publication of controlled vocabularies. These services are managed by the Centre for Digital Development of Research of NOVA FCSH and are made available to its academic community and the partners of ROSSIO Infrastructure.</p>
  <h2>ROSSIO Vocabularies</h2>
  <p>The ROSSIO Vocabularies (Thesaurus, Agents, Places and Periods) are a set of vocabularies in the social sciences, arts and humanities developed by the ROSSIO Infrastructure's research team for information enrichment and knowledge organisation on the ROSSIO portal.</p>
  
  {% elseif request.lang == 'pt' %}
  <h1>Apresentação</h1>
  <p>A Infraestrutura ROSSIO inclui serviços para a construção e publicação de vocabulários controlados. Estes serviços são geridos pelo Núcleo de Desenvolvimento Digital da Investigação da NOVA FCSH, estando disponíveis à sua comunidade académica e aos parceiros da Infraestrutura ROSSIO.</p>
  <h2>Vocabulários ROSSIO</h2>
  <p>Os Vocabulários ROSSIO (Tesauro, Agentes, Lugares e Períodos) são um conjunto de vocabulários em ciências sociais, artes e humanidades desenvolvidos pela equipa de investigação da Infraestrutura ROSSIO para enriquecimento da informação e organização do conhecimento no Portal ROSSIO.</p>
  {% endif %}
</div>

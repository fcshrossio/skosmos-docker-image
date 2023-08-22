<!-- If you want to include something (analytics script etc.) on all the pages insert it here. -->
<!-- Google tag (gtag.js) -->
<script async src="https://www.googletagmanager.com/gtag/js?id=G-Q2Z0BYCQ72"></script>
<script>
  window.dataLayer = window.dataLayer || [];
  function gtag(){dataLayer.push(arguments);}
  gtag('js', new Date());

  gtag('config', 'G-Q2Z0BYCQ72');
</script>
{% if request.lang == 'en' %}
<footer>
	<ul>
        <li>
         <a target="_blank" href="https://rossio.pt">ROSSIO Portal</a>
        </li>
        <li>
         <a target="_blank" href="http://vocbench.rossio.fcsh.unl.pt">Edit vocabularies</a>
        </li>
        <li>
          <a target="_blank" href="mailto:nddi@fcsh.unl.pt?subject=Vocabs ROSSIO - Suggestion">Suggestions</a>
        </li>
        <li>
          <script>document.write(new Date().getFullYear())</script> <span class="copyright">&copy;</span> ROSSIO -<a target="_blank" href="https://www.fcsh.unl.pt/">NOVA FCSH</a>
        </li>
	</ul>
</footer>

{% elseif request.lang == 'pt' %}
<footer>
        <ul>
        <li>
          <a target="_blank" href="https://rossio.pt">Portal ROSSIO</a>
        </li>
        <li>
         <a target="_blank" href="http://vocbench.rossio.fcsh.unl.pt">Editar vocabulários</a>
        </li>
        <li>
          <a target="_blank" href="mailto:nddi@fcsh.unl.pt?subject=Vocabs ROSSIO - Sugestão">Sugestões</a>
        </li>
        <li>
          <script>document.write(new Date().getFullYear())</script> <span class="copyright">&copy;</span> ROSSIO -<a target="_blank" href="https://www.fcsh.unl.pt/">NOVA FCSH</a>
        </li>
        </ul>
</footer>
{% endif %}

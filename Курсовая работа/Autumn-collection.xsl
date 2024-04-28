<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0"
xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
 <xsl:output method="html"/>
<xsl:template match="/">


<html>
<head>
<link rel="stylesheet" href="css/Style.css"/>
<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>
<script src="Autumn-collection.js"></script>
    <title>Document</title>
</head>
<body>
<header>
        <div>
          тел.
        </div>
    </header>

<article>
<img src="images\lines_menu_burger_icon_123889.svg"/>
<div class="exception"> </div>
<a href="main.html"><h1 class="except">Wind</h1></a>
 
<a href="main.html"><h3 class="except">Главная</h3></a>


<h3 class="drop">Каталог</h3>
<a href="About_us.html"><h3 class="except">О нас</h3></a>
<hr/>
  <div class="dropdown-content">
   
    <p><a href="Autumn_info.xml">Осенняя коллекция</a></p>
            <p><a href="#">В разработке 1</a></p>
            <p> <a href="#">В разработке 2</a></p>
   
    </div>
</article>

<section>
<h2>Осенний каталог</h2>
</section>





<div id="myOverlay" class="overlay">
  <span class="closebtn" onclick="closeSearch()" title="Закрыть">x</span>
  <div class="overlay-content">
  <div class="img"><img style="height:90%"/></div>
  <div class="info">
  <div class="description"></div>
  <div class="form">
  <input placeholder="ФИО"></input>
   <input placeholder="e-mail"></input>
    <input placeholder="моб.телефон"></input>
   </div>
     <button>BOOM!</button>
  </div>
  </div>
</div>






<main class="except">
 <xsl:for-each select="info/block">
<figure>
<xsl:attribute name="id">
  <xsl:value-of select="id"/>
</xsl:attribute>
<script>
hover();
</script>
<div>
  <img>
    <xsl:attribute name="src">
        <xsl:value-of select="src"/>
    </xsl:attribute>
  </img>
      <figcaption>
   <h4><xsl:value-of select="name"/></h4>
   <p><button>

   <xsl:attribute name="class">
  <xsl:value-of select="id"/>
</xsl:attribute>
   <b>Заказать</b></button></p>
 </figcaption>
 </div>
</figure> 

 </xsl:for-each>
</main>

<aside class="except">
<hr/>
<h4>Пол</h4>

<label for="male" onclick="sort('sex','male')">
<div>
<input type="checkbox" id="male"/>
<span for="male"></span>
<label for="male">Мужской</label>
</div>
</label>

<label for="female" onclick="sort('sex','female')">
<div>
<input type="checkbox" id="female"/>
<span for="female"></span>
<label  for="female">Женский</label>
</div>
</label>

<label for="unisex">
<div>
<input type="checkbox" id="unisex"/>
<span id="unisex"></span>
<label for="unisex">Унисекс</label>
</div>
</label>

<h4>Материал</h4>

<label for="fleece">
<div>
<input type="checkbox" id="fleece"/>
<span id="fleece"></span>
<label for="fleece">Шерсть</label>
</div>
</label>

<label for="cashmere">
<div>
<input type="checkbox" id="cashmere"/>
<span id="cashmere"></span>
<label for="cashmere">Кашемир</label>
</div>
</label>

<label for="velour">
<div>
<input type="checkbox" id="velour"/>
<span id="velour"></span>
<label for="velour">Велюр</label>
</div>
</label>    

<h4>Цвет</h4>

<label for="black">
<div>
<input type="checkbox" id="black"/>
<span id="black"></span>
<label for="black">Чёрный</label>
</div>
</label> 

<label for="white">
<div>
<input type="checkbox" id="white"/>
<span id="white"></span>
<label for="white">Белый</label>
</div>
</label> 

<label for="skin">
<div>
<input type="checkbox" id="skin"/>
<span id="skin"></span>
<label for="skin">Бежевый</label>
</div>
</label> 

<label for="brown">
<div>
<input type="checkbox" id="brown"/>
<span id="brown"></span>
<label for="brown">Коричневый</label>
</div>
</label> 



</aside>


<footer>Футер пoка недоделан :/</footer>

</body>
</html>




</xsl:template>
</xsl:stylesheet>
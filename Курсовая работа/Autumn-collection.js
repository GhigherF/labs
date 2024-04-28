//Липкая шапка
$(function() {
    let header = $('article'),upperHeader=$('header'),color1=$('h3'),color2=$('h1');
    let headerHeight = header.height()+upperHeader.height();
     
    $(window).scroll(function() {
        if($(this).scrollTop() > headerHeight) {
            header.css({
            'position':"fixed",
              'background-color': '#CB8A58',
              'transition': '.2s'
            });
            color1.css(
                {   
                    'color':"#486c8f"
                }
            )
            
            color2.css(
                {
                    'color':"#486c8f"
                }
            )
        } else {
            header.css({
                'transition': '.2s',
                'position':"relative",
                'background-color':"#F0E5DD",
            });

            color1.css(
                {
                    'color':"#B29F91"
                }
            )
            
            color2.css(
                {
                    'color':"#B29F91"
                }
            )
        }
    })});
    //////////////////////////////////////////////////////


//Выпадающая менюшка
$(function()
{
    let menu = $('.drop'),dropMenu=$('.dropdown-content'),exception=$('.except');
    menu.mouseover(function()
    {
        dropMenu.css(
    {
'display':'block'
    });
    }); 

    dropMenu.mouseover(function()
    {
dropMenu.css(
    {
'display':'block'
    });

    }); 

    dropMenu.mouseout(function()
    {
dropMenu.css(
    {
'display':'none'
    });
 }); 

 exception.mouseover(function()
 {
dropMenu.css(
 {
'display':'none'
 });


 });  
    
});
//////////////////////////////////////////////////////////////

//Выпадающее описание


function hover()
{

 $('figure').mouseover(function()
{
    $(this).find('div').css(
        {
    'transition': ".3s",
    'margin-top':"-2rem",
'background-color':"whitesmoke",
'box-shadow':"0 0 4rem whitesmoke"

        }
    );
});  
$('figure').mouseout(function()
{
    $(this).find('div').css(
        {
            'box-shadow':"none",
            'margin-top':"0",
        'transition':".3s",
'background-color':"#F0E5DD"
        }
    );
}
  

);
}
//Сортировка
function sort(category,arg)
{
    var temp="#"+arg;
            if($(temp).prop('checked')===true)
     {
        getClickXML(category,arg);
     }
     else
     {
        getUnClickXML(category,arg);    
     }

 }




  
 
   //getXML();
function getClickXML(category,arg){
    $.ajax({
        type: "GET", // метод передачи данных
        url: "Autumn_info.xml", // путь к xml файлу
        dataType: "xml", // тип данных
        success: function(data) {
            $(data).find('block').each(function(){
                var check="#"; 
                var id=$(this).find(category).text();
                if(id!=arg)
                {
                    check+=$(this).find('id').text();
                    $(check).css(
                        {
                            'display':"none"
                        }
                    )
                }
            
            });         
           
        },
    });

}




function getUnClickXML(category,arg){
        $.ajax({
            type: "GET", // метод передачи данных
            url: "Autumn_info.xml", // путь к xml файлу
            dataType: "xml", // тип данных
            success: function(data) {
                $(data).find('block').each(function(){
                    var check="#"; 
                    var id=$(this).find(category).text();
                    if(id!=arg)
                    {
                        check+=$(this).find('id').text();
                        $(check).css(
                            {
                                'display':"block"
                            }
                        )
                    }
                
                });         
               
            },
        });
    
    }


   function GetFullInfo(temp)
   {
    $.ajax({
        type: "GET", // метод передачи данных
        url: "Autumn_info.xml", // путь к xml файлу
        dataType: "xml", // тип данных
        success: function(data) {
            $(data).find('block').each(function(){ 

               if($(this).find('id').text()===temp) 
               {
                
                var tempr=$(this).find('src').text();
                var descr=$(this).find('description').text();
                var name=$(this).find('name').text();
                var cost=$(this).find('cost').text();
                $('.overlay button').html(cost);
                $('.img img').attr('src',tempr);
                $('.description').html("<b>"+name+"</b>"+"<p>"+descr+"</p>");
                  }                           
            });         
           
        },
    });
     }

//Форма 

$(function()
{
    $('button').click(function()
    {
        openSearch();
       var temp=$(this).attr('class');
GetFullInfo(temp);
    }
    );

});
function openSearch() {
    $('#myOverlay').css(
        {
         'display':"block"
       })
        //GetFullInfo();

        $(this).css(
            {
                'background-color':"red"
            }
        )
  }
  
  // Закрываем поисковую форму
  function closeSearch() {
    $('#myOverlay').css(
        {
            'display':"none"
        }
    )
  }

  $(function()
{
    $('.overlay-content button').click(function()
{
    alert("POSOSI");
})
})

$(function()
{
    var i=0;
    let imgs=["images"+"\u005C"+"blue_men_coat.jpg","images"+"\u005C"+"beautiful_coat.jpg","images"+"\u005C"+"brown_coat_men.jpg","images"+"\u005C"+"Peaky_blinders.jpg"]
    $('.left').click(function()
{
 $('.slide img').attr('src',imgs[i]);
 i-=1;
})

$('.right').click(function()
{
 $('.slide img').attr('src',imgs[i]);
 i+=1;
})

}
)


$(function()
    {
        var i=0;
        n=4;
        let imgs=["images"+"\u005C"+"blue_men_coat.jpg","images"+"\u005C"+"beautiful_coat.jpg","images"+"\u005C"+"brown_coat_men.jpg","images"+"\u005C"+"Peaky_blinders.jpg"]
        $('.prev').click(function()
    {
        let prev=imgs[i];
     $('.was').attr('src',prev);
    
     if((i-1==-1)){i=n-1;}
     else{i=i-1;}
     let next=imgs[i];
     $('.now').attr('src',next);

     /////////////////////////////////////////////////////
     let start = Date.now(); 

let timer = setInterval(function() {
 
  let timePassed = Date.now() - start;

  if (timePassed >= 500) {
    clearInterval(timer); 
    return;
  }
  draw1(timePassed);
  

}, 1);


function draw1(timePassed) {
  $('.now').css({
    'left':+timePassed/49 + 'vw'
  })
  $('.was').css({   
    'left':-10+timePassed/10 + 'vw'
  })
}
///////////////////////////////////////////////////////////
    })
    $('.next').click(function()
{
    

    let prev=imgs[i];
    $('.was').attr('src',prev);
    $('.slider img').attr('src',imgs[i]);
    if (i+1==n){i=0;}
    else { i=i+1;}
    let next=imgs[i];
    $('.now').attr('src',next);



    let start = Date.now(); 

    let timer = setInterval(function() {
     
      let timePassed = Date.now() - start;
    
      if (timePassed >= 500) {
        clearInterval(timer); 
        return;
      }
      draw2(timePassed);
      
    
    }, 1);

    function draw2(timePassed) {
        $('.was').css({
          'left':+timePassed/49 + 'vw'
        })
        $('.now').css({   
          'left':-10+timePassed/10 + 'vw'
        })
      }



})

       

    }

)

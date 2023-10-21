function Apple(color,score)
{
  this.color=color;
  this.score=score;
  
}

Apple.prototype={
 eat:function(){ return "eat";},
 throw :function(){ return "throw" ;}
};


var app_1=new Apple("yellow",52);
var app_21=new Apple("green",82);
=======
var app_1=new Apple("red",55);
var app_21=new Apple("green",80);


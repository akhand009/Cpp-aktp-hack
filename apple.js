function Apple(color,score)
{
  this.color=color;
  this.score=score;
  
}

Apple.prototype={
 eat:function(){ return "eat";},
 throw :function(){ return "throw" ;}
};

var app_1=new Apple("red",50);
var app_21=new Apple("green",80);

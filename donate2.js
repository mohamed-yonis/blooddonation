var demo = document.getElementsByClassName("demo");
var Name = document.getElementsByClassName("Name");
var airplane = document.getElementsByClassName("airplane");
var Destination = document.getElementsByClassName("Destination");
var NoOfPassenger = document.getElementsByClassName("No of Passenger");
var price = document.getElementsByClassName("price");
var totalPrice = document.getElementsByClassName("totalPrice");
var result = document.getElementsByClassName("result");

function xog()
{
   

if(demo[0].value==""){
    result[0].innerHTML="*Fill Your Name here";
    demo[0].focus();

    return false;
}
if(!isNaN(demo[0].value)){
    alert("Please Enter Only a String");
    demo[0].value="";
    demo[0].focus();
    return false;
}
if(demo[1].value==""){
    result[1].innerHTML="*Fill Your Email here";
    demo[1].focus();

    return false;
}
if(demo[2].value==""){
    result[2].innerHTML="*Fill Your City here";
    demo[2].focus();

    return false;
}
if(demo[3].value==""){
    result[3].innerHTML="*Fill Last Time You Donated here";
    demo[3].focus();

    return false;
}
if(demo[3].value<0){
    alert("A Negative Number Is Not Allowed");
    return  false;
}
if(demo[4].value<0){
    alert("A Negative Number Is Not Allowed");
    return  false;
}
if(demo[4].value==""){
    result[4].innerHTML="*Fill Your Age here";
    demo[4].focus();

    return false;
}
if(demo[4].value<18){
   result[4].innerHTML= "Less Than 18 Years Old Cannot Donate ";
    demo[4].focus();
    return false;
}
if(demo[5].value<0){
    alert("A Negative Number Is Not Allowed");
    return  false;
}
if(demo[5].value==""){
    result[5].innerHTML="*Fill Your Weight here";
    demo[5].focus();
    return  false;
}
if(demo[6].value==""){
    result[6].innerHTML="*Fill Your Address here";
    demo[6].focus();
    return  false;
}
if(demo[9].value==""){
    result[9].innerHTML="*Select Blood Type";
    demo[9].focus();
    return  false;
}
else{
 location="real.html";
    return false;
}



return false;
}
function reset(){


    if(demo[0].value=="text"){
        demo[0].value="";
    
        return false;
    }
    if(demo[1].value==" "){
        demo[1].value=""
    
        return false;
    }

    
    return false;
}

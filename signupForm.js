var demo = document.getElementsByClassName("demo");

var result = document.getElementsByClassName("result");

function xog()
{
   
alert("waah");
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
    result[2].innerHTML="*Fill Your Password here";
    demo[2].focus();

    return false;
}

    
    return false;
}

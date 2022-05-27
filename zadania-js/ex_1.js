let p=document.querySelectorAll('div p');
let div=document.querySelector('div');

div.insertBefore(p[3],p[0]);
div.insertBefore(p[0],p[2]);
div.insertBefore(p[3],p[0]);
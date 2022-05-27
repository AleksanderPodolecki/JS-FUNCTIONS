let p=document.querySelectorAll('p');

document.body.addEventListener('dblclick', (e)=>{
	if(e.target.nodeName=="P")
	{
	e.target.style.fontSize='20px';
	e.stopPropagation(); 
	}
});

document.body.addEventListener('click', (e)=>{
	if(e.target.nodeName=="P")
	{
	e.target.style.fontSize='40px';
	e.stopPropagation(); 
	}
});


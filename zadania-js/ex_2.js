let button=document.querySelector('button');
let input=document.querySelector('input');
let label=document.querySelector('label');

button.addEventListener('click', () => {
	let p=document.createElement('p');
	p.textContent=input.value;
	document.body.insertBefore(p,label);
});
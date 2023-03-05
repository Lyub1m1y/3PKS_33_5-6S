const makeSpisok = () => {
	let liFirst = document.createElement('li')
	liFirst.innerHTML = '<b>Самая важная задача</b>'
	ol.prepend(liFirst)

	let liLast = document.createElement('li')
	liLast.innerHTML = '<em>Задача на последок!</em>'
	ol.append(liLast)
}

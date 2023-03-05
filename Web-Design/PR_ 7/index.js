// task 1

// let number = +prompt('Введите число: ')

// const getSquareNumber = number => number * number

// alert('Квадрат числа: ' + getSquareNumber(number))



// task  2

// let number1 = +prompt('Введите первое число: ')
// let number2 = +prompt('Введите второе число: ')

// const getSumNumber = (numberOne, numberTwo) => numberOne + numberTwo

// alert('Сумма числа: ' + getSumNumber(number1, number2))



// task 3 

// let number1 = +prompt('Введите первое число: ')
// let number2 = +prompt('Введите второе число: ')
// let number3 = +prompt('Введите третье число: ')

// const getSubtrDivNumber = (numberOne, numberTwo, numberThree) => {
//     let subtrDiv = (numberOne - numberTwo) / numberThree
//     return subtrDiv
// }

// alert(`Результат: ${getSubtrDivNumber(number1, number2, number3)}`)


// task  4 

// let number = +prompt('Введите номер дня недели: ')

// const getDayOfWeek = number => {
//     switch(number) {
//         case 1:
//             alert(`День недели - Понедельник`)
//             break
//         case 2:
//             alert(`День недели - Вторник`)
//             break
//         case 3:
//             alert(`День недели - Среда`)
//             break
//         case 4:
//             alert(`День недели - Четверг`)
//             break
//         case 5:
//             alert(`День недели - Пятница`)
//             break
//         case 6:
//             alert(`День недели - Суббота`)
//             break
//         case 7:
//             alert(`День недели - Воскресенье`)
//             break
//     }
// }

// getDayOfWeek(number)


// task 5 

let text  = prompt('Введите текст, который хотите вывести: ')
let color = prompt('Введите цвет, которым хотите окрасить текст: ')
let backgroundColor = prompt('Введите цвет, которым хотите окрасить фон')

const makeAppropriateStyles = (txt, clr, bgColor) => {
    document.body.style.color = clr
    document.body.style.background = bgColor
    document.write(txt)
}

makeAppropriateStyles(text, color, backgroundColor)
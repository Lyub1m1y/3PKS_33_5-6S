const content = document.querySelector('#content');
const slider = document.getElementById('slider');
const questions = slider.querySelectorAll('.slider-question');
const submitButton = slider.querySelector('#slider-submit-button');
let currentQuestion = 0;
let timeLeft = 30;
let correctAnswers = 0;
let timerId;

const progress = document.querySelector('#progress');
const increment = 100 / questions.length; 


function startTimer() {
  timerId = setInterval(() => {
    timeLeft--;
    updateTimer();
    if (timeLeft === 0) {
      clearInterval(timerId);
      timeLeft = 30;
      updateTimer();
      goToNextQuestion();
    }
  }, 1000);
}

function updateTimer() {
  const timer = slider.querySelector('#timer');
  if (timer) { 
    timer.textContent = `Оставшееся время: ${timeLeft}`;
  }
}

function goToNextQuestion() {
  currentQuestion++;
  updateProgress();
  if (currentQuestion < questions.length) {
    showCurrentQuestion();
  } 
  else {
    showResults();
  }
}

function updateProgress() {
  progress.value += increment; 
}

function showCurrentQuestion() {
  questions.forEach((question, index) => {
    if (index === currentQuestion) { 
      question.style.display = 'block';
      startTimer();
    } 
    else {
      question.style.display = 'none';
    }
  });
}


function submitAnswer() {
  const currentQuestionEl = questions[currentQuestion];
  const answerInputs = currentQuestionEl.querySelectorAll('input[type="radio"]:checked');
  if (answerInputs.length > 0) { 
    const selectedAnswer = answerInputs.value;

    const correctAnswer = currentQuestionEl.dataset.answer;
    if (selectedAnswer === correctAnswer) {
      correctAnswers++;
    }
    clearInterval(timerId);
    timeLeft = 30;
    updateTimer();
    goToNextQuestion();
  }
}

submitButton.addEventListener('click', submitAnswer);
showCurrentQuestion();

function showResults() {
  const resultsContainer = document.createElement('div');
  resultsContainer.classList.add('results');

  const header = document.createElement('h2');
  header.textContent = 'Результаты теста';
  resultsContainer.appendChild(header);

  const list = document.createElement('ul');
  resultsContainer.appendChild(list);

  let numCorrect = 0;
  questions.forEach((question, index) => {
    const answerInputs = question.querySelectorAll('input[type="radio"]:checked');
    const selectedAnswer = answerInputs.length > 0 ? answerInputs[0].value : null;
    const correctAnswer = question.dataset.answer;
    const isCorrect = selectedAnswer === correctAnswer;

    if(isCorrect){
      numCorrect++;
    }

    const listItem = document.createElement('p');
    listItem.classList.add('results__item');
    listItem.innerHTML = `
      <span class="results__question">${index + 1}. ${question.textContent.trim()}</span> <br>
      <span class="results__answer ${isCorrect ? 'results__answer--correct<br>' : 'results__answer--incorrect'}">${isCorrect ? 'Правильный ответ' : `Неправильный ответ. <br>Ваш ответ: ${selectedAnswer}. Правильный ответ: ${correctAnswer}`}<br><br></span>
    `;
    list.appendChild(listItem);
  });
  document.getElementById('content').appendChild(resultsContainer);
  timer.style.display = 'none';

  const percentCorrect = Math.round(numCorrect / questions.length * 100);

  const numIncorrect = questions.length - numCorrect;

  const grade = percentCorrect === 100 ? '5' :
                percentCorrect >= 81 ? '4' :
                percentCorrect >= 61 ? '3' :
                '2';

  
  const summary = document.createElement('div');
  summary.classList.add('results__summary');

  summary.innerHTML = `<b><P>Оценка: ${grade}.</p> ${percentCorrect}% правильных ответов (${numIncorrect} неправильных)</b><br><br>`;
  
  resultsContainer.appendChild(summary);

  const content = document.querySelector('.content');
  content.appendChild(resultsContainer);
}

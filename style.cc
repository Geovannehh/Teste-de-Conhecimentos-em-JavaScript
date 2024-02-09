@import url('https://fonts.googleapis.com/css2?family=Inter:wght@400;600;700&display=swap');

*,
:root {
  margin: 0;
  padding: 0;
  box-sizing: border-box;

  font-family: 'Inter', sans-serif;
  font-synthesis: none;
  text-rendering: optimizeLegibility;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  -webkit-text-size-adjust: 100%;
}

body {
  background-color: #0F172A;
}

main {
  padding: 20px;
  max-width: 640px;
  margin: 0 auto 64px;
}

header {
  margin-top: 64px;
  padding-bottom: 24px;
  border-bottom: 1px solid #334155;
}

header h1 {
  margin-top: 24px;
  font-size: 30px;
  color: #f1f5f9;
}

#quiz {
  counter-reset: quiz-item;
}


.quiz-item {
  margin-top: 24px;
  border: 1px solid #475569;
  border-radius: 6px;

  overflow: hidden;
}

.quiz-item h3 {
  padding: 16px 20px;
  color: #E2E8F0;

  display: flex;
  align-items: center;
  gap: 12px;

  background-color: #1e293B;
}

.quiz-item h3:before {
  counter-increment: quiz-item;
  content: counter(quiz-item);

  background-color: #475569;
  width: 28px;
  height: 28px;
  font-size: 12px;
  border-radius: 50%;

  display: flex;
  align-items: center;
  justify-content: center;
  flex-shrink: 0;
}

.quiz-item dl {
  padding: 20px 24px;

  display: grid;
  gap: 8px;
}

.quiz-item dl dt {
  font-size: 14px;
  line-height: 24px;
  letter-spacing: 0;

  display: flex;
  align-items: center;
  gap: 8px;

  color: #E2E8F0;
}

input {
  all: unset;
  border: 1px solid #94a3b8;
  width: 16px;
  height: 16px;

  border-radius: 50%;

  display: flex;
  align-items: center;
  justify-content: center;

  flex-shrink: 0;
}

input:checked {
  border: 1px solid #A3E635;
}

input:checked:before {
  content: "";
  width: 10px;
  height: 10px;

  background-color: #A3E635;
  border-radius: 50%;
}


#acertos {
  text-align: center;
  background-color: #A3E635;

  position: fixed;
  bottom: 0;
  left: 0;

  width: 100%;
  padding: 12px;
}
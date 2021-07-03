month = 10;
function numberOfDays(month) {
  n = 0;
  switch (month) {
    case 1:
      n = 31;
      break;
    case 2:
      n = 28;
      break;
    case 3:
      n = 31;
      break;
    case 4:
      n = 30;
      break;
    case 5:
      n = 31;
      break;
    case 6:
      n = 30;
      break;
    case 7:
      n = 31;
      break;
    case 8:
      n = 31;
      break;
    case 9:
      n = 30;
      break;
    case 10:
      n = 31;
      break;
    case 11:
      n = 30;
      break;
    case 12:
      n = 31;
      break;

    default:
      console.log("Enter a valid Month");
      break;
  }
  if (month >= 1 && month <= 12) {
      console.log("Number of days present are ", n);
  }
}

numberOfDays(month);

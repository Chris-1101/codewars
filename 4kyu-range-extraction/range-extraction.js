function solution(list)
{
  let result = "";
  let isRange = false;

  for (let i = 0; i < list.length; ++i)
  {
    const j = list[i];

    if (list[i + 1] !== j + 1)
    {
      if (isRange) result += (list[i] === list[i - 2] + 2) ? "-" : ",";
      result += j + ",";
      isRange = false;
    }
    else if (!isRange)
    {
      result += j;
      isRange = true;
    }
    debugger;
  }
  return result.slice(0, -1);
}

console.log(solution([-6, -3, -2, -1, 0, 1, 3, 4, 5, 7, 8, 9, 10, 11, 14, 15, 17, 18, 19, 20]));

const input=document.querySelectorAll("input");
let useryear = document.querySelector("#yeartext");
let usermonth = document.querySelector("#monthtext");
let userday = document.querySelector("#daytext");
let currentyear = new Date().getFullYear();
let currentmonth = new Date().getMonth() + 1;
let currentDay = new Date().getDate();
const month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31];
const age = document.querySelector("#age");
const button = document.querySelector("#button");
const clearbutton = document.querySelector("#button2");
button.addEventListener("click", () => {
  let uy = useryear.value;
  let um = usermonth.value;
  let ud = userday.value;
  if ((ud<1 || ud>31) || (um<1 || um>12) || (uy<1000)) {
    alert("Please write valid range");
    useryear.value="";
    usermonth.value="";
    userday.value="";
    age.textContent="";
  }
  else if (isNaN(uy) || isNaN(um) || isNaN(ud)) 
  {
    alert("Please write digits only");
    useryear.value="";
    usermonth.value="";
    userday.value="";
    age.textContent="";
  } 
  else {
    if (currentDay < ud) {
      currentDay = currentDay + month[currentmonth - 1];
      currentmonth = currentmonth - 1;
    }
    if (currentmonth < um) {
      currentmonth = currentmonth + 12;
      currentyear = currentyear - 1;
    }
    if((ud<10) || (um<10))
    {
      usermonth.value="0"+um;
      userday.value="0"+ud; 
    }
    age.textContent = `The age of the person is ${currentyear - uy} year, ${
      currentmonth - um
    } month and ${currentDay - ud} days`;
  }
});
clearbutton.addEventListener("click", () => {
  useryear.value = "";
  usermonth.value = "";
  userday.value = "";
  age.textContent = "";
});
input.forEach(inp => {
  inp.addEventListener("mouseover",()=>
  {
    inp.style.backgroundColor="black";
    inp.style.color="white";
  })
});
input.forEach(inp => {
  inp.addEventListener("mouseleave",()=>
  {
    inp.style.backgroundColor="white";
    inp.style.color="black";
  })
});

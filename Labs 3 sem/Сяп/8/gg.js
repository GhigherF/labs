//1
let user ={
    name:'Masha',
    age:21
}
temp={...user}
temp.name="giga";
console.log(user);
console.log(temp);
console.log('//////////////////////////////////////////////////////////////////');
//2
let numbers=[1,2,3];
let temp2=[...numbers];
temp2.push(4);
console.log(numbers);
console.log(temp2);
console.log('//////////////////////////////////////////////////////////////////');
//3
let user1 = {
    name: 'Masha',
    age: 23,
    location: {
        city: 'Minsk',
        country: 'Belarus'
    }
};
let temp3={...user1};
for (let key in user1) {
    if( typeof user1[key] == 'object') 
    {
        temp3[key]={...user1[key]};
    }
}

temp3.location.city="Moscow";
console.log(user1);
console.log(temp3);
console.log('//////////////////////////////////////////////////////////////////');
//4
let user2={
    name:'Masha',
    age:28,
    skills:["HTML","CSS","JavaScript","React"]
}
let temp4={...user2};
for (let key in user2) {
    if( typeof user2[key] == 'object') 
    {
        temp4[key]=[...user2[key]];
    }
}
temp4.skills.push("Blowjobing");
console.log(user2);
console.log(temp4);
console.log('//////////////////////////////////////////////////////////////////');
//5
const array=[
    {id:1,name:"Vasya",group:10},
    {id:2,name:"Ivan",group:11},
    {id:3,name:"Masha",group:12},
    {id:4,name:"Petya",group:10},
    {id:5,name:"Kira",group:11},
]

let temp5=[...array];
 for (let key in array) {
    if( typeof array[key] == 'object') 
    {
        temp5[key]={...array[key]};
    }
 }
temp5[3].name="Adam Smasher"; 
console.log(array);
console.log(temp5);
console.log('//////////////////////////////////////////////////////////////////');
//6
let user4 = {
    name: 'Masha',
    age :19,
    studies:{
        university: 'BSTU',
        specialty :'designer',
        year:2020,
        exams:{
            maths:true,
            programming:false
        }
    }
}
let temp6={...user4};
for (let key in user4) {
    if( typeof user4[key] == 'object') 
    { 
        temp6[key]={...user4[key]};
        for (let key2 in user4[key]) {
            if( typeof user4[key][key2] == 'object') 
            { 
                temp6[key][key2]={...user4[key][key2]};
            }
        }
    
    }
}
temp6.studies.exams.maths="АААААААА";
console.log(user4);
console.log(temp6);
console.log('//////////////////////////////////////////////////////////////////');
//7
let user5={
    name :'Masha',
    age:22,

    studies:{
        university:'BSTU',
        specialty:'designer',
        year:2020,
        department:{
                faculty:'FIT',
                group:10
        }
    },
        exams: [
            {maths:true,mark:8},
            {programming:true,mark:4}
        ]
    }


let temp7={...user5};
for (let key in user5) {
    if (Array.isArray(user5[key])) 
    {
        temp7[key]=[...user5[key]];

        for (let key2 in user5[key]) {
            if( typeof user5[key][key2] == 'object') 
            { 
                temp7[key][key2]={...user5[key][key2]};
            }
        }
    } else {
    if( typeof user5[key] == 'object') 
        { 
            temp7[key]={...user5[key]};
            for (let key2 in user5[key]) {
                if( typeof user5[key][key2] == 'object') 
                { 
                    temp7[key][key2]={...user5[key][key2]};
                }
            }
        }
    }
}






temp7.exams[1].mark=10;
temp7.studies.department.group=12;
console.log(user5);
console.log(temp7);
console.log('//////////////////////////////////////////////////////////////////');
//8
let user6={
        name:'Masha',
    age:21,
    studies:
    {
        university:'BSTU',
        specialty:'designer',
        year:2020,
        department:{
            faculty:'FIT',
            group:10
        }
    },
    exams:[
        {
            maths:true,
            mark:8,
            professor:
            {
            name:'Ivan Ivanov',
            degree :'PhD',
            }
        },
        {
            programming:true,
            mark:4,
            professor:
            {
            name:'Petr Petrov',
            degree :'PhD',
            }
        }
    ]
}


function deepCopy(obj)
{
    if (obj===null || typeof obj !== 'object') return obj;

  let copy=Array.isArray(obj)?[]:{};
  for(let key in obj)
  {
    copy[key]=deepCopy(obj[key]);
  }
  return copy;
}






let temp8=deepCopy(user6);
 temp8.studies.department.group=52;
 temp8.exams[0].maths="АААААААА";
 temp8.exams[1].professor.name="Jonhy SilverHand";
 console.log(user6);
 console.log(temp8);
 console.log('//////////////////////////////////////////////////////////////////');
//9
let user7=
{
    name:'Masha',
    age:20,
    studies:
    {
        university:'BSTU',
        specialty:'designer',
        year:2020,
        department:
        {
            faculty:'FIT',
            group:10
        }
    },
    exams:[
        {
            maths:true,
            mark:8,
            professor:
            {
            name:'Ivan Petrov',
            degree :'PhD',
            articles:[
                {title:"About HTML",pagesNumber:3},
                {title:"About CSS",pagesNumber:5},
                {title:"About JavaScript",pagesNumber:1}
            ]
        },
        },
        {
            programming:true,
            mark:10,
            professor:
            {
            name:'Petr Ivanov',
            degree :'PhD',
            articles:[
                {title:"About HTML",pagesNumber:3},
                {title:"About CSS",pagesNumber:5},
                {title:"About JavaScript",pagesNumber:1}
            ]
        }
        },
    ]
}
let temp9=deepCopy(user7);
temp9.exams[1].professor.articles[1].pagesNumber=3;
temp9.exams[0].professor.articles[0].title="1984";
console.log(user7);
console.log(temp9);
console.log('//////////////////////////////////////////////////////////////////');
//10
let store={
    state:{
        profilePage:{
            posts:[
                {id:1,message:'Hi',likesCount:12},
                {id:2,message:'By',likesCount:1},
            ],
            newPostText:'About me',
        },
        dialogsPage:{
            dialogs:[
                {id:1,name:'Valera'},
                {id:2,name:'Andrey'},
                {id:3,name:'Sasha'},
                {id:4,name:'Viktor'},
            ],
            messages:[
                {id:1,message:'hi'},
                {id:2,message:'hi hi'},
                {id:3,message:'hi hi hi'},
            ],
        },
            sidebar:[],
        }
    }
    temp10=deepCopy(store);
    temp10.state.dialogsPage.dialogs[2].id=52;
    temp10.state.dialogsPage.messages[0].message="Hello";
    temp10.state.dialogsPage.messages[1].message="Hello";
    temp10.state.dialogsPage.messages[2].message="Hello";
    console.log(store);
    console.log(temp10);
    console.log('//////////////////////////////////////////////////////////////////');

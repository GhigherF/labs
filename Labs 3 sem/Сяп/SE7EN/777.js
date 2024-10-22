    //1
    let person={
            greet()
            {
                console.log(`Greetings,${this.name}!`);
            },
            ageAfterYears(years)
            {
                return this.age+years;
            }
    }
    person.name="ghigher";
    person.age=18;
    person.greet();
    console.log(person.ageAfterYears(5));
    //2
    let car={
        model:"Lada Kalina",
        year:1514,
        getInfo()
        {
            console.log(`The car is a ${this.model} from ${this.year}.`);
        }
    }
    car.getInfo();
    //3
    function Book()
    {
       this. getTitle=function()
        {
            return this.title;
        },
       this.getAuthor=function()
        {
            return this.author;
        }
    }
    let book=new Book();
    book.title="1984";
    book.author="George Orwell";
    console.log(book.getTitle());
    console.log(book.getAuthor());
    //4
    let team={
     players:[{name:"Ghigher",elo:52},{name:"Mohhamed",elo:10}],
     info()
     {
        this.players.forEach((player)=>console.log(player.name+"\'s Elo: "+player.elo));
     }
    }
team.info();
//5
const counter=(function()
{
count=0;
    return {
        increment()
        {
            return ++count;
        },
        decrement()
        {
            return --count;
        },
        getCount()
        {
            return count;
        }
    }
})();
console.log(counter.increment());
console.log(counter.increment());
console.log(counter.decrement());
console.log(counter.getCount());

//6
let item={price:5};
item.price=777;
Object.defineProperty(item,"price",{writable:false});
item.price=2;
console.log(item.price);

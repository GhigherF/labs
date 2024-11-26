let idTask=0;
let idList=0;
let state=["Не выполнена","Выполнена"];

class Task
{
   _id;
    _name;
    _status;
    constructor(name)
    {
       this._id=idTask++;
        this._name=name;
        this._status=state[0];
    }
    get name()
    {
        return  this._name;
    }
    set name(value)
    {
       this. _name=value;
    }

    changeStatus()
    {
        this._status==state[0]?this._status=state[1]:this._status=state[0];
    }
}

class ToDoList
{
    _id;
    _name;
    _list;

    constructor(name)
    {
        this._id=idList++;
        this._name=name;
        this._list=[];
    }
    set name(value)
    {
       this. _name=value;
    }

    Add(task)
    {
this._list.push(task);
    }
}


let task1=new Task("Купить слона");
// console.log("-------------------------------------------------------------");
// console.log(task1);
// task1.changeStatus();
// console.log(task1);
// task1.name="Купить Бугатти";
// console.log(task1);
let task2=new Task("Сдать Лабу");
let list1=new ToDoList("Планы на жизнь");
list1.Add(task1);
list1.Add(task2);
task2.changeStatus();
console.log(list1);

/*
a) Book - data: author, title
        - constructors: Book(),
                        Book(string title),
                        Book(string author, string title)
          delegated versions: Book() : Book("","")
                              Book(string title) : Book("", title)

b) Date - data: day, month, year
        - constructors: Date(int day=1, int month=1, int year=1970),
                        Date(int day, int month=1, int year=1970)
                        Date(int day, int month, int year=1970)
                        Date(int day, int month, int year)
        delegated versions: Date() : Date(1,1,1970)
                            Date(int year): Date(1,1,year)
                            Date(int month, int year) : Date(1,month, year)

c) Employee - data: name, age, position
            - constructors: Employee()
                            Employee(string name);
                            Employee(string name, int age);
                            Employee(string name, int age, string position);
                            Employee(string name, string position);
                            Employee(int age);

    delegated versions: Employee() : Employee("",1,"")
                        Employee(string name) : Employee(name, 1,"")
                        Employee(string name, int age) : Employee(name,age,"")      
                        Employee(string name, string position): Employee(name,1,position)

d) Vehicle - data: brand, reg_year, plates
           - constructors: Vehicle()
                            Vehicle(string plates)
                            Vehicle(string plates, string brand)
                            Vehicle(string plates, string brand, int reg_year)
        delegated versions: Vehicle() : Vehicle("","",1900)
                            Vehicle(string plates) : Vehicle(plates,"",1900)
                            Vehicle(string plates, string brand) : Vehicle(plates, brand, 1900)
                            Vehicle(string plates, int reg_year) : vehicle(plates, "", reg_year)

e) Object - data: sides
          - constructors: Object()
                          Object(int sides);

        delegated versions: Object() : Object(0)

f) Tree - data: height, type
        - constructors: Tree();
                        Tree(int height)
                        Tree(int height, string type)
                        Tree(string type)

        delegated versions: Tree() : Tree(0, "")
                            Tree(int height) : Tree(height,"")
                            Tree(string type) : Tree(0, type)

*/
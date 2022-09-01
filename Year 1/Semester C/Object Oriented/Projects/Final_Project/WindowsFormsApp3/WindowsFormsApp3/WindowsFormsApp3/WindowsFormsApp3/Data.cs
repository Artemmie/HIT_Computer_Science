namespace Data
{
    using System;
    using System.Collections;
    using System.Collections.Generic;

    [Serializable]
    public abstract class Person
    {
        long id;
        string firstName;
        string lastName;
        string cellPhone;
        int month;
        int year;
        public long Id { get { return id; } set { id = value; } }
        public string FirstName { get { return firstName; } set { firstName = value; } }
        public string LastName { get { return lastName; } set { lastName = value; } }
        public string CellPhone { get { return cellPhone; } set { cellPhone = value; } }
        public int Month { get { return month; } set { month = value; } }
        public int Year { get { return year; } set { year = value; } }
        public void SaveData()
        {

        }
    }
    [Serializable]
    public class Worker : Person
    {
        long workerID;
        public Worker() : this(1, 326856432, "Artem", "Gerasimov", "0526453011", 7) { }
        public Worker(long workerIdVal, long idVal, string firstNameVal, string lastNameVal, string cellPhoneVal, int monthVal)
        {
            workerID = workerIdVal;
            Id = idVal;
            FirstName = firstNameVal;
            LastName = lastNameVal;
            CellPhone = cellPhoneVal;
            Month = monthVal;
        }
        public long WorkerID { get { return workerID; } set { workerID = value; } }
        ~Worker() { }
    }
    [Serializable]
    public class Customer : Person
    {
        long customerID;
        public Customer() : this(1, 999999999, "Liel", "Cohen", "0512512512", 99,99) { } // To update
        public Customer(long customerIdVal, long idVal, string firstNameVal, string lastNameVal, string cellPhoneVal, int monthVal, int yearVal)
        {
            customerID = customerIdVal;
            Id = idVal;
            FirstName = firstNameVal;
            LastName = lastNameVal;
            CellPhone = cellPhoneVal;
            Month = monthVal;
            Year = yearVal;
        }
        public long CustomerID { get { return customerID; } set { customerID = value; } }
        ~Customer() { }
    }
    [Serializable] 
    public class PersonList
    {
        protected List<Person> people;
        public PersonList() { people = new List<Person>(); }
        public int NextIndex{ get { return people.Count; }}
        public Person this[int index]
        {
            get
            {
                if (index >= people.Count) return null;
                return people[index];
            }
            set
            {
                people.Add(value);
            }
        }
        public List<Person> GetList() { return people; }
        public void Remove(int element)
        {
            if (element >= 0 && element < people.Count)
            {
                for (int i = element; i < people.Count - 1; i++)
                    people[i] = people[i + 1];
                people.RemoveAt(people.Count - 1);
            }
        }
    }

}

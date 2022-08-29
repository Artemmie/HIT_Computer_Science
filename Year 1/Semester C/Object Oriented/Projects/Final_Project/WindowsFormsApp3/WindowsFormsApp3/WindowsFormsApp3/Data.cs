using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Data
{
    [Serializable]
    public abstract class Person
    {
        long id;
        string firstName;
        string lastName;
        string cellPhone;
        int month;
        int year;
        public long Id { get { return this.id; } set { id = value; }}
        public string FirstName { get { return firstName; } set { firstName = value; } }
        public string LastName { get { return lastName; } set { lastName = value; } }
        public string CellPhone { get { return cellPhone; } set { cellPhone = value; } }
        public int Month { get { return month; } set { month = value; } }
        public int Year { get { return year; } set { year = value; } }
    }
    public class Worker : Person
    {

    }
    public class Customer : Person
    {

    }
}

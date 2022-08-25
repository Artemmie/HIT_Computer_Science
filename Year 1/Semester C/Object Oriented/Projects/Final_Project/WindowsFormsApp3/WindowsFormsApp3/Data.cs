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
        public int Id { get; set; }
        public string FirstName { get; set; }
        public string LastName { get; set; }
        public string CellPhone { get; set; }
        public int Month { get; set; }
        public int Year { get; set; }

    }
}

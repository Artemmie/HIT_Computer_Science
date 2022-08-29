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
        public int Id { private get; set; }
        public string FirstName { private get; set; }
        public string LastName { private get; set; }
        public string CellPhone { private get; set; }
        public int Month { private get; set; }
        public int Year { private get; set; }

    }
}

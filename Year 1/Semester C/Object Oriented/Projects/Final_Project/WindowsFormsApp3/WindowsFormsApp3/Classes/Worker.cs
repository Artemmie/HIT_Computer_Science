using System;
namespace WindowsFormsApp3.Classes
{
    [Serializable]
    public abstract class Worker
    {

        private long idVal;
        private string firstNameVal;
        private string lastNameVal;
        private string cellPhoneVal;
        private DateTime birthVal;
        private int salary;
        private string title;

        protected Worker(long idVal, string firstNameVal, string lastNameVal, string cellPhoneVal, DateTime birthVal, int salary, string title)
        {
            this.idVal = idVal;
            this.firstNameVal = firstNameVal;
            this.lastNameVal = lastNameVal;
            this.cellPhoneVal = cellPhoneVal;
            this.birthVal = birthVal;
            this.salary = salary;
            this.title = title; 
        }

        public long Id { get { return idVal; } set { idVal = value; } }
        public string FirstName { get { return firstNameVal; } set { firstNameVal = value; } }
        public string LastName { get { return lastNameVal; } set { lastNameVal = value; } }
        public string CellPhone { get { return cellPhoneVal; } set { cellPhoneVal = value; } }
        public DateTime BirthDate { get { return birthVal; } set { birthVal = value; } }
        public int Salary { get { return CalculateSalary(); } set { salary = value; } }
        public string Title { get { return title; } set { title = value; } }

        public virtual int CalculateSalary()
        {
            return this.salary + 3000;
        }
    }
}

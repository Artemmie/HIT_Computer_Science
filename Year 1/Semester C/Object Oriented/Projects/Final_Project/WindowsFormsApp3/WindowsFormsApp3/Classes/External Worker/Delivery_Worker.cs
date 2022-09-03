using System;
using WindowsFormsApp3.External_Worker;

namespace WindowsFormsApp3.Classes.External_Worker
{
    [Serializable]
    public class Delivery : ExternalWorker
    {
        int bonus;
        public Delivery(long idVal, string firstNameVal, string lastNameVal, string cellPhoneVal, DateTime birthVal, int salary, string title, long externalWorkerID, int bonus) : base(idVal, firstNameVal, lastNameVal, cellPhoneVal, birthVal, salary, title, externalWorkerID)
        {
            this.Id = idVal;
            this.FirstName = firstNameVal;
            this.LastName = lastNameVal;
            this.CellPhone = cellPhoneVal;
            this.BirthDate = birthVal;
            this.ExternalWorkerID = externalWorkerID;
            this.Salary = salary;
            this.Title = title;
            this.bonus = bonus;
        }
        public int Bonus { get { return bonus; } set { bonus = value; } }

        public override int CalculateSalary()
        {
            return base.CalculateSalary() + 1000 + bonus;
        }
        ~Delivery() { }
    }
}

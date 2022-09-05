using System;
using WindowsFormsApp3.Company_Worker;

namespace WindowsFormsApp3.Classes.Company_Worker
{
    [Serializable]
    public class Waiter : CompanyWorker
    {
        Random rand = new Random();
        int tip;
        public Waiter(long idVal, string firstNameVal, string lastNameVal, string cellPhoneVal, DateTime birthVal, int salary, string title, long workerID, int tip) : base(idVal, firstNameVal, lastNameVal, cellPhoneVal, birthVal, salary, title, workerID)
        {
            this.Id = idVal;
            this.FirstName = firstNameVal;
            this.LastName = lastNameVal;
            this.CellPhone = cellPhoneVal;
            this.BirthDate = birthVal;
            this.WorkerID = workerID;
            this.Salary = salary;
            this.Title = title;
            this.tip = tip + rand.Next(500);
        }
        public int Tip { get { return tip; } set { tip = value; } }
        public override int CalculateSalary()
        {
            return base.CalculateSalary() + tip;
        }
        ~Waiter() { }
    }
}

using System;
using WindowsFormsApp3.Company_Worker;

namespace WindowsFormsApp3.Classes.Company_Worker
{
    [Serializable]
    public class Shiftmanager : CompanyWorker
    {
        string shift;
        public Shiftmanager(long idVal, string firstNameVal, string lastNameVal, string cellPhoneVal, DateTime birthVal, int salary, string title, long workerID, string shift) : base(idVal, firstNameVal, lastNameVal, cellPhoneVal, birthVal, salary, title, workerID)
        {
            this.Id = idVal;
            this.FirstName = firstNameVal;
            this.LastName = lastNameVal;
            this.CellPhone = cellPhoneVal;
            this.BirthDate = birthVal;
            this.WorkerID = workerID;
            this.Salary = salary;
            this.Title = title;
            this.shift = shift;
        }
        public override int CalculateSalary()
        {
            int calculated = 2000;
            if (shift == "Night") calculated += 500;
            return base.CalculateSalary() + calculated;
        }
        public string Shift { get { return shift; } set { shift = value; } }
        ~Shiftmanager() { }
    }
}

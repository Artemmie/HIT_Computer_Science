using WindowsFormsApp3.Classes;
using System;

namespace WindowsFormsApp3.Company_Worker
{
    [Serializable]
    public class CompanyWorker : Worker
    {
        long workerID;
        public CompanyWorker(long idVal, string firstNameVal, string lastNameVal, string cellPhoneVal, DateTime birthVal, int salary, string title, long workerID) : base(idVal, firstNameVal, lastNameVal, cellPhoneVal, birthVal, salary, title)
        {
            this.Id = idVal;
            this.FirstName = firstNameVal;
            this.LastName = lastNameVal;
            this.CellPhone = cellPhoneVal;
            this.BirthDate = birthVal;
            this.Salary = salary;
            this.Title = title;
            this.WorkerID = workerID;
        }
        public long WorkerID { get { return workerID; } set { workerID = value; } }
        ~CompanyWorker() { }
    }
}

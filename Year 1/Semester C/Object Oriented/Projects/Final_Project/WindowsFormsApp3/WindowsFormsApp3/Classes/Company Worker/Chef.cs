using System;
using WindowsFormsApp3.Classes;
using WindowsFormsApp3.Company_Worker;

namespace WindowsFormsApp3.Chef
{
    [Serializable]
    public class Chef : CompanyWorker
    {
        private int salary;
        public Chef(long idVal, string firstNameVal, string lastNameVal, string cellPhoneVal, DateTime birthVal, long workerID, int salary) : base(idVal, firstNameVal, lastNameVal, cellPhoneVal, birthVal, workerID)
        {
            this.Id = idVal;
            this.FirstName = firstNameVal;
            this.LastName = lastNameVal;
            this.CellPhone = cellPhoneVal;
            this.BirthDate = birthVal;
            this.WorkerID = workerID;
            this.salary = salary;
        }
        public int Salary { get { return salary; } set { salary = value; } }
    }
}

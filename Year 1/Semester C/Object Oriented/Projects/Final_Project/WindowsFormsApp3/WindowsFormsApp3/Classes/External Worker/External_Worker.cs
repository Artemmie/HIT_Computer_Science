using WindowsFormsApp3.Classes;
using System;

namespace WindowsFormsApp3.External_Worker
{
    [Serializable]
    public class ExternalWorker : Worker
    {
        long externalWorkerID;
        public ExternalWorker(long idVal, string firstNameVal, string lastNameVal, string cellPhoneVal, DateTime birthVal, int salary, string title, long externalWorkerID) : base(idVal, firstNameVal, lastNameVal, cellPhoneVal, birthVal, salary, title)
        {
            this.Id = idVal;
            this.FirstName = firstNameVal;
            this.LastName = lastNameVal;
            this.CellPhone = cellPhoneVal;
            this.BirthDate = birthVal;
            this.Salary = salary;
            this.Title = title;
            this.externalWorkerID = externalWorkerID;
        }
        public long ExternalWorkerID { get { return externalWorkerID; } set { externalWorkerID = value; } }
        ~ExternalWorker() { }
    }
}

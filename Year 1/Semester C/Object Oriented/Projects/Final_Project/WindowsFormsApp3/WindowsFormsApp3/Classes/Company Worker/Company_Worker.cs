using WindowsFormsApp3.Classes;
using System;

namespace WindowsFormsApp3.Company_Worker
{
    public class CompanyWorker : Worker
    {
        long workerID;
        public CompanyWorker(long idVal, string firstNameVal, string lastNameVal, string cellPhoneVal, DateTime birthVal, long workerID) : base(idVal, firstNameVal, lastNameVal, cellPhoneVal, birthVal)
        {
            this.Id = idVal;
            this.FirstName = firstNameVal;
            this.LastName = lastNameVal;
            this.CellPhone = cellPhoneVal;
            this.BirthDate = birthVal;
            this.workerID = workerID;
        }
        public long WorkerID { get { return workerID; } set { workerID = value; } }
        ~CompanyWorker() { }
    }
}

using WindowsFormsApp3.Classes;
using System;

namespace WindowsFormsApp3.External_Worker
{
    [Serializable]
    public class ExternalWorker : Worker
    {
        long externalWorkerID;
        public ExternalWorker(long idVal, string firstNameVal, string lastNameVal, string cellPhoneVal, DateTime birthVal, long externalWorkerID) : base(idVal, firstNameVal, lastNameVal, cellPhoneVal, birthVal)
        {
            this.Id = idVal;
            this.FirstName = firstNameVal;
            this.LastName = lastNameVal;
            this.CellPhone = cellPhoneVal;
            this.BirthDate = birthVal;
            this.externalWorkerID = externalWorkerID;
        }
        public long WorkerID { get { return externalWorkerID; } set { externalWorkerID = value; } }
        ~ExternalWorker() { }
    }
}

using System;
using WindowsFormsApp3.External_Worker;

namespace WindowsFormsApp3.Classes.External_Worker
{
    [Serializable]
    public class Delivery : ExternalWorker
    {
        string vehicle;
        public Delivery(long idVal, string firstNameVal, string lastNameVal, string cellPhoneVal, DateTime birthVal, int salary, string title, long externalWorkerID, string vehicle) : base(idVal, firstNameVal, lastNameVal, cellPhoneVal, birthVal, salary, title, externalWorkerID)
        {
            this.Id = idVal;
            this.FirstName = firstNameVal;
            this.LastName = lastNameVal;
            this.CellPhone = cellPhoneVal;
            this.BirthDate = birthVal;
            this.ExternalWorkerID = externalWorkerID;
            this.Salary = salary;
            this.Title = title;
            this.vehicle = vehicle;
        }
        public string Bonus { get { return vehicle; } set { vehicle = value; } }

        public override int CalculateSalary()
        {
            int calculated = 1000;
            switch (vehicle)
            {
                case "Bicycle":
                    calculated += 250;
                    break;
                case "Electric Bicycle":
                    calculated += 300;
                    break;
                case "Bike":
                    calculated += 450;
                    break;
                case "Car":
                    calculated += 750;
                    break;
                default:
                    break;
            }
            return base.CalculateSalary() + calculated;
        }
        ~Delivery() { }
    }
}

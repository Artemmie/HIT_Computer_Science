using System;
using WindowsFormsApp3.Company_Worker;

namespace WindowsFormsApp3.Classes.Company_Worker
{
    [Serializable]
    public class Chef : CompanyWorker
    {
        string chefType;
        public Chef(long idVal, string firstNameVal, string lastNameVal, string cellPhoneVal, DateTime birthVal, int salary, string title, long workerID, string chefType) : base(idVal, firstNameVal, lastNameVal, cellPhoneVal, birthVal, salary, title, workerID)
        {
            this.Id = idVal;
            this.FirstName = firstNameVal;
            this.LastName = lastNameVal;
            this.CellPhone = cellPhoneVal;
            this.BirthDate = birthVal;
            this.WorkerID = workerID;
            this.Salary = salary;
            this.Title = title;
            this.ChefType = chefType;
        }
        public string ChefType { get { return chefType; } set { chefType = value; } }

        public override int CalculateSalary()
        {
            int calculated = 2000;
            switch (chefType)
            {
                case "Executive chef":
                    calculated += 1000;
                    break;
                case "Head chef":
                    calculated += 700;
                    break;
                case "Sous chef":
                    calculated += 650;
                    break;
                case "Butcher chef":
                    calculated += 520;
                    break;
                case "Pastry chef":
                    calculated += 280;
                    break;
                case "Fish chef":
                    calculated += 200;
                    break;
                default:
                    break;
            }
            return base.CalculateSalary() + calculated;
        }
        ~Chef() { }
    }
}

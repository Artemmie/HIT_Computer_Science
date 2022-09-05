using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using WindowsFormsApp3.Classes;

namespace WindowsFormsApp3
{
    public partial class Reg_Worker : Form
    {
        string[] internalJobs = new string[] { "Chef", "Shift Manager", "Waiter" };
        string[] externalJobs = new string[] { "Delivery" };
        string[] chefTypes = new string[] { "Executive chef", "Head chef", "Sous chef", "Butcher chef", "Pastry chef", "Fish chef" };
        string[] shiftTypes = new string[] { "Day", "Night" };
        string[] vehicleTypes = new string[] { "Bicycle", "Electric Bicycle", "Bike", "Car" };
        public Reg_Worker()
        {
            InitializeComponent();
        }
        private void New_customer_butt_Click(object sender, EventArgs e)
        {
            HideAll();
            this.New_worker_butt.Enabled = false;
            this.Save_worker_butt.Enabled = true;

            // Information
            this.Info_gbox.Enabled = true;
            //Text boxes
            this.Job_Decision.Checked = false;
            this.Worker_Job.Items.Clear();
            if (Job_Decision.Checked) this.Worker_Job.Items.AddRange(externalJobs);
            else this.Worker_Job.Items.AddRange(internalJobs);
            this.Worker_ID.ResetText();
            this.Worker_First.ResetText();
            this.Worker_Last.ResetText();
            this.Worker_Cell.ResetText();
            this.Worker_Birthday.ResetText();
            this.Worker_Job.ResetText();
        }

        private void Save_customer_butt_Click(object sender, EventArgs e)
        {
            Save_Values();
        }

        private void Reg_Customer_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Enter) Save_Values();
        }

        private void Job_Decision_CheckedChanged(object sender, EventArgs e)
        {
            this.Worker_Job.Items.Clear();
            if (Job_Decision.Checked) this.Worker_Job.Items.AddRange(externalJobs);
            else this.Worker_Job.Items.AddRange(internalJobs);
            HideAll();
        }
        private void Save_Values()
        {
            long customerID;
            int age = (int)((DateTime.Now - Worker_Birthday.Value).TotalDays / 365.242199);
            if (long.TryParse(Worker_ID.Text, out customerID) && Worker_Job.SelectedItem != null && age >= 16 && age <= 65)
            {
                if (!Form1.instance.TableValidation(customerID))
                {
                    MessageBox.Show("ID already exists!");
                    return;
                }
                this.New_worker_butt.Enabled = true;
                this.Save_worker_butt.Enabled = false;
                if (Worker_Job.SelectedItem.ToString() != "Waiter")
                    Form1.instance.UpdateTable(customerID, Worker_First.Text, Worker_Last.Text, Worker_Cell.Text, Worker_Birthday.Value, Worker_Job.SelectedItem.ToString(), Secondary_type_dropbox.SelectedItem.ToString());
                else
                    Form1.instance.UpdateTable(customerID, Worker_First.Text, Worker_Last.Text, Worker_Cell.Text, Worker_Birthday.Value, Worker_Job.SelectedItem.ToString());
            }
            else MessageBox.Show("One of the values are incorrect!");
        }

        private void Worker_Job_SelectedIndexChanged(object sender, EventArgs e)
        {
            HideAll();
            switch (this.Worker_Job.SelectedItem.ToString())
            {
                case "Chef":
                    this.Secondary_type.Text = "Chef Type:";
                    this.Secondary_type_dropbox.Visible = true;
                    this.Secondary_type.Visible = true;
                    this.Secondary_type_dropbox.Items.Clear();
                    this.Secondary_type_dropbox.Items.AddRange(chefTypes);
                    this.Secondary_type_dropbox.SelectedIndex = 0;
                    break;
                case "Shift Manager":
                    this.Secondary_type.Text = "Shift:";
                    this.Secondary_type.Visible = true;
                    this.Secondary_type_dropbox.Visible = true;
                    this.Secondary_type_dropbox.Items.Clear();
                    this.Secondary_type_dropbox.Items.AddRange(shiftTypes);
                    this.Secondary_type_dropbox.SelectedIndex = 0;
                    break;
                case "Delivery":
                    this.Secondary_type.Text = "Vehicle:";
                    this.Secondary_type.Visible = true;
                    this.Secondary_type_dropbox.Visible = true;
                    this.Secondary_type_dropbox.Items.Clear();
                    this.Secondary_type_dropbox.Items.AddRange(vehicleTypes);
                    this.Secondary_type_dropbox.SelectedIndex = 0;
                    break;
                default:
                    HideAll();
                    break;
            }
        }   
        public void HideAll()
        {
            this.Secondary_type_dropbox.Visible = false;
            this.Secondary_type.Visible = false;
        }
    }
}

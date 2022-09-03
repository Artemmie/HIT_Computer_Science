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
        public Reg_Worker()
        {
            InitializeComponent();
        }
        private void New_customer_butt_Click(object sender, EventArgs e)
        {
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
        }
        private void Save_Values()
        {
            long customerID;
            int age = (int)((DateTime.Now - Worker_Birthday.Value).TotalDays / 365.242199);
            if (long.TryParse(Worker_ID.Text, out customerID) && Worker_Job.SelectedItem != null && age >= 16)
            {
                this.New_worker_butt.Enabled = true;
                this.Save_worker_butt.Enabled = false;
                Form1.instance.UpdateTable(customerID, Worker_First.Text, Worker_Last.Text, Worker_Cell.Text, Worker_Birthday.Value, Worker_Job.SelectedItem.ToString());
                
            }
            else MessageBox.Show("One of the values are incorrect!");
        }
    }
}

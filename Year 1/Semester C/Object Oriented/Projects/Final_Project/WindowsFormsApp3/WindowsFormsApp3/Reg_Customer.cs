using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Data;

namespace WindowsFormsApp3
{
    public partial class Reg_Customer : Form
    {
        public Reg_Customer()
        {
            InitializeComponent();
        }
        private void New_customer_butt_Click(object sender, EventArgs e)
        {
            this.New_customer_butt.Enabled = false;
            this.Save_customer_butt.Enabled = true;

            // Information
            this.Info_gbox.Enabled = true;
            //Text boxes
            this.C_id_text.ResetText();
            this.C_first_text.ResetText();
            this.C_last_text.ResetText();
            this.C_cell_text.ResetText();
            this.C_year_text.ResetText();
            this.C_month_text.ResetText();
        }

        private void Save_customer_butt_Click(object sender, EventArgs e)
        {
            Save_Values();
        }

        private void Reg_Customer_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Enter) Save_Values();
        }
        private void Save_Values()
        {
            long customerID;
            int customerMonth;
            int customerYear;
            if (long.TryParse(C_id_text.Text, out customerID) && int.TryParse(C_month_text.Text, out customerMonth) && int.TryParse(C_year_text.Text, out customerYear))
            {
                this.New_customer_butt.Enabled = true;
                this.Save_customer_butt.Enabled = false;
                this.Info_gbox.Enabled = false;
                Form1.instance.UpdateTable(customerID, C_first_text.Text, C_last_text.Text, C_cell_text.Text, customerMonth, customerYear);
            }
            else MessageBox.Show("One of the values are incorrect!");
        }
    }
}

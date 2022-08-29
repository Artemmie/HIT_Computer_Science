using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp3
{
    public partial class Reg_Customer : Form
    {
        public Reg_Customer()
        {
            InitializeComponent();
        }

        private void label6_Click(object sender, EventArgs e)
        {

        }

        private void textBox6_TextChanged(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void Reg_Customer_Load(object sender, EventArgs e)
        {

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
            this.New_customer_butt.Enabled = true;
            this.Save_customer_butt.Enabled = false;
            this.Info_gbox.Enabled = false;
        }
    }
}

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
    public partial class Reg_Worker : Form
    {
        public Reg_Worker()
        {
            InitializeComponent();
        }

        private void Reg_Worker_Load(object sender, EventArgs e)
        {

        }

        private void New_butt_Click(object sender, EventArgs e)
        {
            this.New_butt.Enabled = false;
            this.Save_butt.Enabled = true;
            //Information
            this.info_gbox.Enabled = true;
            //Text boxes
            this.W_id_text.ResetText();
            this.W_first_text.ResetText();
            this.W_last_text.ResetText();
            this.W_cell_text.ResetText();
            this.W_year_text.ResetText();
        }

        private void Save_butt_Click(object sender, EventArgs e)
        {
            this.Save_butt.Enabled = false;
            this.New_butt.Enabled = true;
            this.info_gbox.Enabled = false;
        }

        private void Reg_Worker_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Enter)
            {
                this.Save_butt.Enabled = false;
                this.New_butt.Enabled = true;
                this.info_gbox.Enabled = false;
                
            }
        }

    }
}

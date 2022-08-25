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
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void toolStripButton1_Click(object sender, EventArgs e)
        {
            Reg_Worker rg = new Reg_Worker();
            rg.MdiParent = this;
            rg.Show();
        }

        private void toolStripButton2_Click(object sender, EventArgs e)
        {
            Reg_Customer rg = new Reg_Customer();
            rg.MdiParent = this;
            rg.Show();
        }

        private void toolStripButton5_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}

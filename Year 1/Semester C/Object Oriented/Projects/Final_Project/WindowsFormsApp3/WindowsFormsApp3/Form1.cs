using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Runtime.Serialization.Formatters.Binary;
using System.Runtime.Serialization;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Data;
namespace WindowsFormsApp3
{
    public partial class Form1 : Form
    {
        public static Form1 instance;
        PersonList personList = new PersonList();
        DataTable dt = new DataTable();
        public Form1()
        {
            InitializeComponent();
            instance = this;
            ShowingDataGridView(GetPersonList());
        }
        //WORKER BUTTON
        private void Register_Worker_Click(object sender, EventArgs e)
        {
            Reg_Worker rg = new Reg_Worker();
            rg.MdiParent = this;
            rg.Show();
        }
        //CUSTOMER BUTTON
        private void Register_Customer_Click(object sender, EventArgs e)
        {
            Reg_Customer rg = new Reg_Customer();
            rg.MdiParent = this;
            rg.Show();
        }
        //UPDATE TABLE
        public void UpdateTable(long customerID, string firstN, string lastN, string cellphone, int month, int year)
        {
            personList[personList.NextIndex] = new Customer(personList.NextIndex, customerID, firstN, lastN, cellphone, month, year);
         //   dt.Rows.Add(personList.NextIndex - 1, customerID, firstN, lastN, cellphone);
        }

        public PersonList GetPersonList()
        {
            return personList;
        }

        public void ShowingDataGridView(PersonList personList)
        {
            dt.Columns.Add("Index", typeof(int));
            dt.Columns.Add("Id", typeof(long));
            dt.Columns.Add("First Name", typeof(string));
            dt.Columns.Add("Last Name", typeof(string));
            dt.Columns.Add("Cellphone", typeof(string));
            dataGridView1.DataSource = dt;
        }
        // SAVE BUTTON
        private void Save_Click(object sender, EventArgs e)
        {
            SaveFileDialog saveFileDialog1 = new SaveFileDialog();
            saveFileDialog1.InitialDirectory = Directory.GetCurrentDirectory();
            saveFileDialog1.Filter = "model files (*.mdl)|*.mdl|All files (*.*)|*.*";
            saveFileDialog1.FilterIndex = 1;
            saveFileDialog1.RestoreDirectory = true;
            if (saveFileDialog1.ShowDialog() == DialogResult.OK)
            {
                IFormatter formatter = new BinaryFormatter();
                using (Stream stream = new FileStream(saveFileDialog1.FileName, FileMode.Create, FileAccess.Write, FileShare.None))
                    formatter.Serialize(stream, personList);
            }
        }
        // LOAD BUTTON
        private void Load_Click(object sender, EventArgs e)
        {
            OpenFileDialog openFileDialog1 = new OpenFileDialog();
            openFileDialog1.InitialDirectory = Directory.GetCurrentDirectory();
            openFileDialog1.Filter = "model files (*.mdl)|*.mdl|All files (*.*)|*.*";
            openFileDialog1.FilterIndex = 1;
            openFileDialog1.RestoreDirectory = true;
            if (openFileDialog1.ShowDialog() == DialogResult.OK)
            {
                Stream stream = File.Open(openFileDialog1.FileName, FileMode.Open);
                var binaryFormatter = new System.Runtime.Serialization.Formatters.Binary.BinaryFormatter();
                personList = (PersonList)binaryFormatter.Deserialize(stream);
            }
        }
        //EXIT BUTTON
        private void Exit_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}

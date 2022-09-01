using System;
using System.Collections.Generic;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using System.Runtime.Serialization;
using System.Windows.Forms;
using WindowsFormsApp3.Classes;
using WindowsFormsApp3.Classes.Company_Worker;

namespace WindowsFormsApp3
{
    public partial class Form1 : Form
    {
        public static Form1 instance;
        WorkerList workerList = new WorkerList();
        BindingSource source = new BindingSource();
        List<Worker> users;
        public Form1()
        {
            InitializeComponent();
            instance = this;
            LinkTable();
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
            Reg_Worker rg = new Reg_Worker();
            rg.MdiParent = this;
            rg.Show();
        }
        //UPDATE TABLE
        public void UpdateTable(long customerID, string firstN, string lastN, string cellphone, int month, int year)
        {
            workerList[workerList.NextIndex] = new Chef(customerID, firstN, lastN, cellphone, new DateTime(1996, 07, 15), workerList.NextIndex, 50);
            users = workerList.GetList();
            source.ResetBindings(false);
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
                    formatter.Serialize(stream, workerList);
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
                workerList = (WorkerList)binaryFormatter.Deserialize(stream);
                LinkTable();
            }

        }
        public void LinkTable()
        {
            users = workerList.GetList();
            source.DataSource = users;
            dataGridView1.DataSource = source;
        }
        //EXIT BUTTON
        private void Exit_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void dataGridView1_KeyDown(object sender, KeyEventArgs e)
        {
            if (e.KeyCode == Keys.Delete)
            {
                foreach (DataGridViewRow row in dataGridView1.SelectedRows)
                    workerList.Remove(row.Index);

                users = workerList.GetList();
                source.ResetBindings(false);
            }

        }

        private void toolStripButton1_Click(object sender, EventArgs e)
        {
            foreach (DataGridViewRow row in dataGridView1.SelectedRows)
                workerList.Remove(row.Index);
            users = workerList.GetList();
            source.ResetBindings(false);
        }
    }
}

using System;
using System.Collections.Generic;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using System.Runtime.Serialization;
using System.Windows.Forms;
using WindowsFormsApp3.Classes;
using WindowsFormsApp3.Classes.Company_Worker;
using WindowsFormsApp3.Classes.External_Worker;

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
        public void UpdateTable(long customerID, string firstN, string lastN, string cellphone, DateTime date, string title)
        {
            //sw case - worker title
            switch (title)
            {
                case "Chef" : workerList[workerList.NextIndex] = new Chef(customerID, firstN, lastN, cellphone, date.Date, 0, title, workerList.NextIndex);
                    users = workerList.GetList();
                    source.ResetBindings(false); 
                    break;
                case "Waiter" : workerList[workerList.NextIndex] = new Waiter(customerID, firstN, lastN, cellphone, date.Date, 0, title, workerList.NextIndex, 5); // TO CHANGE
                    users = workerList.GetList();
                    source.ResetBindings(false); 
                    break;
                case "Shift Manager": workerList[workerList.NextIndex] = new Shiftmanager(customerID, firstN, lastN, cellphone, date.Date, 0, title, workerList.NextIndex, "Night"); // TO CHANGE
                    users = workerList.GetList();
                    source.ResetBindings(false); 
                    break;
                case "Delivery": workerList[workerList.NextIndex] = new Delivery(customerID, firstN, lastN, cellphone, date.Date, 0, title, workerList.NextIndex, 50); // TO CHANGE
                    users = workerList.GetList();
                    source.ResetBindings(false); 
                    break;
            }
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
                try
                {
                    using (Stream stream = new FileStream(saveFileDialog1.FileName, FileMode.Create, FileAccess.Write, FileShare.None))
                        formatter.Serialize(stream, workerList);
                }
                catch
                {
                    MessageBox.Show("Save has failed");
                }
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
                try
                {
                    workerList = (WorkerList)binaryFormatter.Deserialize(stream);
                }
                catch
                {
                    MessageBox.Show("Load has failed");
                }  
                LinkTable();
            }

        }
        public void LinkTable()
        {
            users = workerList.GetList();
            source.DataSource = users;
            dataGridView1.DataSource = source;
            foreach (DataGridViewColumn column in dataGridView1.Columns)
            {
                if (column.Name == "Title")
                {
                    column.ReadOnly = true;
                }
            }
        }

        //EXIT BUTTON
        private void toolStripButton2_Click(object sender, EventArgs e)
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

        private void toolStripButton3_Click(object sender, EventArgs e)
        {
            Aboutus a = new Aboutus();
            a.MdiParent = this;
            a.Show();
        }
    }
}

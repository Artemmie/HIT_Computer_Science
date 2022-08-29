using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;

using System.IO;
using System.Runtime.Serialization;//!!!!!!
using System.Runtime.Serialization.Formatters.Binary;

using FIGURES; //!3b-//!3e

namespace my1st
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }


        FigureList pts = new FigureList();
        int curIndex=-1;
        int radius = 6;
        int futureKind = 0; //!4b-//!4e

        //!5b
        private void pictureBox1_MouseDown(object sender, MouseEventArgs e)
        {
            curIndex=-1;
            for (int i = 0; i < pts.NextIndex; i++ )
            {                           
                if (pts[i].isInside(e.X,e.Y))
                {
                    curIndex = i;
                    string s = e.Button.ToString();
                    if (s == "Right") //if Right button pressed - Remove
                    {
                        pts.Remove(curIndex);
                        curIndex = -1;
                        pictureBox1.Invalidate();
                        return;
                    }
                    break;
                }
            }
            if (curIndex < 0)
            {
                switch (futureKind)
                {
                    case 0:
                       pts[pts.NextIndex] = new myCircle(e.X, e.Y, 5);
                        break;
                    case 1:
                        pts[pts.NextIndex] = new myRectangle(e.X, e.Y, 20,10);
                        break;
                }
                curIndex = pts.NextIndex - 1;
                pictureBox1.Invalidate();
            }
        }

        private void pictureBox1_MouseMove(object sender, MouseEventArgs e)
        {
            if (curIndex>=0)
            {
                Figure c = (Figure)pts[curIndex];
                c.X=e.X;
                c.Y=e.Y;
                pictureBox1.Invalidate();
            }

        }
        private void pictureBox1_MouseUp(object sender, MouseEventArgs e)
        {
            curIndex = -1;
        }

        private void pictureBox1_Paint(object sender, PaintEventArgs e)
        {
            Graphics g = e.Graphics;
            g.SmoothingMode = System.Drawing.Drawing2D.SmoothingMode.HighQuality;
            pts.DrawAll(g);
            
        }
        //!5e

        //!6b
        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            futureKind = 1;
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            futureKind = 0;
        }
        //!6e

        //!8b
        private void button1_Click(object sender, EventArgs e)
        {
            SaveFileDialog saveFileDialog1 = new SaveFileDialog();
            saveFileDialog1.InitialDirectory = Directory.GetCurrentDirectory();// + "..\\myModels";
            saveFileDialog1.Filter = "model files (*.mdl)|*.mdl|All files (*.*)|*.*";
            saveFileDialog1.FilterIndex = 1;
            saveFileDialog1.RestoreDirectory = true;
            if (saveFileDialog1.ShowDialog() == DialogResult.OK)
            {
                IFormatter formatter = new BinaryFormatter();
                using (Stream stream = new FileStream(saveFileDialog1.FileName, FileMode.Create, FileAccess.Write, FileShare.None))
                {
                    //!!!!
                    formatter.Serialize(stream, pts);
                }
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            OpenFileDialog openFileDialog1 = new OpenFileDialog();
            openFileDialog1.InitialDirectory = Directory.GetCurrentDirectory();// + "..\\myModels";
            openFileDialog1.Filter = "model files (*.mdl)|*.mdl|All files (*.*)|*.*";
            openFileDialog1.FilterIndex = 1;
            openFileDialog1.RestoreDirectory = true;
            if (openFileDialog1.ShowDialog() == DialogResult.OK)
            {
                Stream stream = File.Open(openFileDialog1.FileName, FileMode.Open);
                var binaryFormatter = new System.Runtime.Serialization.Formatters.Binary.BinaryFormatter();
                //!!!!
                pts=(FigureList)binaryFormatter.Deserialize(stream);
                pictureBox1.Invalidate();
            }
        }
        //!8e
    }
}
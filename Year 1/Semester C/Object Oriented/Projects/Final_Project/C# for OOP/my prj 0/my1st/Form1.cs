using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing; //!!
using System.Text;
using System.Windows.Forms;

namespace my1st
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        //!1b
        Point start, end;
        bool isPressed = false;
        //!1e

        //!2b
        private void pictureBox1_MouseDown(object sender, MouseEventArgs e)
        {
            start.X = e.X;
            start.Y = e.Y;
            isPressed = true;
        }

        private void pictureBox1_MouseUp(object sender, MouseEventArgs e)
        {
            end.X = e.X;
            end.Y = e.Y;
            isPressed = false;
            pictureBox1.Invalidate();
        }
        //!2e

        //!3b
        private void pictureBox1_Paint(object sender, PaintEventArgs e)
        {
            Graphics g = e.Graphics;
            g.SmoothingMode = System.Drawing.Drawing2D.SmoothingMode.HighQuality;
            SolidBrush br=new SolidBrush(Color.Red);
                                             
                                                  //must be >=0  //must be >=0
            g.FillRectangle(br, start.X, start.Y, end.X-start.X, end.Y - start.Y);
            g.DrawRectangle(Pens.Aqua, start.X, start.Y, end.X - start.X, end.Y - start.Y);
            
           //!4b instead of the last 2 lines 
            
            //int left, top, width, height;
            //left = Math.Min(start.X, end.X);
            //top = Math.Min(start.Y, end.Y);
            //width = Math.Abs(start.X - end.X);
            //height = Math.Abs(start.Y - end.Y);
            //g.FillRectangle(br, left, top, width, height);
            //g.DrawRectangle(Pens.Aqua, left, top, width, height);
            //!4e
        }
        //!3e

        //!5b
        private void pictureBox1_MouseMove(object sender, MouseEventArgs e)
        {
            //if (isPressed)
            //{
            //    end.X = e.X;
            //    end.Y = e.Y;
            //    //end = e.Location;
            //    pictureBox1.Invalidate();
            //}
        }
        //!5e
        
        //!6b
        private void button1_Click(object sender, EventArgs e)
        {
            string textboxValue = textBox1.Text;

            try
            {
                int valueInt = Int32.Parse(textboxValue);
                textBox2.Text = (valueInt + 3).ToString();
            }
            catch (Exception e1)
            {
                try
                {
                    double valueDec = Double.Parse(textboxValue);
                    textBox2.Text = (3 * valueDec).ToString();
                }
                catch (Exception e2)
                {
                    //...
                }
            }
        }
        //!6e

        //!7b
        private void textBox1_KeyPress(object sender, KeyPressEventArgs e)
        {
            ////uncomment
            //if (e.KeyChar == (char)Keys.Return)
            //    button1_Click(null, null);
        }
        //!7e


        //!8b
        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            ////uncomment
            //button1_Click(null, null);
        }
        //!8e
    }
}
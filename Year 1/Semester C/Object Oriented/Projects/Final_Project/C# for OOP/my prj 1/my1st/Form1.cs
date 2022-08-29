using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;
using System.Collections; //!1 provides SortedList

namespace my1st
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        //!2b           //!! not only declaration !!
        SortedList pts = new SortedList();
        int curIndex=-1;
        int radius = 6;
        //!2e

        //!3b
        private void pictureBox1_MouseDown(object sender, MouseEventArgs e)
        {
            curIndex=-1;
            double dx, dy;
            for (int i = 0; i < pts.Count; i++ )
            {
                              // WHY so many parentheses ?????
                                 //pts[i] is just a reference to 
                                 //an object of Object class
                                 //in SortedList
                dx = Math.Abs(((PointF)pts[i]).X - e.X);
                dy = Math.Abs(((PointF)pts[i]).Y - e.Y);
                if (dx * dx + dy * dy <= radius * radius)
                {
                    curIndex = i;
                    break;
                }
            }
            if (curIndex<0)
            {
                pts[pts.Count]=new PointF(e.X, e.Y);
                curIndex = pts.Count-1;
                pictureBox1.Invalidate();
            }
        }

        private void pictureBox1_MouseMove(object sender, MouseEventArgs e)
        {
            if (curIndex>=0)
            {
                pts[curIndex] = new PointF(e.X,e.Y); //garbage will be cleaned!!
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
            SolidBrush br=new SolidBrush(Color.Red);
            PointF p = new PointF(0, 0);
            PointF pPrev;
            Pen pen = new Pen(Color.Cyan, 2);
            for (int i = 0; i < pts.Count; i++)
            {
                p = (PointF)pts[i];
                if (i > 0)
                {
                    pPrev = (PointF)pts[i - 1];
                    g.DrawLine(Pens.Yellow, pPrev, p);
                }
                g.FillEllipse(br, p.X - radius, p.Y - 6, 2 * radius, 2 * radius);
                g.DrawEllipse(pen, p.X - 6, p.Y - 6, 2 * radius, 2 * radius);
            }
        }
        //!3e

        //!4b
//erase the following event handlers!!!
//and take care of...
        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void pictureBox1_Click(object sender, EventArgs e)
        {

        }

        private void pictureBox1_DragOver(object sender, DragEventArgs e)
        {

        }
        //!4e
    }
}
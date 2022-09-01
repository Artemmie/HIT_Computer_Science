namespace WindowsFormsApp3
{
    partial class Reg_Worker
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Reg_Worker));
            this.toolStrip2 = new System.Windows.Forms.ToolStrip();
            this.New_customer_butt = new System.Windows.Forms.ToolStripButton();
            this.toolStripSeparator1 = new System.Windows.Forms.ToolStripSeparator();
            this.Save_customer_butt = new System.Windows.Forms.ToolStripButton();
            this.toolStripSeparator2 = new System.Windows.Forms.ToolStripSeparator();
            this.Info_gbox = new System.Windows.Forms.GroupBox();
            this.label9 = new System.Windows.Forms.Label();
            this.Job_Decision = new System.Windows.Forms.CheckBox();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.label8 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.dateTimePicker1 = new System.Windows.Forms.DateTimePicker();
            this.label6 = new System.Windows.Forms.Label();
            this.label3 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.C_cell_text = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.C_last_text = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.C_first_text = new System.Windows.Forms.TextBox();
            this.C_id_text = new System.Windows.Forms.TextBox();
            this.toolStrip2.SuspendLayout();
            this.Info_gbox.SuspendLayout();
            this.SuspendLayout();
            // 
            // toolStrip2
            // 
            this.toolStrip2.ImageScalingSize = new System.Drawing.Size(32, 32);
            this.toolStrip2.ImeMode = System.Windows.Forms.ImeMode.Off;
            this.toolStrip2.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.New_customer_butt,
            this.toolStripSeparator1,
            this.Save_customer_butt,
            this.toolStripSeparator2});
            this.toolStrip2.Location = new System.Drawing.Point(0, 0);
            this.toolStrip2.Name = "toolStrip2";
            this.toolStrip2.Padding = new System.Windows.Forms.Padding(0, 0, 2, 0);
            this.toolStrip2.Size = new System.Drawing.Size(386, 39);
            this.toolStrip2.TabIndex = 1;
            this.toolStrip2.Text = "toolStrip2";
            // 
            // New_customer_butt
            // 
            this.New_customer_butt.Font = new System.Drawing.Font("Segoe UI", 14F);
            this.New_customer_butt.Image = ((System.Drawing.Image)(resources.GetObject("New_customer_butt.Image")));
            this.New_customer_butt.ImageScaling = System.Windows.Forms.ToolStripItemImageScaling.None;
            this.New_customer_butt.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.New_customer_butt.Name = "New_customer_butt";
            this.New_customer_butt.Size = new System.Drawing.Size(126, 36);
            this.New_customer_butt.Text = "Add Data";
            this.New_customer_butt.Click += new System.EventHandler(this.New_customer_butt_Click);
            // 
            // toolStripSeparator1
            // 
            this.toolStripSeparator1.Name = "toolStripSeparator1";
            this.toolStripSeparator1.Size = new System.Drawing.Size(6, 39);
            // 
            // Save_customer_butt
            // 
            this.Save_customer_butt.Enabled = false;
            this.Save_customer_butt.Font = new System.Drawing.Font("Segoe UI", 14F);
            this.Save_customer_butt.Image = ((System.Drawing.Image)(resources.GetObject("Save_customer_butt.Image")));
            this.Save_customer_butt.ImageAlign = System.Drawing.ContentAlignment.BottomCenter;
            this.Save_customer_butt.ImageScaling = System.Windows.Forms.ToolStripItemImageScaling.None;
            this.Save_customer_butt.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.Save_customer_butt.Name = "Save_customer_butt";
            this.Save_customer_butt.Size = new System.Drawing.Size(87, 36);
            this.Save_customer_butt.Text = "Save";
            this.Save_customer_butt.Click += new System.EventHandler(this.Save_customer_butt_Click);
            // 
            // toolStripSeparator2
            // 
            this.toolStripSeparator2.Name = "toolStripSeparator2";
            this.toolStripSeparator2.Size = new System.Drawing.Size(6, 39);
            // 
            // Info_gbox
            // 
            this.Info_gbox.Controls.Add(this.label9);
            this.Info_gbox.Controls.Add(this.Job_Decision);
            this.Info_gbox.Controls.Add(this.comboBox1);
            this.Info_gbox.Controls.Add(this.label8);
            this.Info_gbox.Controls.Add(this.label7);
            this.Info_gbox.Controls.Add(this.label5);
            this.Info_gbox.Controls.Add(this.dateTimePicker1);
            this.Info_gbox.Controls.Add(this.label6);
            this.Info_gbox.Controls.Add(this.label3);
            this.Info_gbox.Controls.Add(this.label1);
            this.Info_gbox.Controls.Add(this.C_cell_text);
            this.Info_gbox.Controls.Add(this.label4);
            this.Info_gbox.Controls.Add(this.C_last_text);
            this.Info_gbox.Controls.Add(this.label2);
            this.Info_gbox.Controls.Add(this.C_first_text);
            this.Info_gbox.Controls.Add(this.C_id_text);
            this.Info_gbox.Enabled = false;
            this.Info_gbox.Location = new System.Drawing.Point(4, 42);
            this.Info_gbox.Name = "Info_gbox";
            this.Info_gbox.Size = new System.Drawing.Size(367, 309);
            this.Info_gbox.TabIndex = 2;
            this.Info_gbox.TabStop = false;
            this.Info_gbox.Text = "Information";
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label9.Location = new System.Drawing.Point(14, 244);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(50, 24);
            this.label9.TabIndex = 19;
            this.label9.Text = "Title:";
            // 
            // Job_Decision
            // 
            this.Job_Decision.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.Job_Decision.Location = new System.Drawing.Point(68, 19);
            this.Job_Decision.Name = "Job_Decision";
            this.Job_Decision.Size = new System.Drawing.Size(202, 36);
            this.Job_Decision.TabIndex = 17;
            this.Job_Decision.Text = "External Company";
            this.Job_Decision.UseVisualStyleBackColor = true;
            // 
            // comboBox1
            // 
            this.comboBox1.Location = new System.Drawing.Point(152, 247);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(179, 21);
            this.comboBox1.TabIndex = 20;
            // 
            // label8
            // 
            this.label8.Location = new System.Drawing.Point(0, 0);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(100, 23);
            this.label8.TabIndex = 18;
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label7.Location = new System.Drawing.Point(14, 206);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(82, 24);
            this.label7.TabIndex = 15;
            this.label7.Text = "Birthday:";
            // 
            // label5
            // 
            this.label5.Location = new System.Drawing.Point(0, 0);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(100, 23);
            this.label5.TabIndex = 0;
            // 
            // dateTimePicker1
            // 
            this.dateTimePicker1.Location = new System.Drawing.Point(152, 208);
            this.dateTimePicker1.Name = "dateTimePicker1";
            this.dateTimePicker1.Size = new System.Drawing.Size(179, 20);
            this.dateTimePicker1.TabIndex = 14;
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label6.Location = new System.Drawing.Point(14, 172);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(102, 24);
            this.label6.TabIndex = 13;
            this.label6.Text = "Cellphone:";
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label3.Location = new System.Drawing.Point(14, 61);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(32, 24);
            this.label3.TabIndex = 12;
            this.label3.Text = "ID:";
            // 
            // label1
            // 
            this.label1.Location = new System.Drawing.Point(0, 0);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(100, 23);
            this.label1.TabIndex = 0;
            // 
            // C_cell_text
            // 
            this.C_cell_text.Location = new System.Drawing.Point(152, 172);
            this.C_cell_text.Name = "C_cell_text";
            this.C_cell_text.Size = new System.Drawing.Size(179, 20);
            this.C_cell_text.TabIndex = 6;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label4.Location = new System.Drawing.Point(14, 137);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(104, 24);
            this.label4.TabIndex = 5;
            this.label4.Text = "Last Name:";
            // 
            // C_last_text
            // 
            this.C_last_text.Location = new System.Drawing.Point(152, 141);
            this.C_last_text.Name = "C_last_text";
            this.C_last_text.Size = new System.Drawing.Size(179, 20);
            this.C_last_text.TabIndex = 4;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label2.Location = new System.Drawing.Point(14, 101);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(106, 24);
            this.label2.TabIndex = 3;
            this.label2.Text = "First Name:";
            // 
            // C_first_text
            // 
            this.C_first_text.Location = new System.Drawing.Point(152, 105);
            this.C_first_text.Name = "C_first_text";
            this.C_first_text.Size = new System.Drawing.Size(179, 20);
            this.C_first_text.TabIndex = 2;
            // 
            // C_id_text
            // 
            this.C_id_text.Location = new System.Drawing.Point(152, 65);
            this.C_id_text.Name = "C_id_text";
            this.C_id_text.Size = new System.Drawing.Size(179, 20);
            this.C_id_text.TabIndex = 0;
            // 
            // Reg_Worker
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(386, 365);
            this.Controls.Add(this.Info_gbox);
            this.Controls.Add(this.toolStrip2);
            this.KeyPreview = true;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "Reg_Worker";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterParent;
            this.Text = "New Worker";
            this.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Reg_Customer_KeyDown);
            this.toolStrip2.ResumeLayout(false);
            this.toolStrip2.PerformLayout();
            this.Info_gbox.ResumeLayout(false);
            this.Info_gbox.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ToolStrip toolStrip2;
        private System.Windows.Forms.ToolStripButton New_customer_butt;
        private System.Windows.Forms.ToolStripButton Save_customer_butt;
        private System.Windows.Forms.GroupBox Info_gbox;
        private System.Windows.Forms.TextBox C_cell_text;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox C_last_text;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox C_first_text;
        private System.Windows.Forms.TextBox C_id_text;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.DateTimePicker dateTimePicker1;
        private System.Windows.Forms.ToolStripSeparator toolStripSeparator1;
        private System.Windows.Forms.ToolStripSeparator toolStripSeparator2;
        private System.Windows.Forms.ComboBox comboBox1;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.CheckBox Job_Decision;
        private System.Windows.Forms.Label label9;
    }
}
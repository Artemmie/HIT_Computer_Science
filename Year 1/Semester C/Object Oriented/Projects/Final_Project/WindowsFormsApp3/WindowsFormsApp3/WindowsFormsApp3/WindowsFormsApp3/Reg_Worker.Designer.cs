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
            this.New_butt = new System.Windows.Forms.ToolStripButton();
            this.Save_butt = new System.Windows.Forms.ToolStripButton();
            this.info_gbox = new System.Windows.Forms.GroupBox();
            this.label5 = new System.Windows.Forms.Label();
            this.W_year_text = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.W_cell_text = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.W_last_text = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.W_first_text = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.W_id_text = new System.Windows.Forms.TextBox();
            this.toolStrip2.SuspendLayout();
            this.info_gbox.SuspendLayout();
            this.SuspendLayout();
            // 
            // toolStrip2
            // 
            this.toolStrip2.ImageScalingSize = new System.Drawing.Size(32, 32);
            this.toolStrip2.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.New_butt,
            this.Save_butt});
            this.toolStrip2.Location = new System.Drawing.Point(0, 0);
            this.toolStrip2.Name = "toolStrip2";
            this.toolStrip2.Size = new System.Drawing.Size(384, 39);
            this.toolStrip2.TabIndex = 0;
            this.toolStrip2.Text = "toolStrip2";
            // 
            // New_butt
            // 
            this.New_butt.Font = new System.Drawing.Font("Segoe UI", 14F);
            this.New_butt.Image = ((System.Drawing.Image)(resources.GetObject("New_butt.Image")));
            this.New_butt.ImageScaling = System.Windows.Forms.ToolStripItemImageScaling.None;
            this.New_butt.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.New_butt.Name = "New_butt";
            this.New_butt.Size = new System.Drawing.Size(126, 36);
            this.New_butt.Text = "Add Data";
            this.New_butt.Click += new System.EventHandler(this.New_butt_Click);
            // 
            // Save_butt
            // 
            this.Save_butt.Enabled = false;
            this.Save_butt.Font = new System.Drawing.Font("Segoe UI", 14F);
            this.Save_butt.Image = ((System.Drawing.Image)(resources.GetObject("Save_butt.Image")));
            this.Save_butt.ImageScaling = System.Windows.Forms.ToolStripItemImageScaling.None;
            this.Save_butt.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.Save_butt.Name = "Save_butt";
            this.Save_butt.Size = new System.Drawing.Size(87, 36);
            this.Save_butt.Text = "Save";
            this.Save_butt.Click += new System.EventHandler(this.Save_butt_Click);
            // 
            // info_gbox
            // 
            this.info_gbox.Controls.Add(this.W_id_text);
            this.info_gbox.Controls.Add(this.label1);
            this.info_gbox.Controls.Add(this.label5);
            this.info_gbox.Controls.Add(this.W_year_text);
            this.info_gbox.Controls.Add(this.label3);
            this.info_gbox.Controls.Add(this.W_cell_text);
            this.info_gbox.Controls.Add(this.label4);
            this.info_gbox.Controls.Add(this.W_last_text);
            this.info_gbox.Controls.Add(this.label2);
            this.info_gbox.Controls.Add(this.W_first_text);
            this.info_gbox.Enabled = false;
            this.info_gbox.Location = new System.Drawing.Point(12, 42);
            this.info_gbox.Name = "info_gbox";
            this.info_gbox.Size = new System.Drawing.Size(359, 222);
            this.info_gbox.TabIndex = 1;
            this.info_gbox.TabStop = false;
            this.info_gbox.Text = "Information";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label5.Location = new System.Drawing.Point(9, 177);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(96, 24);
            this.label5.TabIndex = 11;
            this.label5.Text = "Birth Year:";
            // 
            // W_year_text
            // 
            this.W_year_text.Location = new System.Drawing.Point(152, 181);
            this.W_year_text.Name = "W_year_text";
            this.W_year_text.Size = new System.Drawing.Size(56, 20);
            this.W_year_text.TabIndex = 10;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label3.Location = new System.Drawing.Point(9, 137);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(102, 24);
            this.label3.TabIndex = 7;
            this.label3.Text = "Cellphone:";
            // 
            // W_cell_text
            // 
            this.W_cell_text.Location = new System.Drawing.Point(152, 141);
            this.W_cell_text.Name = "W_cell_text";
            this.W_cell_text.Size = new System.Drawing.Size(158, 20);
            this.W_cell_text.TabIndex = 6;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label4.Location = new System.Drawing.Point(9, 102);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(104, 24);
            this.label4.TabIndex = 5;
            this.label4.Text = "Last Name:";
            // 
            // W_last_text
            // 
            this.W_last_text.Location = new System.Drawing.Point(152, 106);
            this.W_last_text.Name = "W_last_text";
            this.W_last_text.Size = new System.Drawing.Size(175, 20);
            this.W_last_text.TabIndex = 4;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label2.Location = new System.Drawing.Point(9, 65);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(106, 24);
            this.label2.TabIndex = 3;
            this.label2.Text = "First Name:";
            // 
            // W_first_text
            // 
            this.W_first_text.Location = new System.Drawing.Point(152, 69);
            this.W_first_text.Name = "W_first_text";
            this.W_first_text.Size = new System.Drawing.Size(175, 20);
            this.W_first_text.TabIndex = 2;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label1.Location = new System.Drawing.Point(9, 31);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(32, 24);
            this.label1.TabIndex = 12;
            this.label1.Text = "ID:";
            // 
            // W_id_text
            // 
            this.W_id_text.Location = new System.Drawing.Point(152, 35);
            this.W_id_text.Name = "W_id_text";
            this.W_id_text.Size = new System.Drawing.Size(175, 20);
            this.W_id_text.TabIndex = 13;
            // 
            // Reg_Worker
            // 
            this.ClientSize = new System.Drawing.Size(384, 276);
            this.Controls.Add(this.info_gbox);
            this.Controls.Add(this.toolStrip2);
            this.KeyPreview = true;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "Reg_Worker";
            this.ShowInTaskbar = false;
            this.Text = "New Worker";
            this.Load += new System.EventHandler(this.Reg_Worker_Load);
            this.KeyDown += new System.Windows.Forms.KeyEventHandler(this.Reg_Worker_KeyDown);
            this.toolStrip2.ResumeLayout(false);
            this.toolStrip2.PerformLayout();
            this.info_gbox.ResumeLayout(false);
            this.info_gbox.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ToolStrip toolStrip2;
        private System.Windows.Forms.ToolStripButton New_butt;
        private System.Windows.Forms.ToolStripButton Save_butt;
        private System.Windows.Forms.GroupBox info_gbox;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox W_first_text;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox W_year_text;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox W_cell_text;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox W_last_text;
        private System.Windows.Forms.TextBox W_id_text;
        private System.Windows.Forms.Label label1;
    }
}
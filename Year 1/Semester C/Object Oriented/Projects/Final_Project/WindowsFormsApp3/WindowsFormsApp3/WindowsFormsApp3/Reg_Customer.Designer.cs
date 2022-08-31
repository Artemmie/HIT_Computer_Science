namespace WindowsFormsApp3
{
    partial class Reg_Customer
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Reg_Customer));
            this.toolStrip2 = new System.Windows.Forms.ToolStrip();
            this.New_customer_butt = new System.Windows.Forms.ToolStripButton();
            this.Save_customer_butt = new System.Windows.Forms.ToolStripButton();
            this.Info_gbox = new System.Windows.Forms.GroupBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.C_year_text = new System.Windows.Forms.TextBox();
            this.C_cell_text = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.C_last_text = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.C_first_text = new System.Windows.Forms.TextBox();
            this.C_id_text = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.C_month_text = new System.Windows.Forms.TextBox();
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
            this.Save_customer_butt});
            this.toolStrip2.Location = new System.Drawing.Point(0, 0);
            this.toolStrip2.Name = "toolStrip2";
            this.toolStrip2.Padding = new System.Windows.Forms.Padding(0, 0, 2, 0);
            this.toolStrip2.Size = new System.Drawing.Size(369, 39);
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
            // Info_gbox
            // 
            this.Info_gbox.Controls.Add(this.C_month_text);
            this.Info_gbox.Controls.Add(this.label7);
            this.Info_gbox.Controls.Add(this.label6);
            this.Info_gbox.Controls.Add(this.label3);
            this.Info_gbox.Controls.Add(this.label1);
            this.Info_gbox.Controls.Add(this.label5);
            this.Info_gbox.Controls.Add(this.C_year_text);
            this.Info_gbox.Controls.Add(this.C_cell_text);
            this.Info_gbox.Controls.Add(this.label4);
            this.Info_gbox.Controls.Add(this.C_last_text);
            this.Info_gbox.Controls.Add(this.label2);
            this.Info_gbox.Controls.Add(this.C_first_text);
            this.Info_gbox.Controls.Add(this.C_id_text);
            this.Info_gbox.Enabled = false;
            this.Info_gbox.Location = new System.Drawing.Point(4, 42);
            this.Info_gbox.Name = "Info_gbox";
            this.Info_gbox.Size = new System.Drawing.Size(359, 251);
            this.Info_gbox.TabIndex = 2;
            this.Info_gbox.TabStop = false;
            this.Info_gbox.Text = "Information";
            // 
            // label1
            // 
            this.label1.Location = new System.Drawing.Point(0, 0);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(100, 23);
            this.label1.TabIndex = 0;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label5.Location = new System.Drawing.Point(14, 171);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(96, 24);
            this.label5.TabIndex = 11;
            this.label5.Text = "Birth Year:";
            // 
            // C_year_text
            // 
            this.C_year_text.Location = new System.Drawing.Point(152, 175);
            this.C_year_text.Name = "C_year_text";
            this.C_year_text.Size = new System.Drawing.Size(72, 20);
            this.C_year_text.TabIndex = 10;
            // 
            // C_cell_text
            // 
            this.C_cell_text.Location = new System.Drawing.Point(152, 138);
            this.C_cell_text.Name = "C_cell_text";
            this.C_cell_text.Size = new System.Drawing.Size(160, 20);
            this.C_cell_text.TabIndex = 6;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label4.Location = new System.Drawing.Point(14, 99);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(104, 24);
            this.label4.TabIndex = 5;
            this.label4.Text = "Last Name:";
            // 
            // C_last_text
            // 
            this.C_last_text.Location = new System.Drawing.Point(152, 103);
            this.C_last_text.Name = "C_last_text";
            this.C_last_text.Size = new System.Drawing.Size(179, 20);
            this.C_last_text.TabIndex = 4;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label2.Location = new System.Drawing.Point(12, 64);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(106, 24);
            this.label2.TabIndex = 3;
            this.label2.Text = "First Name:";
            // 
            // C_first_text
            // 
            this.C_first_text.Location = new System.Drawing.Point(152, 68);
            this.C_first_text.Name = "C_first_text";
            this.C_first_text.Size = new System.Drawing.Size(179, 20);
            this.C_first_text.TabIndex = 2;
            // 
            // C_id_text
            // 
            this.C_id_text.Location = new System.Drawing.Point(152, 30);
            this.C_id_text.Name = "C_id_text";
            this.C_id_text.Size = new System.Drawing.Size(160, 20);
            this.C_id_text.TabIndex = 0;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label3.Location = new System.Drawing.Point(14, 26);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(32, 24);
            this.label3.TabIndex = 12;
            this.label3.Text = "ID:";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label6.Location = new System.Drawing.Point(14, 134);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(97, 24);
            this.label6.TabIndex = 13;
            this.label6.Text = "Cellphone";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Font = new System.Drawing.Font("Microsoft Sans Serif", 14F);
            this.label7.Location = new System.Drawing.Point(12, 204);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(105, 24);
            this.label7.TabIndex = 14;
            this.label7.Text = "Birth Month";
            // 
            // C_month_text
            // 
            this.C_month_text.Location = new System.Drawing.Point(152, 208);
            this.C_month_text.Name = "C_month_text";
            this.C_month_text.Size = new System.Drawing.Size(72, 20);
            this.C_month_text.TabIndex = 15;
            // 
            // Reg_Customer
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(369, 296);
            this.Controls.Add(this.Info_gbox);
            this.Controls.Add(this.toolStrip2);
            this.KeyPreview = true;
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "Reg_Customer";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterParent;
            this.Text = "New Customer";
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
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox C_year_text;
        private System.Windows.Forms.TextBox C_cell_text;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox C_last_text;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox C_first_text;
        private System.Windows.Forms.TextBox C_id_text;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox C_month_text;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Label label3;
    }
}
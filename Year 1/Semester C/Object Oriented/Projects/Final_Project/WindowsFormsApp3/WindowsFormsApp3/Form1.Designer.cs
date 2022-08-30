namespace WindowsFormsApp3
{
    partial class Form1
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
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.Register_Worker = new System.Windows.Forms.ToolStripButton();
            this.toolStrip1 = new System.Windows.Forms.ToolStrip();
            this.Register_Customer = new System.Windows.Forms.ToolStripButton();
            this.Save = new System.Windows.Forms.ToolStripButton();
            this.Load = new System.Windows.Forms.ToolStripButton();
            this.Exit = new System.Windows.Forms.ToolStripButton();
            this.personListBindingSource1 = new System.Windows.Forms.BindingSource(this.components);
            this.personListBindingSource = new System.Windows.Forms.BindingSource(this.components);
            this.dataGridView1 = new System.Windows.Forms.DataGridView();
            this.toolStrip1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.personListBindingSource1)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.personListBindingSource)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).BeginInit();
            this.SuspendLayout();
            // 
            // Register_Worker
            // 
            this.Register_Worker.Font = new System.Drawing.Font("Segoe UI", 14F);
            this.Register_Worker.Image = global::WindowsFormsApp3.Properties.Resources.Worker;
            this.Register_Worker.ImageAlign = System.Drawing.ContentAlignment.MiddleRight;
            this.Register_Worker.ImageScaling = System.Windows.Forms.ToolStripItemImageScaling.None;
            this.Register_Worker.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.Register_Worker.Name = "Register_Worker";
            this.Register_Worker.Size = new System.Drawing.Size(181, 65);
            this.Register_Worker.Text = "Register Worker";
            this.Register_Worker.Click += new System.EventHandler(this.Register_Worker_Click);
            // 
            // toolStrip1
            // 
            this.toolStrip1.AutoSize = false;
            this.toolStrip1.ImageScalingSize = new System.Drawing.Size(32, 32);
            this.toolStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.Register_Worker,
            this.Register_Customer,
            this.Save,
            this.Load,
            this.Exit});
            this.toolStrip1.Location = new System.Drawing.Point(0, 0);
            this.toolStrip1.Name = "toolStrip1";
            this.toolStrip1.Padding = new System.Windows.Forms.Padding(0, 0, 2, 0);
            this.toolStrip1.Size = new System.Drawing.Size(1221, 68);
            this.toolStrip1.TabIndex = 0;
            this.toolStrip1.Text = "toolStrip1";
            // 
            // Register_Customer
            // 
            this.Register_Customer.Font = new System.Drawing.Font("Segoe UI", 14F);
            this.Register_Customer.Image = global::WindowsFormsApp3.Properties.Resources.Customer;
            this.Register_Customer.ImageScaling = System.Windows.Forms.ToolStripItemImageScaling.None;
            this.Register_Customer.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.Register_Customer.Name = "Register_Customer";
            this.Register_Customer.Size = new System.Drawing.Size(201, 65);
            this.Register_Customer.Text = "Register Customer";
            this.Register_Customer.Click += new System.EventHandler(this.Register_Customer_Click);
            // 
            // Save
            // 
            this.Save.Font = new System.Drawing.Font("Segoe UI", 14F);
            this.Save.Image = ((System.Drawing.Image)(resources.GetObject("Save.Image")));
            this.Save.ImageScaling = System.Windows.Forms.ToolStripItemImageScaling.None;
            this.Save.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.Save.Name = "Save";
            this.Save.Size = new System.Drawing.Size(87, 65);
            this.Save.Text = "Save";
            this.Save.Click += new System.EventHandler(this.Save_Click);
            // 
            // Load
            // 
            this.Load.Font = new System.Drawing.Font("Segoe UI", 14F);
            this.Load.Image = ((System.Drawing.Image)(resources.GetObject("Load.Image")));
            this.Load.ImageScaling = System.Windows.Forms.ToolStripItemImageScaling.None;
            this.Load.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.Load.Name = "Load";
            this.Load.Size = new System.Drawing.Size(89, 65);
            this.Load.Text = "Load";
            this.Load.Click += new System.EventHandler(this.Load_Click);
            // 
            // Exit
            // 
            this.Exit.Alignment = System.Windows.Forms.ToolStripItemAlignment.Right;
            this.Exit.Font = new System.Drawing.Font("Segoe UI", 12F);
            this.Exit.Image = ((System.Drawing.Image)(resources.GetObject("Exit.Image")));
            this.Exit.ImageScaling = System.Windows.Forms.ToolStripItemImageScaling.None;
            this.Exit.ImageTransparentColor = System.Drawing.Color.Magenta;
            this.Exit.Name = "Exit";
            this.Exit.Size = new System.Drawing.Size(70, 65);
            this.Exit.Text = "Exit";
            this.Exit.Click += new System.EventHandler(this.Exit_Click);
            // 
            // personListBindingSource1
            // 
            this.personListBindingSource1.DataSource = typeof(Data.PersonList);
            // 
            // personListBindingSource
            // 
            this.personListBindingSource.DataSource = typeof(Data.PersonList);
            // 
            // dataGridView1
            // 
            this.dataGridView1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView1.Location = new System.Drawing.Point(432, 71);
            this.dataGridView1.Name = "dataGridView1";
            this.dataGridView1.Size = new System.Drawing.Size(789, 578);
            this.dataGridView1.TabIndex = 4;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.ClientSize = new System.Drawing.Size(1221, 687);
            this.Controls.Add(this.dataGridView1);
            this.Controls.Add(this.toolStrip1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.IsMdiContainer = true;
            this.Name = "Form1";
            this.Text = "Form1";
            this.toolStrip1.ResumeLayout(false);
            this.toolStrip1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.personListBindingSource1)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.personListBindingSource)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.ToolStrip toolStrip1;
        private System.Windows.Forms.ToolStripButton Register_Customer;
        private System.Windows.Forms.ToolStripButton Save;
        private System.Windows.Forms.ToolStripButton Load;
        private System.Windows.Forms.ToolStripButton Exit;
        private System.Windows.Forms.ToolStripButton Register_Worker;
        private System.Windows.Forms.BindingSource personListBindingSource;
        private System.Windows.Forms.BindingSource personListBindingSource1;
        private System.Windows.Forms.DataGridView dataGridView1;
    }
}


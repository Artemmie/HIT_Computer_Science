using System.Drawing;

namespace FIGURES
{
	using System;
	using System.Collections;

    [Serializable] //!7
    //1b
    public abstract class Figure
    {
        float x;  //private by default
        float y;  //private
        //Properties
        public float X
        {
            get
            {
                return x;
            }
            set
            {
                x = value;
            }
        }

        public float Y
        {
            get
            {
                return y;
            }
            set
            {
                y = value;
            }
        }

        public abstract void Draw(Graphics g);
        public abstract bool isInside(int xP, int yP);        
    }

    [Serializable] //!7
    public class myCircle: Figure 
	{
        float radius;  //private
		public myCircle() 
			: this(10,10,5) //!!!!
        {}
		
		public myCircle(float xVal,float yVal,float rVal) 
		{
            X=xVal;
            Y=yVal;
            radius =rVal;
		}
	    

		public float Radius 
		{
			get 
			{
				return radius;
			}
			set 
			{
				radius = value;
			}
		}

        public override void Draw(Graphics g)
        {
            SolidBrush br = new SolidBrush(Color.Red);
            Pen pen = new Pen(Color.Cyan, 2);
            g.FillEllipse(br, X - radius, Y - radius, 2 * radius, 2 * radius);
            g.DrawEllipse(pen, X - radius, Y - radius, 2 * radius, 2 * radius);
        }
        public override bool isInside(int xP, int yP)
        {
            return Math.Sqrt((xP - X) * (xP - X) + (yP - Y) * (yP - Y)) < radius;
        }

        ~myCircle() {}
	   
	}
    [Serializable]  //!7
    public class myRectangle: Figure
    {
        float width;
        float height;
        public myRectangle()
            : this(10, 10, 10,20) //!!!!!! 
        { } 

        public myRectangle(float xVal, float yVal, float wVal, float hVal)
        {
            X = xVal;
            Y = yVal;
            width = wVal;
            height=hVal;
        }

        public float Height
        {
            get
            {
                return height;
            }
            set
            {
                height = value;
            }
        }

        public float Width
        {
            get
            {
                return width;
            }
            set
            {
                width = value;
            }
        }

        public override void Draw(Graphics g)
        {
            SolidBrush br = new SolidBrush(Color.Red);
            Pen pen = new Pen(Color.Cyan, 2);
            g.FillRectangle(br, X - width/2, Y - height/2, width, height);
            g.DrawRectangle(pen, X - width/2, Y - height/2, width, height);
        }
        public override bool isInside(int xP, int yP)
        {
            return Math.Abs(xP - X)<=width/2 && Math.Abs(yP - Y) <= height / 2;
        }

        ~myRectangle() { }

    }
    //!1e

    [Serializable]  //!7
    //!2b
    public class FigureList 
	{
		protected SortedList figures;
	
		public FigureList() 
		{
			figures = new SortedList();
		}
		public int NextIndex 
		{
			get 
			{
				return figures.Count;
			}
			//!!!
			// !! there is no set !!
		}
		public Figure this[int index] 
		{
			get 
			{
				if (index >= figures.Count)
                    return (Figure)null;
				                       //SortedList internal method
                return (Figure)figures.GetByIndex(index);
			}
			set 
			{
				if ( index <= figures.Count )
					figures[index] = value; //!!!		
			}
		}
        
        public void Remove(int element) 
		{
            if (element >= 0 && element < figures.Count)
            {
                for (int i = element; i < figures.Count - 1; i++)
                    figures[i] = figures[i + 1];
                figures.RemoveAt(figures.Count - 1);
            }
		}

        // new method
        public void DrawAll(Graphics g)
        {
            Figure prev, cur;
            for (int i = 1; i < figures.Count; i++)
            {
                prev = (Figure)figures[i-1];
                cur = (Figure)figures[i];
                g.DrawLine( Pens.Yellow, prev.X,prev.Y, cur.X, cur.Y );

                ((Figure)figures[i]).Draw(g);
            }
            for (int i = 0; i < figures.Count; i++)
                ((Figure)figures[i]).Draw(g);
        }
    
    }
    //2e
}

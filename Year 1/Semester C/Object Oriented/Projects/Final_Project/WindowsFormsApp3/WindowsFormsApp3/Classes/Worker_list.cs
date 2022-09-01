using WindowsFormsApp3.Classes;
using System;
using System.Collections.Generic;

namespace WindowsFormsApp3.Classes
{
    [Serializable]
    public class WorkerList
    {
        protected List<Worker> workers;
        public WorkerList() { workers = new List<Worker>(); }
        public int NextIndex { get { return workers.Count; } }
        public Worker this[int index]
        {
            get
            {
                if (index >= workers.Count) return null;
                return workers[index];
            }
            set
            {
                workers.Add(value);
            }
        }
        public List<Worker> GetList() { return workers; }
        public void Remove(int element)
        {
            if (element >= 0 && element < workers.Count)
            {
                for (int i = element; i < workers.Count - 1; i++)
                    workers[i] = workers[i + 1];
                workers.RemoveAt(workers.Count - 1);
            }
        }
    }
}

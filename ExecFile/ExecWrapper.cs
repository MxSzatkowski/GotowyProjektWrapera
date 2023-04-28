using System;
using System.Collections.Generic;
using System.Text;
using Wrapper;

namespace ExecFile
{
    public class ExecWrapper
    {
        public float UseWrapperMethod()
        {
            var wrap = new Ent();
            return wrap.Add(10, 35);
        }

    }
}

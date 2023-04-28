using System;
using System.Runtime.InteropServices;

namespace Wrapper
{
  public class Ent : IDisposable
    {
        public const string DllPath = @"..\..\..\..\x64\Debug\CPlusPlus.dll";

        [DllImport("CPlusPlus.dll", CallingConvention = CallingConvention.Cdecl)]
        static private extern IntPtr CreateTestClass();

        [DllImport("CPlusPlus.dll", CallingConvention = CallingConvention.Cdecl)]
        static private extern void DisposeTestClass(IntPtr pTestClassObject);

        [DllImport("CPlusPlus.dll", CallingConvention = CallingConvention.Cdecl)]

        static private extern float CallAdd(IntPtr pTestClassObject, float a, float b);

        #region Members
        private IntPtr m_pNativeObject;
        #endregion Members

        public Ent()
        {
            this.m_pNativeObject = CreateTestClass();
        }
        public void Dispose()
        {
            Dispose(true);
        }

        protected virtual void Dispose(bool bDisposing)
        {
            if (this.m_pNativeObject != IntPtr.Zero)
            {
                DisposeTestClass(this.m_pNativeObject);
                this.m_pNativeObject = IntPtr.Zero;
            }

            if (bDisposing)
            {
                GC.SuppressFinalize(this);
            }
        }
        ~Ent()
        {
            Dispose(false);
        }

        public float Add(float a, float b)
        {
           return CallAdd(this.m_pNativeObject, a, b);
        }
    }
}

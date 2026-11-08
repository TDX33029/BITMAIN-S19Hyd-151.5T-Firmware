// FUN_01641890 @ 01641890 size=148 calls_out=4 calls_in=0
// strings: assertion failed: fd >= 0fatal runtime error: thread result panicked on drop; aborting num_idle_threads underflowed on thread exit

void FUN_01641890(int *param_1,int param_2)

{
  undefined8 uVar1;
  int iStack_24;
  int iStack_20;
  int local_1c;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: fd >= 0fatal runtime error: thread result panicked on drop, aborting\nnum_idle_threads underflowed on thread exit"
                 ,0x19,&DAT_018acc40);
  }
  uVar1 = FUN_0164ec90(&DAT_01861c74);
  FUN_01657a90(&iStack_24,param_2,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20),&DAT_01861c74);
  if (iStack_24 == 2) {
    FUN_016dffb2(param_2);
    *param_1 = 2;
    param_1[1] = iStack_20;
    param_1[2] = local_1c;
    return;
  }
  param_1[3] = param_2;
  *param_1 = iStack_24;
  param_1[1] = iStack_20;
  param_1[2] = local_1c;
  return;
}


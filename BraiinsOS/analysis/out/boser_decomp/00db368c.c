// FUN_00db368c @ 00db368c size=100 calls_out=1 calls_in=0
// strings: 

void FUN_00db368c(float param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_40 [16];
  undefined4 local_30;
  
  uVar1 = 0x80000000;
  if (((uint)((ulonglong)(double)param_1 >> 0x20) & 0x7fffffff) < 0x7ff00000) {
    local_30 = 0x80000000;
    FUN_00db19c4(auStack_40);
    uVar1 = 0x80000001;
  }
  *param_2 = 2;
  param_2[1] = 0;
  param_2[4] = uVar1;
  *(double *)(param_2 + 2) = (double)param_1;
  return;
}


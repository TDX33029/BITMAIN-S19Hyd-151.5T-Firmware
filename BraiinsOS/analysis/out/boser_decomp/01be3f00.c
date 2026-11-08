// FUN_01be3f00 @ 01be3f00 size=64 calls_out=1 calls_in=0
// strings: 

void FUN_01be3f00(int *param_1)

{
  int iVar1;
  
  if (-1 < param_1[2]) {
    iVar1 = *param_1;
    software_interrupt(0);
    if ((iVar1 != 0) && (param_1[2] == 0)) {
      FUN_01bea6b8(0,param_1[1]);
      software_interrupt(0);
      software_interrupt(0);
    }
    param_1[2] = iVar1;
  }
  return;
}


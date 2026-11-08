// FUN_01288f84 @ 01288f84 size=92 calls_out=2 calls_in=2
// strings: 

void FUN_01288f84(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_01be3f8c(0x10,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  *(undefined1 *)((int)param_1 + 0x51) = 3;
  param_1[8] = 0;
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  param_1[3] = 1;
  param_1[4] = iVar1;
  param_1[5] = 1;
  param_1[6] = 0;
  param_1[7] = 8;
  return;
}


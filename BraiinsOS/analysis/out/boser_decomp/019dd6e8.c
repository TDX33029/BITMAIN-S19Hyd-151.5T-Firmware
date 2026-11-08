// FUN_019dd6e8 @ 019dd6e8 size=128 calls_out=2 calls_in=3
// strings: assertion failed: fd >= 0

void FUN_019dd6e8(int *param_1,int param_2)

{
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: fd >= 0",0x19,&DAT_01d29554);
  }
  FUN_019dd788(&local_20,param_2);
  if (local_20 == 2) {
    param_1[1] = local_1c;
    *param_1 = 2;
    param_1[2] = local_18;
  }
  else {
    *param_1 = local_20;
    param_1[1] = local_1c;
    param_1[2] = local_18;
    param_1[3] = local_14;
  }
  return;
}


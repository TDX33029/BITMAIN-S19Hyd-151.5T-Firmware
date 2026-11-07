// FUN_0169d920 @ 0169d920 size=196 calls_out=5 calls_in=0
// strings: 

void FUN_0169d920(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if (param_2[0x254] == 2) {
    if (*param_2 == 2 && param_2[1] == 0) goto LAB_0169d99c;
    if (*(int *)(param_3 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d08054);
    }
    FUN_0169e7e8(&local_28,param_2,param_3 + 0xd8,param_4);
  }
  else {
    FUN_0169e238(&local_28,param_2 + 0x144,param_4);
  }
  if (local_28 != 2) {
    param_1[2] = local_20;
    *param_1 = local_28;
    param_1[1] = local_24;
    param_1[3] = local_1c;
    return;
  }
  FUN_016c2dec(local_24);
LAB_0169d99c:
  FUN_0169e4e0(param_1,param_2,param_3,param_4);
  return;
}


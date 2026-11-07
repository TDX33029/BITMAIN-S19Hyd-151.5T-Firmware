// FUN_01aedb00 @ 01aedb00 size=144 calls_out=2 calls_in=1
// strings: 

void FUN_01aedb00(int *param_1,int param_2)

{
  int *piVar1;
  int local_40;
  int local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  piVar1 = *(int **)(param_2 + 0xc);
  FUN_01af5170(&local_40);
  if (local_40 == 3 && local_3c == 0) {
    local_3c = 0;
    local_40 = 2;
  }
  else {
    if (local_40 == 2 && local_3c == 0) {
      local_3c = 0;
      local_40 = 2;
      if (*piVar1 != -0x7fffffd3) {
        FUN_01aeb5f4(piVar1);
      }
    }
    else {
      piVar1 = param_1 + 2;
    }
    *piVar1 = local_38;
    piVar1[1] = iStack_34;
    piVar1[2] = iStack_30;
    piVar1[3] = iStack_2c;
    piVar1[4] = local_28;
    piVar1[5] = iStack_24;
    piVar1[6] = iStack_20;
    piVar1[7] = iStack_1c;
  }
  *param_1 = local_40;
  param_1[1] = local_3c;
  return;
}


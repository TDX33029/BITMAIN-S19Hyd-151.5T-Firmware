// FUN_0162eb3c @ 0162eb3c size=232 calls_out=3 calls_in=1
// strings: 

void FUN_0162eb3c(int *param_1,int param_2)

{
  int *piVar1;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  piVar1 = *(int **)(param_2 + 0xc);
  do {
    FUN_0162385c(&local_5c,param_2);
    if (local_5c == -0x7fffffff) {
LAB_0162ec10:
      local_34 = -0x80000000;
      goto LAB_0162ec18;
    }
    if (local_5c != -0x80000000) {
      local_30 = local_5c;
      iStack_2c = local_58;
      iStack_28 = local_54;
LAB_0162ebf4:
      local_40 = local_30;
      iStack_3c = iStack_2c;
      iStack_38 = iStack_28;
      if (*piVar1 != -0x80000000) {
        FUN_0134bd64(*piVar1,piVar1[1]);
      }
      *piVar1 = local_40;
      piVar1[1] = iStack_3c;
      piVar1[2] = iStack_38;
      goto LAB_0162ec10;
    }
    FUN_01642210(&local_34);
    local_40 = local_30;
    iStack_3c = iStack_2c;
    iStack_38 = iStack_28;
    if (local_34 == -0x80000000) goto LAB_0162ebf4;
    local_50 = local_30;
    iStack_4c = iStack_2c;
    iStack_48 = iStack_28;
  } while (local_34 == -0x7fffffff);
  param_1[1] = local_30;
  param_1[2] = iStack_2c;
  param_1[3] = iStack_28;
LAB_0162ec18:
  *param_1 = local_34;
  return;
}


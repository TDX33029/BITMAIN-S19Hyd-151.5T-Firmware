// FUN_01a45604 @ 01a45604 size=148 calls_out=1 calls_in=1
// strings: 

void FUN_01a45604(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int local_30;
  int local_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_3 + 0xc);
    do {
      FUN_01a47010(&local_30,param_3);
      if (local_30 != 3) {
        param_1[1] = local_2c;
        param_1[2] = iStack_28;
        param_1[3] = iStack_24;
        param_1[4] = iStack_20;
        param_1[5] = iStack_1c;
        goto LAB_01a4568c;
      }
      if (*(int *)(param_3 + 0xc) == iVar1) {
        param_1[1] = 0;
        param_1[2] = 4;
        param_1[3] = 0;
        param_1[4] = 0;
        local_30 = 2;
        goto LAB_01a4568c;
      }
      param_2 = param_2 + -1;
      iVar1 = *(int *)(param_3 + 0xc);
    } while (param_2 != 0);
  }
  local_30 = 3;
LAB_01a4568c:
  *param_1 = local_30;
  return;
}

